
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct proc_threadinfo_internal {int dummy; } ;
struct proc_threadinfo {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc_threadinfo*,int) ;
 int FUNC_1 (int ,int ,int,struct proc_threadinfo_internal*,int *,int *) ;

int
FUNC_2(proc_t VAR_1, uint64_t VAR_2, bool VAR_3, struct proc_threadinfo *VAR_4)
{
 int VAR_5 = 0;
 uint64_t VAR_6 = (uint64_t)VAR_2;

 FUNC_0(VAR_4, sizeof(struct proc_threadinfo));

 VAR_5 = FUNC_1(VAR_1->task, VAR_6, VAR_3, (struct proc_threadinfo_internal *)VAR_4, ((void*)0), ((void*)0));
 if (VAR_5)
  return(VAR_0);
 else
  return(0);

}
