
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thandle; TYPE_1__* pUser; int pAcct; scalar_t__ superAuth; } ;
struct TYPE_7__ {char* user; } ;
struct TYPE_6__ {char* user; } ;
typedef TYPE_2__ SDropUserMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(char *VAR_2, int VAR_3, SConnObj *VAR_4) {
  SDropUserMsg *VAR_5 = (SDropUserMsg *)VAR_2;
  int VAR_6 = 0;

  if (FUNC_1(VAR_4, VAR_1) != 0) {
    return 0;
  }

  if (FUNC_3(VAR_4->pUser->user, VAR_5->user) == 0) {
    VAR_6 = VAR_0;
  } else if (FUNC_3(VAR_5->user, "monitor") == 0 || FUNC_3(VAR_5->user, "stream") == 0) {
    VAR_6 = VAR_0;
  } else {
    if (VAR_4->superAuth) {
      VAR_6 = FUNC_2(VAR_4->pAcct, VAR_5->user);
      if (VAR_6 == 0) {
        FUNC_0("user:%s is dropped by %s", VAR_5->user, VAR_4->pUser->user);
      }
    } else {
      VAR_6 = VAR_0;
    }
  }

  FUNC_4(VAR_4->thandle, VAR_1, VAR_6);

  return 0;
}
