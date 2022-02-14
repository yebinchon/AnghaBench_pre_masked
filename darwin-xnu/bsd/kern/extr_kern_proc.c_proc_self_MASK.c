
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
typedef struct proc* proc_t ;


 struct proc* VAR_0 ;
 struct proc* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct proc* FUNC_3 (struct proc*) ;

proc_t
FUNC_4(void)
{
 struct proc * VAR_1;

 VAR_1 = FUNC_0();

 FUNC_1();
 if (VAR_1 != FUNC_3(VAR_1))
  VAR_1 = VAR_0;
 FUNC_2();
 return(VAR_1);
}
