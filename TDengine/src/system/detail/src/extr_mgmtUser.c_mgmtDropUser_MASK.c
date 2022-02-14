
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int user; } ;
struct TYPE_5__ {int acct; } ;
typedef TYPE_1__ SUserObj ;
typedef TYPE_2__ SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_2 ;

int FUNC_4(SAcctObj *VAR_3, char *VAR_4) {
  SUserObj *VAR_5;

  VAR_5 = (SUserObj *)FUNC_2(VAR_2, VAR_4);
  if (VAR_5 == ((void*)0)) {
    FUNC_0("user:%s is not there", VAR_4);
    return VAR_0;
  }

  if (FUNC_3(VAR_3->user, VAR_5->acct) != 0) return VAR_1;


  FUNC_1(VAR_2, VAR_5);

  return 0;
}
