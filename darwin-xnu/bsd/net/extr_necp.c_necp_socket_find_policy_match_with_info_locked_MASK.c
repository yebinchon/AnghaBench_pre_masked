
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct substring {int length; int string; } ;
struct necp_socket_info {int protocol; int bound_interface_index; int real_application_id; int application_id; int remote_addr; int local_addr; int traffic_class; int uid; int pid; int account_id; int cred_result; scalar_t__ domain; } ;
struct TYPE_5__ {char* identifier; scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ route_rule_id; scalar_t__ netagent_id; scalar_t__ skip_policy_order; TYPE_1__ service; int filter_control_unit; } ;
struct necp_kernel_socket_policy {scalar_t__ session_order; scalar_t__ order; scalar_t__ result; int id; TYPE_2__ result_parameter; } ;
struct necp_client_parameter_netagent_type {int dummy; } ;
typedef int proc_t ;
struct TYPE_7__ {char* identifier; scalar_t__ data; } ;
typedef TYPE_3__ necp_kernel_policy_service ;
typedef scalar_t__ necp_kernel_policy_result ;
typedef int necp_kernel_policy_id ;
typedef int necp_kernel_policy_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct necp_kernel_socket_policy*) ;
 scalar_t__ FUNC_4 (struct necp_kernel_socket_policy*,int ,int ,int ,int ,struct substring,int ,int ,int ,int ,int ,int ,int *,int *,struct necp_client_parameter_netagent_type*,scalar_t__,int ) ;
 struct substring FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline struct necp_kernel_socket_policy *
FUNC_7(struct necp_kernel_socket_policy **VAR_10, struct necp_socket_info *VAR_11,
              necp_kernel_policy_filter *VAR_12, u_int32_t *VAR_13,
              necp_kernel_policy_result *VAR_14, necp_kernel_policy_service *VAR_15,
              u_int32_t *VAR_16, u_int32_t *VAR_17, size_t VAR_18,
              struct necp_client_parameter_netagent_type *VAR_19,
              u_int32_t VAR_20, proc_t VAR_21, necp_kernel_policy_id *VAR_22)
{
 struct necp_kernel_socket_policy *VAR_23 = ((void*)0);
 u_int32_t VAR_24 = 0;
 u_int32_t VAR_25 = 0;
 u_int32_t VAR_26[VAR_1];
 size_t VAR_27 = 0;
 int VAR_28;
 size_t VAR_29 = 0;


 struct substring VAR_30 = FUNC_5(VAR_11->domain, VAR_11->domain ? FUNC_6(VAR_11->domain) : 0);
 u_int8_t VAR_31 = FUNC_1(VAR_30.string, VAR_30.length);

 if (VAR_12) {
  *VAR_12 = 0;
 }

 if (VAR_13) {
  *VAR_13 = 0;
 }

 if (VAR_14) {
  *VAR_14 = 0;
 }

 if (VAR_15) {
  VAR_15->identifier = 0;
  VAR_15->data = 0;
 }

 if (VAR_10 != ((void*)0)) {
  for (VAR_28 = 0; VAR_10[VAR_28] != ((void*)0); VAR_28++) {
   if (VAR_9 != 0 && VAR_10[VAR_28]->session_order >= VAR_9) {

    break;
   }
   if (VAR_25 && VAR_10[VAR_28]->session_order >= VAR_25) {

    VAR_24 = 0;
    VAR_25 = 0;
   }
   if (VAR_24) {
    if (VAR_10[VAR_28]->order < VAR_24) {

     continue;
    } else {

     VAR_24 = 0;
     VAR_25 = 0;
    }
   } else if (VAR_25) {

    continue;
   }
   if (FUNC_4(VAR_10[VAR_28], VAR_11->application_id, VAR_11->real_application_id, VAR_11->cred_result, VAR_11->account_id, VAR_30, VAR_31, VAR_11->pid, VAR_11->uid, VAR_11->bound_interface_index, VAR_11->traffic_class, VAR_11->protocol, &VAR_11->local_addr, &VAR_11->remote_addr, VAR_19, VAR_20, VAR_21)) {
    if (VAR_10[VAR_28]->result == VAR_6) {
     if (VAR_12 && *VAR_12 == 0) {
      *VAR_12 = VAR_10[VAR_28]->result_parameter.filter_control_unit;
      if (VAR_8 > 1) {
       FUNC_0(VAR_0, "Socket Policy: (Application %d Real Application %d BoundInterface %d Proto %d) Filter %d", VAR_11->application_id, VAR_11->real_application_id, VAR_11->bound_interface_index, VAR_11->protocol, VAR_10[VAR_28]->result_parameter.filter_control_unit);
      }
     }
     continue;
    } else if (VAR_10[VAR_28]->result == VAR_4) {
     if (VAR_13 && VAR_27 < VAR_1) {
      VAR_26[VAR_27++] = VAR_10[VAR_28]->result_parameter.route_rule_id;
      if (VAR_8 > 1) {
       FUNC_0(VAR_0, "Socket Policy: (Application %d Real Application %d BoundInterface %d Proto %d) Route Rule %d", VAR_11->application_id, VAR_11->real_application_id, VAR_11->bound_interface_index, VAR_11->protocol, VAR_10[VAR_28]->result_parameter.route_rule_id);
      }
     }
     continue;
    } else if (FUNC_3(VAR_10[VAR_28])) {
     if (VAR_14 && *VAR_14 == 0) {
      *VAR_14 = VAR_10[VAR_28]->result;
      if (VAR_8 > 1) {
       FUNC_0(VAR_0, "Socket Policy: (Application %d Real Application %d BoundInterface %d Proto %d) Service Action %d", VAR_11->application_id, VAR_11->real_application_id, VAR_11->bound_interface_index, VAR_11->protocol, VAR_10[VAR_28]->result);
      }
     }
     if (VAR_15 && VAR_15->identifier == 0) {
      VAR_15->identifier = VAR_10[VAR_28]->result_parameter.service.identifier;
      VAR_15->data = VAR_10[VAR_28]->result_parameter.service.data;
      if (VAR_8 > 1) {
       FUNC_0(VAR_0, "Socket Policy: (Application %d Real Application %d BoundInterface %d Proto %d) Service ID %d Data %d", VAR_11->application_id, VAR_11->real_application_id, VAR_11->bound_interface_index, VAR_11->protocol, VAR_10[VAR_28]->result_parameter.service.identifier, VAR_10[VAR_28]->result_parameter.service.data);
      }
     }
     continue;
    } else if (VAR_10[VAR_28]->result == VAR_7 ||
         VAR_10[VAR_28]->result == VAR_3) {
     if (VAR_16 != ((void*)0) &&
      VAR_29 < VAR_18) {
      VAR_16[VAR_29] = VAR_10[VAR_28]->result_parameter.netagent_id;
      if (VAR_17 != ((void*)0) &&
       VAR_10[VAR_28]->result == VAR_3) {
       VAR_17[VAR_29] |= VAR_2;
      }
      VAR_29++;
      if (VAR_8 > 1) {
       FUNC_0(VAR_0, "Socket Policy: (Application %d Real Application %d BoundInterface %d Proto %d) %s Netagent %d",
         VAR_11->application_id, VAR_11->real_application_id, VAR_11->bound_interface_index, VAR_11->protocol,
         VAR_10[VAR_28]->result == VAR_7 ? "Use" : "Scope",
         VAR_10[VAR_28]->result_parameter.netagent_id);
      }
     }
     continue;
    }


    if (VAR_10[VAR_28]->result == VAR_5) {
     VAR_24 = VAR_10[VAR_28]->result_parameter.skip_policy_order;
     VAR_25 = VAR_10[VAR_28]->session_order + 1;
     if (VAR_22) {
      *VAR_22 = VAR_10[VAR_28]->id;
     }
     continue;
    }


    VAR_23 = VAR_10[VAR_28];
    break;
   }
  }
 }

 if (VAR_27 == 1) {
  *VAR_13 = VAR_26[0];
 } else if (VAR_27 > 1) {
  *VAR_13 = FUNC_2(VAR_26);
 }
 return (VAR_23);
}
