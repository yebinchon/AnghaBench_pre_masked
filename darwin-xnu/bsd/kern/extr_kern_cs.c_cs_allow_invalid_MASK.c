
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_pid; int p_csflags; int task; int p_mlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct proc *VAR_7)
{
 return (VAR_7->p_csflags & (VAR_2 | VAR_1)) == 0;
}
