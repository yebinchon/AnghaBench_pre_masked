
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_11__ {int type; int numOfCols; int meterId; TYPE_1__* schema; } ;
struct TYPE_10__ {int thandle; TYPE_2__* pUser; scalar_t__ pDb; int writeAuth; } ;
struct TYPE_9__ {int user; } ;
struct TYPE_8__ {int bytes; } ;
typedef TYPE_3__ SConnObj ;
typedef TYPE_4__ SAlterTableMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(char *VAR_4, int VAR_5, SConnObj *VAR_6) {
  SAlterTableMsg *VAR_7 = (SAlterTableMsg *)VAR_4;
  int VAR_8;

  if (FUNC_4(VAR_6, VAR_3) != 0) {
    return 0;
  }

  if (!VAR_6->writeAuth) {
    VAR_8 = VAR_2;
  } else {
    VAR_7->type = FUNC_0(VAR_7->type);
    VAR_7->numOfCols = FUNC_0(VAR_7->numOfCols);

    if (VAR_7->numOfCols > 2) {
      FUNC_1("meter:%s error numOfCols:%d in alter table", VAR_7->meterId, VAR_7->numOfCols);
      VAR_8 = VAR_0;
    } else {
      if (VAR_6->pDb) {
        for (int32_t VAR_9 = 0; VAR_9 < VAR_7->numOfCols; ++VAR_9) {
          VAR_7->schema[VAR_9].bytes = FUNC_0(VAR_7->schema[VAR_9].bytes);
        }

        VAR_8 = FUNC_3(VAR_6->pDb, VAR_7);
        if (VAR_8 == 0) {
          FUNC_2("meter:%s is altered by %s", VAR_7->meterId, VAR_6->pUser->user);
        }
      } else {
        VAR_8 = VAR_1;
      }
    }
  }

  FUNC_5(VAR_6->thandle, VAR_3, VAR_8);

  return 0;
}
