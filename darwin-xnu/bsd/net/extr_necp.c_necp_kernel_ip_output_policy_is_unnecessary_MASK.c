
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_ip_output_policy {scalar_t__ session_order; scalar_t__ order; scalar_t__ result; int condition_mask; int condition_negated_mask; scalar_t__ cond_policy_id; scalar_t__ cond_bound_interface; scalar_t__ cond_protocol; scalar_t__ cond_local_prefix; scalar_t__ cond_remote_prefix; int cond_remote_start; int cond_remote_end; int cond_local_start; int cond_local_end; TYPE_1__ result_parameter; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,scalar_t__) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_2 (struct necp_kernel_ip_output_policy*,struct necp_kernel_ip_output_policy*) ;

__attribute__((used)) static bool
FUNC_3(struct necp_kernel_ip_output_policy *VAR_13, struct necp_kernel_ip_output_policy **VAR_14, int VAR_15)
{
 bool VAR_16 = VAR_0;
 u_int32_t VAR_17 = 0;
 u_int32_t VAR_18 = 0;
 int VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  struct necp_kernel_ip_output_policy *VAR_20 = VAR_14[VAR_19];


  if (VAR_16) {
   if (VAR_17 != VAR_20->session_order ||
    (VAR_18 != 0 && VAR_20->order >= VAR_18)) {

    VAR_17 = 0;
    VAR_18 = 0;
    VAR_16 = VAR_0;
   } else {

    if (VAR_20->result == VAR_11) {
     if (VAR_20->result_parameter.skip_policy_order > VAR_18) {
      VAR_18 = VAR_20->result_parameter.skip_policy_order;
     }
    }
    continue;
   }
  }

  if (VAR_20->result == VAR_11) {

   VAR_16 = VAR_12;
   VAR_17 = VAR_20->session_order;
   VAR_18 = VAR_20->result_parameter.skip_policy_order;
  }


  if (!FUNC_2(VAR_20, VAR_13)) {
   continue;
  }


  if ((VAR_13->condition_mask & VAR_1) && !(VAR_20->condition_mask & VAR_1)) {
   continue;
  }


  if (VAR_20->condition_mask == 0) {
   return (VAR_12);
  }


  if ((VAR_13->condition_mask & VAR_20->condition_mask) != VAR_20->condition_mask) {
   continue;
  }


  if ((VAR_13->condition_negated_mask & VAR_20->condition_mask) != (VAR_20->condition_negated_mask & VAR_20->condition_mask)) {
   continue;
  }

  if (VAR_20->condition_mask & VAR_6 &&
   VAR_20->cond_policy_id != VAR_13->cond_policy_id) {
   continue;
  }

  if (VAR_20->condition_mask & VAR_2 &&
   VAR_20->cond_bound_interface != VAR_13->cond_bound_interface) {
   continue;
  }

  if (VAR_20->condition_mask & VAR_7 &&
   VAR_20->cond_protocol != VAR_13->cond_protocol) {
   continue;
  }

  if (VAR_20->condition_mask & VAR_5) {
   if (VAR_20->condition_mask & VAR_3) {
    if (!FUNC_1((struct sockaddr *)&VAR_13->cond_local_start, (struct sockaddr *)&VAR_13->cond_local_end, (struct sockaddr *)&VAR_20->cond_local_start, (struct sockaddr *)&VAR_20->cond_local_end)) {
     continue;
    }
   } else if (VAR_20->condition_mask & VAR_4) {
    if (VAR_20->cond_local_prefix > VAR_13->cond_local_prefix ||
     !FUNC_0((struct sockaddr *)&VAR_13->cond_local_start, (struct sockaddr *)&VAR_20->cond_local_start, VAR_20->cond_local_prefix)) {
     continue;
    }
   }
  }

  if (VAR_20->condition_mask & VAR_10) {
   if (VAR_20->condition_mask & VAR_8) {
    if (!FUNC_1((struct sockaddr *)&VAR_13->cond_remote_start, (struct sockaddr *)&VAR_13->cond_remote_end, (struct sockaddr *)&VAR_20->cond_remote_start, (struct sockaddr *)&VAR_20->cond_remote_end)) {
     continue;
    }
   } else if (VAR_20->condition_mask & VAR_9) {
    if (VAR_20->cond_remote_prefix > VAR_13->cond_remote_prefix ||
     !FUNC_0((struct sockaddr *)&VAR_13->cond_remote_start, (struct sockaddr *)&VAR_20->cond_remote_start, VAR_20->cond_remote_prefix)) {
     continue;
    }
   }
  }

  return (VAR_12);
 }

 return (VAR_0);
}
