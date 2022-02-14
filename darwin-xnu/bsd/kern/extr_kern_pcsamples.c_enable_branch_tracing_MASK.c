
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_btrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc* FUNC_0 (int) ;
 int FUNC_1 (struct proc*) ;

int
FUNC_2(void)
{
  struct proc *VAR_3;
  if (-1 != VAR_1) {
    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3) {
      VAR_3->p_btrace = 1;
  FUNC_1(VAR_3);
    }
  }
  else {
    VAR_2 = VAR_0;
  }

  return 1;

}
