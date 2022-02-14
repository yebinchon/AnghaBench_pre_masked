
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int flag; int privilege; int user; int pass; } ;
struct TYPE_13__ {int thandle; TYPE_2__* pUser; scalar_t__ superAuth; TYPE_1__* pAcct; } ;
struct TYPE_12__ {char* user; char* acct; int superAuth; int writeAuth; int pass; } ;
struct TYPE_11__ {char* user; } ;
struct TYPE_10__ {char* user; } ;
typedef TYPE_3__ SUserObj ;
typedef TYPE_4__ SConnObj ;
typedef TYPE_5__ SAlterUserMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;

int FUNC_9(char *VAR_5, int VAR_6, SConnObj *VAR_7) {
  SAlterUserMsg *VAR_8 = (SAlterUserMsg *)VAR_5;
  int VAR_9 = 0;
  SUserObj * VAR_10;

  if (FUNC_2(VAR_7, VAR_4) != 0) {
    return 0;
  }

  VAR_10 = FUNC_3(VAR_8->user);
  if (VAR_10 == ((void*)0)) {
    FUNC_8(VAR_7->thandle, VAR_4, VAR_2);
    return 0;
  }

  if (FUNC_5(VAR_10->user, "monitor") == 0 || FUNC_5(VAR_10->user, "stream") == 0) {
    VAR_9 = VAR_3;
  } else if ((FUNC_5(VAR_10->user, VAR_7->pUser->user) == 0) ||
             ((FUNC_5(VAR_10->acct, VAR_7->pAcct->user) == 0) && VAR_7->superAuth) ||
             (FUNC_5(VAR_7->pUser->user, "root") == 0)) {
    if ((VAR_8->flag & VAR_0) != 0) {
      FUNC_1(VAR_10->pass, 0, sizeof(VAR_10->pass));
      FUNC_7(VAR_8->pass, FUNC_6(VAR_8->pass), VAR_10->pass);
    }
    if ((VAR_8->flag & VAR_1) != 0) {
      if (VAR_8->privilege == 1) {
        VAR_10->superAuth = 1;
        VAR_10->writeAuth = 1;
      }
      if (VAR_8->privilege == 2) {
        VAR_10->superAuth = 0;
        VAR_10->writeAuth = 0;
      }
      if (VAR_8->privilege == 3) {
        VAR_10->superAuth = 0;
        VAR_10->writeAuth = 1;
      }
    }

    VAR_9 = FUNC_4(VAR_10);
    FUNC_0("user:%s is altered by %s", VAR_8->user, VAR_7->pUser->user);
  } else {
    VAR_9 = VAR_3;
  }

  FUNC_8(VAR_7->thandle, VAR_4, VAR_9);

  return 0;
}
