
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ processor_set_t ;
typedef scalar_t__ processor_set_info_t ;
typedef TYPE_1__* processor_set_basic_info_t ;
typedef TYPE_2__* policy_timeshare_limit_t ;
typedef TYPE_3__* policy_timeshare_base_t ;
typedef TYPE_4__* policy_rr_limit_t ;
typedef TYPE_5__* policy_rr_base_t ;
typedef TYPE_6__* policy_fifo_limit_t ;
typedef TYPE_7__* policy_fifo_base_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int * host_t ;
struct TYPE_14__ {void* base_priority; } ;
struct TYPE_13__ {void* max_priority; } ;
struct TYPE_12__ {int quantum; void* base_priority; } ;
struct TYPE_11__ {void* max_priority; } ;
struct TYPE_10__ {void* base_priority; } ;
struct TYPE_9__ {void* max_priority; } ;
struct TYPE_8__ {int default_policy; int processor_count; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

kern_return_t
FUNC_0(
 processor_set_t VAR_27,
 int VAR_28,
 host_t *VAR_29,
 processor_set_info_t VAR_30,
 mach_msg_type_number_t *VAR_31)
{
 if (VAR_27 == VAR_20)
  return(VAR_3);

 if (VAR_28 == VAR_15) {
  processor_set_basic_info_t VAR_32;

  if (*VAR_31 < VAR_16)
   return(VAR_2);

  VAR_32 = (processor_set_basic_info_t) VAR_30;
  VAR_32->processor_count = VAR_25;
  VAR_32->default_policy = VAR_12;

  *VAR_31 = VAR_16;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_23) {
  policy_timeshare_base_t VAR_33;

  if (*VAR_31 < VAR_13)
   return(VAR_2);

  VAR_33 = (policy_timeshare_base_t) VAR_30;
  VAR_33->base_priority = VAR_0;

  *VAR_31 = VAR_13;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_18) {
  policy_fifo_base_t VAR_34;

  if (*VAR_31 < VAR_7)
   return(VAR_2);

  VAR_34 = (policy_fifo_base_t) VAR_30;
  VAR_34->base_priority = VAR_0;

  *VAR_31 = VAR_7;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_21) {
  policy_rr_base_t VAR_35;

  if (*VAR_31 < VAR_10)
   return(VAR_2);

  VAR_35 = (policy_rr_base_t) VAR_30;
  VAR_35->base_priority = VAR_0;
  VAR_35->quantum = 1;

  *VAR_31 = VAR_10;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_24) {
  policy_timeshare_limit_t VAR_36;

  if (*VAR_31 < VAR_14)
   return(VAR_2);

  VAR_36 = (policy_timeshare_limit_t) VAR_30;
  VAR_36->max_priority = VAR_5;

  *VAR_31 = VAR_14;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_19) {
  policy_fifo_limit_t VAR_37;

  if (*VAR_31 < VAR_8)
   return(VAR_2);

  VAR_37 = (policy_fifo_limit_t) VAR_30;
  VAR_37->max_priority = VAR_5;

  *VAR_31 = VAR_8;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_22) {
  policy_rr_limit_t VAR_38;

  if (*VAR_31 < VAR_11)
   return(VAR_2);

  VAR_38 = (policy_rr_limit_t) VAR_30;
  VAR_38->max_priority = VAR_5;

  *VAR_31 = VAR_11;
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }
 else if (VAR_28 == VAR_17) {
  int *VAR_39;

  if (*VAR_31 < (sizeof(*VAR_39)/sizeof(int)))
   return(VAR_2);

  VAR_39 = (int *) VAR_30;
  *VAR_39 = VAR_12 | VAR_9 | VAR_6;

  *VAR_31 = sizeof(*VAR_39)/sizeof(int);
  *VAR_29 = &VAR_26;
  return(VAR_4);
 }


 *VAR_29 = VAR_1;
 return(VAR_3);
}
