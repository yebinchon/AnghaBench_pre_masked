
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_csflags; } ;


 int VAR_0 ;

int
FUNC_0(struct proc *VAR_1)
{
 return (VAR_1->p_csflags & VAR_0) ? 1 : 0;
}
