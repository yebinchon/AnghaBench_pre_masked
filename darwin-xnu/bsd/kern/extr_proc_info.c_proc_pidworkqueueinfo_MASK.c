
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_workqueueinfo {int dummy; } ;
typedef int proc_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc_workqueueinfo*,int) ;
 int FUNC_1 (int ,struct proc_workqueueinfo*) ;

int
FUNC_2(proc_t VAR_1, struct proc_workqueueinfo *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_2, sizeof(struct proc_workqueueinfo));

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return(VAR_0);
 else
  return(0);

}
