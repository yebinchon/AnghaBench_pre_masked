
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int thandle; TYPE_1__* pUser; scalar_t__ pDb; int writeAuth; } ;
struct TYPE_10__ {int numOfColumns; int numOfTags; int sqlLen; int meterId; TYPE_2__* schema; } ;
struct TYPE_9__ {int bytes; int colId; } ;
struct TYPE_8__ {int user; } ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SCreateTableMsg ;
typedef TYPE_4__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (scalar_t__,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(char *VAR_3, int VAR_4, SConnObj *VAR_5) {
  SCreateTableMsg *VAR_6 = (SCreateTableMsg *)VAR_3;
  int VAR_7;
  SSchema * VAR_8;

  if (FUNC_2(VAR_5, VAR_2) != 0) {
    return 0;
  }

  if (!VAR_5->writeAuth) {
    VAR_7 = VAR_1;
  } else {
    VAR_6->numOfColumns = FUNC_0(VAR_6->numOfColumns);
    VAR_6->numOfTags = FUNC_0(VAR_6->numOfTags);

    VAR_6->sqlLen = FUNC_0(VAR_6->sqlLen);
    VAR_8 = VAR_6->schema;
    for (int VAR_9 = 0; VAR_9 < VAR_6->numOfColumns + VAR_6->numOfTags; ++VAR_9) {
      VAR_8->bytes = FUNC_0(VAR_8->bytes);
      VAR_8->colId = VAR_9;
      VAR_8++;
    }

    if (VAR_5->pDb) {
      VAR_7 = FUNC_3(VAR_5->pDb, VAR_6);
      if (VAR_7 == 0) {
        FUNC_1("meter:%s is created by %s", VAR_6->meterId, VAR_5->pUser->user);

      }
    } else {
      VAR_7 = VAR_0;
    }
  }

  FUNC_4(VAR_5->thandle, VAR_2, VAR_7);

  return 0;
}
