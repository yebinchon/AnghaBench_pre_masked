
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union necp_sockaddr_union {int dummy; } necp_sockaddr_union ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct sockaddr {int dummy; } ;
struct necp_kernel_ip_output_policy {int condition_mask; int condition_negated_mask; scalar_t__ result; scalar_t__ cond_policy_id; scalar_t__ cond_last_interface_index; scalar_t__ cond_protocol; int cond_remote_prefix; int cond_remote_start; int cond_remote_end; int cond_local_prefix; int cond_local_start; int cond_local_end; TYPE_1__* cond_bound_interface; } ;
typedef scalar_t__ necp_kernel_policy_id ;
struct TYPE_2__ {scalar_t__ if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,int ) ;

__attribute__((used)) static bool
FUNC_2(struct necp_kernel_ip_output_policy *VAR_14, necp_kernel_policy_id VAR_15, necp_kernel_policy_id VAR_16, u_int32_t VAR_17, u_int32_t VAR_18, u_int16_t VAR_19, union necp_sockaddr_union *VAR_20, union necp_sockaddr_union *VAR_21)
{
 if (!(VAR_14->condition_mask & VAR_1)) {
  if (VAR_14->condition_mask & VAR_2) {
   u_int32_t VAR_22 = VAR_14->cond_bound_interface ? VAR_14->cond_bound_interface->if_index : 0;
   if (VAR_14->condition_negated_mask & VAR_2) {
    if (VAR_17 == VAR_22) {

     return (VAR_0);
    }
   } else {
    if (VAR_17 != VAR_22) {

     return (VAR_0);
    }
   }
  } else {
   if (VAR_17 != 0) {

    return (VAR_0);
   }
  }
 }

 if (VAR_14->condition_mask == 0) {
  return (VAR_13);
 }

 if (VAR_14->condition_mask & VAR_7) {
  necp_kernel_policy_id VAR_23 =
   VAR_14->result == VAR_12 ? VAR_16 : VAR_15;
  if (VAR_23 != VAR_14->cond_policy_id) {

   return (VAR_0);
  }
 }

 if (VAR_14->condition_mask & VAR_3) {
  if (VAR_18 != VAR_14->cond_last_interface_index) {
   return (VAR_0);
  }
 }

 if (VAR_14->condition_mask & VAR_8) {
  if (VAR_14->condition_negated_mask & VAR_8) {
   if (VAR_19 == VAR_14->cond_protocol) {

    return (VAR_0);
   }
  } else {
   if (VAR_19 != VAR_14->cond_protocol) {

    return (VAR_0);
   }
  }
 }

 if (VAR_14->condition_mask & VAR_6) {
  if (VAR_14->condition_mask & VAR_4) {
   bool VAR_24 = FUNC_0((struct sockaddr *)VAR_20, (struct sockaddr *)&VAR_14->cond_local_start, (struct sockaddr *)&VAR_14->cond_local_end);
   if (VAR_14->condition_negated_mask & VAR_4) {
    if (VAR_24) {
     return (VAR_0);
    }
   } else {
    if (!VAR_24) {
     return (VAR_0);
    }
   }
  } else if (VAR_14->condition_mask & VAR_5) {
   bool VAR_25 = FUNC_1((struct sockaddr *)VAR_20, (struct sockaddr *)&VAR_14->cond_local_start, VAR_14->cond_local_prefix);
   if (VAR_14->condition_negated_mask & VAR_5) {
    if (VAR_25) {
     return (VAR_0);
    }
   } else {
    if (!VAR_25) {
     return (VAR_0);
    }
   }
  }
 }

 if (VAR_14->condition_mask & VAR_11) {
  if (VAR_14->condition_mask & VAR_9) {
   bool VAR_26 = FUNC_0((struct sockaddr *)VAR_21, (struct sockaddr *)&VAR_14->cond_remote_start, (struct sockaddr *)&VAR_14->cond_remote_end);
   if (VAR_14->condition_negated_mask & VAR_9) {
    if (VAR_26) {
     return (VAR_0);
    }
   } else {
    if (!VAR_26) {
     return (VAR_0);
    }
   }
  } else if (VAR_14->condition_mask & VAR_10) {
   bool VAR_27 = FUNC_1((struct sockaddr *)VAR_21, (struct sockaddr *)&VAR_14->cond_remote_start, VAR_14->cond_remote_prefix);
   if (VAR_14->condition_negated_mask & VAR_10) {
    if (VAR_27) {
     return (VAR_0);
    }
   } else {
    if (!VAR_27) {
     return (VAR_0);
    }
   }
  }
 }

 return (VAR_13);
}
