
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_sem_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(sys_sem_t *VAR_2)
{
  BaseType_t VAR_3 = FUNC_1(*VAR_2);

  FUNC_0("sys_sem_signal: sane return value",
             (VAR_3 == VAR_1) || (VAR_3 == VAR_0));
}
