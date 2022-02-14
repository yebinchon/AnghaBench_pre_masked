
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {int dummy; } ;
struct xpc_channel {int flags; scalar_t__ kthreads_idle_limit; int kthreads_idle; int idle_wq; } ;
struct TYPE_2__ {int (* n_of_deliverable_payloads ) (struct xpc_channel*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct xpc_channel*) ;

__attribute__((used)) static void
FUNC_5(struct xpc_partition *VAR_3, struct xpc_channel *VAR_4)
{
 int (*VAR_5) (struct xpc_channel *) =
  VAR_1.n_of_deliverable_payloads;

 do {


  while (VAR_5(VAR_4) > 0 &&
         !(VAR_4->flags & VAR_0)) {
   FUNC_4(VAR_4);
  }

  if (FUNC_1(&VAR_4->kthreads_idle) >
      VAR_4->kthreads_idle_limit) {

   FUNC_0(&VAR_4->kthreads_idle);
   break;
  }

  FUNC_2(VAR_2, "idle kthread calling "
   "wait_event_interruptible_exclusive()\n");

  (void)FUNC_3(VAR_4->idle_wq,
    (VAR_5(VAR_4) > 0 ||
     (VAR_4->flags & VAR_0)));

  FUNC_0(&VAR_4->kthreads_idle);

 } while (!(VAR_4->flags & VAR_0));
}
