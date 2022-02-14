
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ start_tc; scalar_t__ end_tc; } ;
struct TYPE_3__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_socket_policy {scalar_t__ session_order; scalar_t__ order; scalar_t__ result; int condition_mask; int condition_negated_mask; scalar_t__ cond_account_id; scalar_t__ cond_policy_id; scalar_t__ cond_app_id; scalar_t__ cond_real_app_id; scalar_t__ cond_pid; scalar_t__ cond_uid; scalar_t__ cond_bound_interface; scalar_t__ cond_protocol; scalar_t__ cond_local_prefix; scalar_t__ cond_remote_prefix; int cond_agent_type; int cond_remote_start; int cond_remote_end; int cond_local_start; int cond_local_end; TYPE_2__ cond_traffic_class; int cond_custom_entitlement; int cond_domain; TYPE_1__ result_parameter; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,scalar_t__) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_3 (struct necp_kernel_socket_policy*,struct necp_kernel_socket_policy*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(struct necp_kernel_socket_policy *VAR_22, struct necp_kernel_socket_policy **VAR_23, int VAR_24)
{
 bool VAR_25 = VAR_0;
 u_int32_t VAR_26 = 0;
 u_int32_t VAR_27 = 0;
 int VAR_28;
 for (VAR_28 = 0; VAR_28 < VAR_24; VAR_28++) {
  struct necp_kernel_socket_policy *VAR_29 = VAR_23[VAR_28];


  if (VAR_25) {
   if (VAR_26 != VAR_29->session_order ||
    (VAR_27 != 0 && VAR_29->order >= VAR_27)) {

    VAR_26 = 0;
    VAR_27 = 0;
    VAR_25 = VAR_0;
   } else {

    if (VAR_29->result == VAR_20) {
     if (VAR_29->result_parameter.skip_policy_order > VAR_27) {
      VAR_27 = VAR_29->result_parameter.skip_policy_order;
     }
    }
    continue;
   }
  }

  if (VAR_29->result == VAR_20) {

   VAR_25 = VAR_21;
   VAR_26 = VAR_29->session_order;
   VAR_27 = VAR_29->result_parameter.skip_policy_order;
  }


  if (!FUNC_3(VAR_29, VAR_22)) {
   continue;
  }


  if ((VAR_22->condition_mask & VAR_3) && !(VAR_29->condition_mask & VAR_3)) {
   continue;
  }


  if (VAR_29->condition_mask == 0) {
   return (VAR_21);
  }


  if ((VAR_22->condition_mask & VAR_29->condition_mask) != VAR_29->condition_mask) {
   continue;
  }


  if ((VAR_22->condition_negated_mask & VAR_29->condition_mask) != (VAR_29->condition_negated_mask & VAR_29->condition_mask)) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_7 &&
   FUNC_4(VAR_29->cond_domain, VAR_22->cond_domain) != 0) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_6 &&
   FUNC_4(VAR_29->cond_custom_entitlement, VAR_22->cond_custom_entitlement) != 0) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_1 &&
   VAR_29->cond_account_id != VAR_22->cond_account_id) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_12 &&
   VAR_29->cond_policy_id != VAR_22->cond_policy_id) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_4 &&
   VAR_29->cond_app_id != VAR_22->cond_app_id) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_14 &&
   VAR_29->cond_real_app_id != VAR_22->cond_real_app_id) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_11 &&
   VAR_29->cond_pid != VAR_22->cond_pid) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_19 &&
   VAR_29->cond_uid != VAR_22->cond_uid) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_5 &&
   VAR_29->cond_bound_interface != VAR_22->cond_bound_interface) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_13 &&
   VAR_29->cond_protocol != VAR_22->cond_protocol) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_18 &&
   !(VAR_29->cond_traffic_class.start_tc <= VAR_22->cond_traffic_class.start_tc &&
     VAR_29->cond_traffic_class.end_tc >= VAR_22->cond_traffic_class.end_tc)) {
   continue;
  }

  if (VAR_29->condition_mask & VAR_10) {
   if (VAR_29->condition_mask & VAR_8) {
    if (!FUNC_2((struct sockaddr *)&VAR_22->cond_local_start, (struct sockaddr *)&VAR_22->cond_local_end, (struct sockaddr *)&VAR_29->cond_local_start, (struct sockaddr *)&VAR_29->cond_local_end)) {
     continue;
    }
   } else if (VAR_29->condition_mask & VAR_9) {
    if (VAR_29->cond_local_prefix > VAR_22->cond_local_prefix ||
     !FUNC_1((struct sockaddr *)&VAR_22->cond_local_start, (struct sockaddr *)&VAR_29->cond_local_start, VAR_29->cond_local_prefix)) {
     continue;
    }
   }
  }

  if (VAR_29->condition_mask & VAR_17) {
   if (VAR_29->condition_mask & VAR_15) {
    if (!FUNC_2((struct sockaddr *)&VAR_22->cond_remote_start, (struct sockaddr *)&VAR_22->cond_remote_end, (struct sockaddr *)&VAR_29->cond_remote_start, (struct sockaddr *)&VAR_29->cond_remote_end)) {
     continue;
    }
   } else if (VAR_29->condition_mask & VAR_16) {
    if (VAR_29->cond_remote_prefix > VAR_22->cond_remote_prefix ||
     !FUNC_1((struct sockaddr *)&VAR_22->cond_remote_start, (struct sockaddr *)&VAR_29->cond_remote_start, VAR_29->cond_remote_prefix)) {
     continue;
    }
   }
  }

  if (VAR_29->condition_mask & VAR_2 &&
   FUNC_0(&VAR_29->cond_agent_type, &VAR_22->cond_agent_type, sizeof(VAR_22->cond_agent_type)) == 0) {
   continue;
  }

  return (VAR_21);
 }

 return (VAR_0);
}
