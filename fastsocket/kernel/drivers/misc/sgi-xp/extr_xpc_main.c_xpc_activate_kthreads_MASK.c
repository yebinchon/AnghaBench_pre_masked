
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {int kthreads_assigned_limit; int number; int partid; int idle_wq; int kthreads_assigned; int kthreads_idle; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (struct xpc_channel*,int,int ) ;

void
FUNC_5(struct xpc_channel *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(&VAR_1->kthreads_idle);
 int VAR_4 = FUNC_1(&VAR_1->kthreads_assigned);
 int VAR_5;

 FUNC_0(VAR_2 <= 0);

 if (VAR_3 > 0) {
  VAR_5 = (VAR_2 > VAR_3) ? VAR_3 : VAR_2;
  VAR_2 -= VAR_5;

  FUNC_2(VAR_0, "wakeup %d idle kthreads, partid=%d, "
   "channel=%d\n", VAR_5, VAR_1->partid, VAR_1->number);


  FUNC_3(&VAR_1->idle_wq, VAR_5);
 }

 if (VAR_2 <= 0)
  return;

 if (VAR_2 + VAR_4 > VAR_1->kthreads_assigned_limit) {
  VAR_2 = VAR_1->kthreads_assigned_limit - VAR_4;
  if (VAR_2 <= 0)
   return;
 }

 FUNC_2(VAR_0, "create %d new kthreads, partid=%d, channel=%d\n",
  VAR_2, VAR_1->partid, VAR_1->number);

 FUNC_4(VAR_1, VAR_2, 0);
}
