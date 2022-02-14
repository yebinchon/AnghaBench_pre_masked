
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int uint64_t ;
struct TYPE_4__ {int * vip_path; int vip_vi; } ;
struct proc_threadwithpathinfo {TYPE_1__ pvip; int pt; } ;
struct proc_threadinfo_internal {int dummy; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct proc_threadwithpathinfo*,int) ;
 int FUNC_1 (int ,int ,int ,struct proc_threadinfo_internal*,void*,int*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int *,int*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;

int
FUNC_6(proc_t VAR_3, uint64_t VAR_4, struct proc_threadwithpathinfo *VAR_5)
{
 vnode_t VAR_6 = VAR_2;
 int VAR_7;
 int VAR_8 = 0;
 uint64_t VAR_9 = (uint64_t)VAR_4;
 int VAR_10;

 FUNC_0(VAR_5, sizeof(struct proc_threadwithpathinfo));

 VAR_8 = FUNC_1(VAR_3->task, VAR_9, 0, (struct proc_threadinfo_internal *)&VAR_5->pt, (void *)&VAR_6, &VAR_7);
 if (VAR_8)
  return(VAR_0);

 if ((VAR_6 != VAR_2) && ((FUNC_4(VAR_6, VAR_7)) == 0)) {
  VAR_8 = FUNC_2(VAR_6, &VAR_5->pvip.vip_vi) ;
  if (VAR_8 == 0) {
   VAR_10 = VAR_1;
   FUNC_3(VAR_6, &VAR_5->pvip.vip_path[0], &VAR_10);
   VAR_5->pvip.vip_path[VAR_1-1] = 0;
  }
  FUNC_5(VAR_6);
 }
 return(VAR_8);
}
