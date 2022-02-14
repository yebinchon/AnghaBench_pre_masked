
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* user_addr_t ;
struct sysctl_req {size_t oldlen; size_t newlen; int lock; int newfunc; int oldfunc; void* newptr; void* oldptr; struct proc* p; } ;
struct proc {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct sysctl_req *VAR_2, struct proc *VAR_3, user_addr_t VAR_4,
       size_t VAR_5, user_addr_t VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_2, sizeof(*VAR_2));

 VAR_2->p = VAR_3;

 VAR_2->oldlen = VAR_5;
 VAR_2->oldptr = VAR_4;

 if (VAR_7) {
  VAR_2->newlen = VAR_7;
  VAR_2->newptr = VAR_6;
 }

 VAR_2->oldfunc = VAR_1;
 VAR_2->newfunc = VAR_0;
 VAR_2->lock = 1;

 return;
}
