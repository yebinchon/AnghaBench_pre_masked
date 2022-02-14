
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thandle; TYPE_1__* pUser; int pAcct; scalar_t__ superAuth; } ;
struct TYPE_7__ {int user; int pass; } ;
struct TYPE_6__ {int user; } ;
typedef TYPE_2__ SCreateUserMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(char *VAR_3, int VAR_4, SConnObj *VAR_5) {
  SCreateUserMsg *VAR_6 = (SCreateUserMsg *)VAR_3;
  int VAR_7 = 0;

  if (FUNC_1(VAR_5, VAR_2) != 0) {
    return 0;
  }

  if (VAR_5->superAuth) {
    VAR_7 = FUNC_2(VAR_5->pAcct, VAR_6->user, VAR_6->pass);
    if (VAR_7 == VAR_1) {
      FUNC_0("user:%s is created by %s", VAR_6->user, VAR_5->pUser->user);
    }
  } else {
    VAR_7 = VAR_0;
  }

  FUNC_3(VAR_5->thandle, VAR_2, VAR_7);

  return 0;
}
