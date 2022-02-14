
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user; scalar_t__ acctId; } ;
typedef TYPE_1__ SAcctObj ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 char* VAR_1 ;

void FUNC_2() {
  SAcctObj *VAR_2 = &VAR_0;
  VAR_2->acctId = 0;
  FUNC_1(VAR_2->user, "root");

  FUNC_0(VAR_2, "root", "taosdata");
  FUNC_0(VAR_2, "monitor", VAR_1);
  FUNC_0(VAR_2, "_root", VAR_1);
}
