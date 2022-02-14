
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_mutex_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(sys_mutex_t *VAR_1)
{
  BaseType_t VAR_2 = FUNC_1(*VAR_1);

  FUNC_0("failed to give the mutex", VAR_2 == VAR_0);
}
