
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union necp_sockaddr_union {int dummy; } necp_sockaddr_union ;
typedef scalar_t__ uid_t ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
typedef int * task_t ;
struct substring {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int agent_type; int agent_domain; } ;
struct TYPE_5__ {scalar_t__ start_tc; scalar_t__ end_tc; } ;
struct necp_kernel_socket_policy {int condition_mask; int condition_negated_mask; scalar_t__ cond_app_id; scalar_t__ cond_real_app_id; scalar_t__ cond_custom_entitlement_matched; scalar_t__ cond_account_id; scalar_t__ cond_pid; scalar_t__ cond_uid; scalar_t__ cond_protocol; int cond_remote_prefix; int cond_remote_start; int cond_remote_end; int cond_local_prefix; int cond_local_start; int cond_local_end; TYPE_3__ cond_agent_type; TYPE_2__ cond_traffic_class; int cond_domain_dot_count; int cond_domain; int * cond_custom_entitlement; TYPE_1__* cond_bound_interface; } ;
struct necp_client_parameter_netagent_type {int netagent_type; int netagent_domain; } ;
typedef int * proc_t ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ necp_app_id ;
typedef scalar_t__ errno_t ;
struct TYPE_4__ {scalar_t__ if_index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (struct substring,int ,int ,int ) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_3 (struct sockaddr*,struct sockaddr*,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_7(struct necp_kernel_socket_policy *VAR_26, necp_app_id VAR_27, necp_app_id VAR_28, errno_t VAR_29, u_int32_t VAR_30, struct substring VAR_31, u_int8_t VAR_32, pid_t VAR_33, uid_t VAR_34, u_int32_t VAR_35, u_int32_t VAR_36, u_int16_t VAR_37, union necp_sockaddr_union *VAR_38, union necp_sockaddr_union *VAR_39, struct necp_client_parameter_netagent_type *VAR_40, u_int32_t VAR_41, proc_t VAR_42)
{
 if (!(VAR_26->condition_mask & VAR_3)) {
  if (VAR_26->condition_mask & VAR_5) {
   u_int32_t VAR_43 = VAR_26->cond_bound_interface ? VAR_26->cond_bound_interface->if_index : 0;
   if (VAR_26->condition_negated_mask & VAR_5) {
    if (VAR_35 == VAR_43) {

     return (VAR_0);
    }
   } else {
    if (VAR_35 != VAR_43) {

     return (VAR_0);
    }
   }
  } else {
   if (VAR_35 != 0) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask == 0) {
  return (VAR_22);
 }

 if (VAR_26->condition_mask & VAR_4) {
  if (VAR_26->condition_negated_mask & VAR_4) {
   if (VAR_27 == VAR_26->cond_app_id) {

    return (VAR_0);
   }
  } else {
   if (VAR_27 != VAR_26->cond_app_id) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_14) {
  if (VAR_26->condition_negated_mask & VAR_14) {
   if (VAR_28 == VAR_26->cond_real_app_id) {

    return (VAR_0);
   }
  } else {
   if (VAR_28 != VAR_26->cond_real_app_id) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_8) {
  if (VAR_29 != 0) {

   return (VAR_0);
  }
 }

 if (VAR_26->condition_mask & VAR_6) {
  if (VAR_26->cond_custom_entitlement_matched == VAR_23) {

   return (VAR_0);
  } else if (VAR_26->cond_custom_entitlement_matched == VAR_25) {
   if (VAR_26->cond_custom_entitlement != ((void*)0)) {
    if (VAR_42 == ((void*)0)) {

     return (VAR_0);
    }
    task_t VAR_44 = FUNC_4(VAR_42);
    if (VAR_44 == ((void*)0) ||
     !FUNC_0(VAR_44, VAR_26->cond_custom_entitlement)) {

     VAR_26->cond_custom_entitlement_matched = VAR_23;
     return (VAR_0);
    } else {
     VAR_26->cond_custom_entitlement_matched = VAR_24;
    }
   }
  }
 }

 if (VAR_26->condition_mask & VAR_7) {
  bool VAR_45 = FUNC_1(VAR_31, VAR_32, VAR_26->cond_domain, VAR_26->cond_domain_dot_count);
  if (VAR_26->condition_negated_mask & VAR_7) {
   if (VAR_45) {

    return (VAR_0);
   }
  } else {
   if (!VAR_45) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_1) {
  if (VAR_26->condition_negated_mask & VAR_1) {
   if (VAR_30 == VAR_26->cond_account_id) {

    return (VAR_0);
   }
  } else {
   if (VAR_30 != VAR_26->cond_account_id) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_12) {
  if (VAR_26->condition_negated_mask & VAR_12) {
   if (VAR_33 == VAR_26->cond_pid) {

    return (VAR_0);
   }
  } else {
   if (VAR_33 != VAR_26->cond_pid) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_19) {
  if (VAR_26->condition_negated_mask & VAR_19) {
   if (VAR_34 == VAR_26->cond_uid) {

    return (VAR_0);
   }
  } else {
   if (VAR_34 != VAR_26->cond_uid) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_18) {
  if (VAR_26->condition_negated_mask & VAR_18) {
   if (VAR_36 >= VAR_26->cond_traffic_class.start_tc &&
    VAR_36 <= VAR_26->cond_traffic_class.end_tc) {

    return (VAR_0);
   }
  } else {
   if (VAR_36 < VAR_26->cond_traffic_class.start_tc ||
    VAR_36 > VAR_26->cond_traffic_class.end_tc) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_13) {
  if (VAR_26->condition_negated_mask & VAR_13) {
   if (VAR_37 == VAR_26->cond_protocol) {

    return (VAR_0);
   }
  } else {
   if (VAR_37 != VAR_26->cond_protocol) {

    return (VAR_0);
   }
  }
 }

 if (VAR_26->condition_mask & VAR_2) {
  bool VAR_46 = VAR_0;
  for (u_int32_t VAR_47 = 0; VAR_47 < VAR_41; VAR_47++) {
   struct necp_client_parameter_netagent_type *VAR_48 = &VAR_40[VAR_47];
   if ((FUNC_5(VAR_26->cond_agent_type.agent_domain) == 0 ||
     FUNC_6(VAR_48->netagent_domain, VAR_26->cond_agent_type.agent_domain, VAR_20) == 0) &&
    (FUNC_5(VAR_26->cond_agent_type.agent_type) == 0 ||
     FUNC_6(VAR_48->netagent_type, VAR_26->cond_agent_type.agent_type, VAR_21) == 0)) {

     VAR_46 = VAR_22;
     break;
    }
  }
  if (!VAR_46) {
   return (VAR_0);
  }
 }

 if (VAR_26->condition_mask & VAR_11) {
  if (VAR_26->condition_mask & VAR_9) {
   bool VAR_49 = FUNC_2((struct sockaddr *)VAR_38, (struct sockaddr *)&VAR_26->cond_local_start, (struct sockaddr *)&VAR_26->cond_local_end);
   if (VAR_26->condition_negated_mask & VAR_9) {
    if (VAR_49) {
     return (VAR_0);
    }
   } else {
    if (!VAR_49) {
     return (VAR_0);
    }
   }
  } else if (VAR_26->condition_mask & VAR_10) {
   bool VAR_50 = FUNC_3((struct sockaddr *)VAR_38, (struct sockaddr *)&VAR_26->cond_local_start, VAR_26->cond_local_prefix);
   if (VAR_26->condition_negated_mask & VAR_10) {
    if (VAR_50) {
     return (VAR_0);
    }
   } else {
    if (!VAR_50) {
     return (VAR_0);
    }
   }
  }
 }

 if (VAR_26->condition_mask & VAR_17) {
  if (VAR_26->condition_mask & VAR_15) {
   bool VAR_51 = FUNC_2((struct sockaddr *)VAR_39, (struct sockaddr *)&VAR_26->cond_remote_start, (struct sockaddr *)&VAR_26->cond_remote_end);
   if (VAR_26->condition_negated_mask & VAR_15) {
    if (VAR_51) {
     return (VAR_0);
    }
   } else {
    if (!VAR_51) {
     return (VAR_0);
    }
   }
  } else if (VAR_26->condition_mask & VAR_16) {
   bool VAR_52 = FUNC_3((struct sockaddr *)VAR_39, (struct sockaddr *)&VAR_26->cond_remote_start, VAR_26->cond_remote_prefix);
   if (VAR_26->condition_negated_mask & VAR_16) {
    if (VAR_52) {
     return (VAR_0);
    }
   } else {
    if (!VAR_52) {
     return (VAR_0);
    }
   }
  }
 }

 return (VAR_22);
}
