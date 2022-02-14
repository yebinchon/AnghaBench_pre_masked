
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct xpc_partition {scalar_t__ act_state; scalar_t__ reason; TYPE_2__ disengage_timer; scalar_t__ disengage_timeout; int act_lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_3__ {int (* request_partition_deactivation ) (struct xpc_partition*) ;int (* request_partition_reactivation ) (struct xpc_partition*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_partition*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xpc_partition*,int,int const) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct xpc_partition*) ;
 int FUNC_7 (struct xpc_partition*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct xpc_partition*,int) ;

void
FUNC_9(const int VAR_9, struct xpc_partition *VAR_10,
    enum xp_retval VAR_11)
{
 unsigned long VAR_12;

 FUNC_4(&VAR_10->act_lock, VAR_12);

 if (VAR_10->act_state == VAR_2) {
  FUNC_1(VAR_10, VAR_11, VAR_9);
  FUNC_5(&VAR_10->act_lock, VAR_12);
  if (VAR_11 == VAR_4) {

   VAR_6.request_partition_reactivation(VAR_10);
  }
  return;
 }
 if (VAR_10->act_state == VAR_1) {
  if ((VAR_10->reason == VAR_5 && VAR_11 != VAR_5) ||
      VAR_11 == VAR_4) {
   FUNC_1(VAR_10, VAR_11, VAR_9);
  }
  FUNC_5(&VAR_10->act_lock, VAR_12);
  return;
 }

 VAR_10->act_state = VAR_1;
 FUNC_1(VAR_10, VAR_11, VAR_9);

 FUNC_5(&VAR_10->act_lock, VAR_12);


 VAR_6.request_partition_deactivation(VAR_10);


 VAR_10->disengage_timeout = VAR_3 + (VAR_7 * VAR_0);
 VAR_10->disengage_timer.expires = VAR_10->disengage_timeout;
 FUNC_2(&VAR_10->disengage_timer);

 FUNC_3(VAR_8, "bringing partition %d down, reason = %d\n",
  FUNC_0(VAR_10), VAR_11);

 FUNC_8(VAR_10, VAR_11);
}
