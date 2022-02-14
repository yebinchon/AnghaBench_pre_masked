
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thandle; TYPE_1__* pUser; int pAcct; int writeAuth; } ;
struct TYPE_7__ {int db; } ;
struct TYPE_6__ {int user; } ;
typedef TYPE_2__ SDropDbMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(char *VAR_2, int VAR_3, SConnObj *VAR_4) {
  SDropDbMsg *VAR_5 = (SDropDbMsg *)VAR_2;
  int VAR_6;

  if (FUNC_1(VAR_4, VAR_1) != 0) {
    return 0;
  }

  if (!VAR_4->writeAuth) {
    VAR_6 = VAR_0;
  } else {
    VAR_6 = FUNC_2(VAR_4->pAcct, VAR_5->db);
    if (VAR_6 == 0) {
      FUNC_0("DB:%s is dropped by %s", VAR_5->db, VAR_4->pUser->user);
    }
  }
  FUNC_3(VAR_4->thandle, VAR_1, VAR_6);

  return 0;
}
