
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_btrace; } ;


 scalar_t__ VAR_0 ;
 struct proc* FUNC_0 () ;
 scalar_t__ VAR_1 ;

int
FUNC_1(void)
{
  struct proc *VAR_2 = FUNC_0();
  if (VAR_0 == VAR_1) return VAR_0;
  if (VAR_2) {
    return (VAR_2->p_btrace);
  }
  return 0;
}
