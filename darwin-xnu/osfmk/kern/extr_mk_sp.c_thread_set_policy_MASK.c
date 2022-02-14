
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef int * processor_set_t ;
typedef TYPE_1__* policy_timeshare_limit_t ;
typedef TYPE_2__* policy_timeshare_base_t ;
typedef int policy_t ;
typedef TYPE_3__* policy_rr_limit_t ;
typedef TYPE_4__* policy_rr_base_t ;
typedef int policy_limit_t ;
typedef TYPE_5__* policy_fifo_limit_t ;
typedef TYPE_6__* policy_fifo_base_t ;
typedef int policy_base_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_12__ {int base_priority; } ;
struct TYPE_11__ {int max_priority; } ;
struct TYPE_10__ {int base_priority; } ;
struct TYPE_9__ {int max_priority; } ;
struct TYPE_8__ {int base_priority; } ;
struct TYPE_7__ {int max_priority; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;

kern_return_t
FUNC_3(
 thread_t VAR_12,
 processor_set_t VAR_13,
 policy_t VAR_14,
 policy_base_t VAR_15,
 mach_msg_type_number_t VAR_16,
 policy_limit_t VAR_17,
 mach_msg_type_number_t VAR_18)
{
 int VAR_19, VAR_20;
 kern_return_t VAR_21 = VAR_2;

 if ( VAR_12 == VAR_10 ||
   VAR_13 == VAR_9 || VAR_13 != &VAR_11)
  return (VAR_0);

 if (FUNC_0(VAR_14))
  return(VAR_0);

 switch (VAR_14) {

 case 129:
 {
  policy_rr_base_t VAR_22 = (policy_rr_base_t) VAR_15;
  policy_rr_limit_t VAR_23 = (policy_rr_limit_t) VAR_17;

  if ( VAR_16 != VAR_5 ||
    VAR_18 != VAR_6 ) {
   VAR_21 = VAR_0;
   break;
  }

  VAR_20 = VAR_22->base_priority;
  VAR_19 = VAR_23->max_priority;
  if (FUNC_1(VAR_20) || FUNC_1(VAR_19)) {
   VAR_21 = VAR_0;
   break;
  }

  break;
 }

 case 130:
 {
  policy_fifo_base_t VAR_24 = (policy_fifo_base_t) VAR_15;
  policy_fifo_limit_t VAR_25 = (policy_fifo_limit_t) VAR_17;

  if ( VAR_16 != VAR_3 ||
    VAR_18 != VAR_4) {
   VAR_21 = VAR_0;
   break;
  }

  VAR_20 = VAR_24->base_priority;
  VAR_19 = VAR_25->max_priority;
  if (FUNC_1(VAR_20) || FUNC_1(VAR_19)) {
   VAR_21 = VAR_0;
   break;
  }

  break;
 }

 case 128:
 {
  policy_timeshare_base_t VAR_26 = (policy_timeshare_base_t) VAR_15;
  policy_timeshare_limit_t VAR_27 =
      (policy_timeshare_limit_t) VAR_17;

  if ( VAR_16 != VAR_7 ||
    VAR_18 != VAR_8 ) {
   VAR_21 = VAR_0;
   break;
  }

  VAR_20 = VAR_26->base_priority;
  VAR_19 = VAR_27->max_priority;
  if (FUNC_1(VAR_20) || FUNC_1(VAR_19)) {
   VAR_21 = VAR_0;
   break;
  }

  break;
 }

 default:
  VAR_21 = VAR_1;
 }

 if (VAR_21 != VAR_2) {
  return (VAR_21);
 }


 if (VAR_21 == VAR_2) {
     VAR_21 = FUNC_2(VAR_12, VAR_14, VAR_20);
 }

 return (VAR_21);
}
