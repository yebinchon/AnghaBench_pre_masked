
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfCols; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SSchema ;
typedef int SMgmtHead ;
typedef int SAlterTableMsg ;


 int VAR_0 ;
 int FUNC_0 () ;

int FUNC_1(SSqlCmd *VAR_1) {
  return FUNC_0() + sizeof(SMgmtHead) + sizeof(SAlterTableMsg) + sizeof(SSchema) * VAR_1->numOfCols +
         VAR_0;
}
