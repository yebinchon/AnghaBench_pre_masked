
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_csflags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct proc* FUNC_0 () ;

int
FUNC_1(struct proc *VAR_2)
{

 if (VAR_1)
  return 1;

 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_0();

 if (VAR_2 != ((void*)0) && (VAR_2->p_csflags & VAR_0))
  return 1;

 return 0;
}
