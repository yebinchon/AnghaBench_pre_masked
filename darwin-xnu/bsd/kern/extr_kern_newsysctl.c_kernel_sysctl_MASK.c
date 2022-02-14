
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sysctl_req {size_t oldlen; size_t newlen; int lock; size_t oldidx; int newfunc; int oldfunc; void* newptr; void* oldptr; struct proc* p; } ;
struct proc {int dummy; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sysctl_req*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *,int ,int*,int ,struct sysctl_req*) ;

int
FUNC_3(struct proc *VAR_5, int *VAR_6, u_int VAR_7, void *VAR_8, size_t *VAR_9, void *VAR_10, size_t VAR_11)
{
 int VAR_12 = 0;
 struct sysctl_req VAR_13;




 FUNC_1(&VAR_13, sizeof VAR_13);
 VAR_13.p = VAR_5;
 if (VAR_9)
  VAR_13.oldlen = *VAR_9;
 if (VAR_8)
  VAR_13.oldptr = FUNC_0(VAR_8);
 if (VAR_11) {
  VAR_13.newlen = VAR_11;
  VAR_13.newptr = FUNC_0(VAR_10);
 }
 VAR_13.oldfunc = VAR_4;
 VAR_13.newfunc = VAR_3;
 VAR_13.lock = 1;


 VAR_12 = FUNC_2(VAR_2, VAR_1, ((void*)0), 0, VAR_6, VAR_7, &VAR_13);

 if (VAR_12 && VAR_12 != VAR_0)
  return (VAR_12);

 if (VAR_9)
  *VAR_9 = VAR_13.oldidx;

 return (VAR_12);
}
