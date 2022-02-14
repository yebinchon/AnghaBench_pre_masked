
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ahandle; } ;
typedef int SSqlObj ;
typedef TYPE_1__ SSchedMsg ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;

void FUNC_2(SSchedMsg *VAR_0) {
  SSqlObj *VAR_1 = (SSqlObj *)VAR_0->ahandle;
  FUNC_1("%p sql is freed", VAR_1);
  FUNC_0(VAR_1);
}
