
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ act_state; int disengage_timer; scalar_t__ disengage_timeout; } ;
struct TYPE_2__ {int (* cancel_partition_deactivation_request ) (struct xpc_partition*) ;int (* assume_partition_disengaged ) (short) ;int (* partition_engaged ) (short) ;} ;


 int FUNC_0 (int) ;
 short FUNC_1 (struct xpc_partition*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,short) ;
 int FUNC_4 () ;
 int FUNC_5 (short) ;
 int FUNC_6 (short) ;
 int FUNC_7 (struct xpc_partition*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct xpc_partition*) ;

int
FUNC_10(struct xpc_partition *VAR_5)
{
 short VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_7 = !VAR_2.partition_engaged(VAR_6);
 if (VAR_5->disengage_timeout) {
  if (!VAR_7) {
   if (FUNC_8(VAR_5->disengage_timeout)) {

    return 0;
   }






   FUNC_3(VAR_4, "deactivate request to remote "
     "partition %d timed out\n", VAR_6);
   VAR_3 = 1;
   VAR_2.assume_partition_disengaged(VAR_6);
   VAR_7 = 1;
  }
  VAR_5->disengage_timeout = 0;


  if (!FUNC_4())
   FUNC_2(&VAR_5->disengage_timer);

  FUNC_0(VAR_5->act_state != VAR_0 &&
   VAR_5->act_state != VAR_1);
  if (VAR_5->act_state != VAR_1)
   FUNC_9(VAR_5);

  VAR_2.cancel_partition_deactivation_request(VAR_5);
 }
 return VAR_7;
}
