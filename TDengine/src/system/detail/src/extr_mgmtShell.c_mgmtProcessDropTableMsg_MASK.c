
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thandle; TYPE_1__* pUser; int pDb; int writeAuth; } ;
struct TYPE_7__ {int meterId; int igNotExists; } ;
struct TYPE_6__ {int user; } ;
typedef TYPE_2__ SDropTableMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(char *VAR_2, int VAR_3, SConnObj *VAR_4) {
  SDropTableMsg *VAR_5 = (SDropTableMsg *)VAR_2;
  int VAR_6;

  if (FUNC_1(VAR_4, VAR_1) != 0) {
    return 0;
  }

  if (!VAR_4->writeAuth) {
    VAR_6 = VAR_0;
  } else {
    VAR_6 = FUNC_2(VAR_4->pDb, VAR_5->meterId, VAR_5->igNotExists);
    if (VAR_6 == 0) {
      FUNC_0("meter:%s is dropped by user:%s", VAR_5->meterId, VAR_4->pUser->user);

    }

    FUNC_3(VAR_4->thandle, VAR_1, VAR_6);
  }

  return 0;
}
