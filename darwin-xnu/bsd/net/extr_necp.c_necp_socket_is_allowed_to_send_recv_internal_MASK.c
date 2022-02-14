
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr {int dummy; } ;
struct rtentry {int dummy; } ;
struct necp_socket_info {int application_id; } ;
struct TYPE_11__ {scalar_t__ tunnel_interface_index; } ;
struct necp_kernel_socket_policy {scalar_t__ result; scalar_t__ id; TYPE_1__ result_parameter; } ;
struct TYPE_13__ {scalar_t__ tunnel_interface_index; } ;
struct TYPE_14__ {scalar_t__ route_rule_id; scalar_t__ result; TYPE_3__ result_parameter; } ;
struct TYPE_15__ {scalar_t__ policy_id; scalar_t__ policy_gencount; scalar_t__ skip_policy_id; scalar_t__ flowhash; TYPE_4__ results; } ;
struct TYPE_12__ {struct rtentry* ro_rt; } ;
struct inpcb {int inp_flags2; int inp_socket; TYPE_5__ inp_policyresult; TYPE_2__ inp_route; } ;
typedef int netagent_ids ;
struct TYPE_16__ {scalar_t__ identifier; int member_1; int member_0; } ;
typedef TYPE_6__ necp_kernel_policy_service ;
typedef scalar_t__ necp_kernel_policy_result ;
typedef scalar_t__ necp_kernel_policy_id ;
typedef TYPE_7__* ifnet_t ;
struct TYPE_17__ {scalar_t__ if_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__**,int ,int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int * VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (struct rtentry*,TYPE_7__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct sockaddr*,struct sockaddr*,struct inpcb*) ;
 scalar_t__ FUNC_9 (struct necp_socket_info*) ;
 int FUNC_10 (struct inpcb*,struct sockaddr*,struct sockaddr*,int ,struct necp_socket_info*) ;
 struct necp_kernel_socket_policy* FUNC_11 (int ,struct necp_socket_info*,int *,scalar_t__*,scalar_t__*,TYPE_6__*,scalar_t__*,int *,int,int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct inpcb*) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static bool
FUNC_14(struct inpcb *VAR_23, struct sockaddr *VAR_24, struct sockaddr *VAR_25, ifnet_t VAR_26, necp_kernel_policy_id *VAR_27, u_int32_t *VAR_28, necp_kernel_policy_id *VAR_29)
{
 u_int32_t VAR_30 = VAR_26 ? VAR_26->if_index : 0;
 bool VAR_31 = VAR_15;
 struct necp_socket_info VAR_32;
 u_int32_t VAR_33 = 0;
 necp_kernel_policy_result VAR_34 = 0;
 necp_kernel_policy_service VAR_35 = { 0, 0 };
 u_int32_t VAR_36 = 0;
 struct rtentry *VAR_37 = ((void*)0);
 u_int32_t VAR_38 = VAR_1;

 u_int32_t VAR_39[VAR_11];
 FUNC_5(&VAR_39, 0, sizeof(VAR_39));

 if (VAR_27) {
  *VAR_27 = VAR_4;
 }
 if (VAR_29) {
  *VAR_29 = VAR_4;
 }
 if (VAR_28) {
  *VAR_28 = 0;
 }

 if (VAR_23 == ((void*)0)) {
  goto done;
 }

 VAR_37 = VAR_23->inp_route.ro_rt;


 if (VAR_19 == 0 ||
  (!(VAR_23->inp_flags2 & VAR_2) && VAR_22 == 0)) {
  if (VAR_17 > 0) {
   if (FUNC_8(VAR_24, VAR_25, VAR_23)) {
    VAR_31 = VAR_15;
   } else {
    VAR_31 = VAR_0;
   }
  }
  goto done;
 }


 if ((FUNC_12(VAR_23) || (VAR_24 == ((void*)0) && VAR_25 == ((void*)0))) && VAR_23->inp_policyresult.policy_id != VAR_4) {
  bool VAR_40 = VAR_0;
  bool VAR_41 = VAR_15;

  if (VAR_23->inp_policyresult.policy_gencount != VAR_20) {
   VAR_40 = VAR_15;
  } else {
   if (VAR_23->inp_policyresult.results.route_rule_id != 0) {
    FUNC_4(&VAR_18);
    if (!FUNC_7(VAR_37, VAR_26, VAR_23->inp_policyresult.results.route_rule_id, &VAR_38)) {
     VAR_41 = VAR_0;
    }
    FUNC_3(&VAR_18);
   }
  }

  if (!VAR_40) {
   if (!VAR_41 ||
    VAR_23->inp_policyresult.results.result == VAR_6 ||
    VAR_23->inp_policyresult.results.result == VAR_9 ||
    (VAR_23->inp_policyresult.results.result == VAR_7 && VAR_26 &&
    VAR_23->inp_policyresult.results.result_parameter.tunnel_interface_index != VAR_30)) {
     VAR_31 = VAR_0;
    } else {
     if (VAR_27) {
      *VAR_27 = VAR_23->inp_policyresult.policy_id;
     }
     if (VAR_29) {
      *VAR_29 = VAR_23->inp_policyresult.skip_policy_id;
     }
     if (VAR_28) {
      *VAR_28 = VAR_23->inp_policyresult.results.route_rule_id;
     }
    }
   goto done;
  }
 }


 if (FUNC_8(VAR_24, VAR_25, VAR_23)) {
  VAR_31 = VAR_15;
  goto done;
 }


 FUNC_4(&VAR_18);
 FUNC_10(VAR_23, VAR_24, VAR_25, 0, &VAR_32);

 VAR_33 = FUNC_9(&VAR_32);
 if (VAR_23->inp_policyresult.policy_id != VAR_4 &&
  VAR_23->inp_policyresult.policy_gencount == VAR_20 &&
  VAR_23->inp_policyresult.flowhash == VAR_33) {
  if (VAR_23->inp_policyresult.results.result == VAR_6 ||
   VAR_23->inp_policyresult.results.result == VAR_9 ||
   (VAR_23->inp_policyresult.results.result == VAR_7 && VAR_26 &&
   VAR_23->inp_policyresult.results.result_parameter.tunnel_interface_index != VAR_30) ||
   (VAR_23->inp_policyresult.results.route_rule_id != 0 &&
    !FUNC_7(VAR_37, VAR_26, VAR_23->inp_policyresult.results.route_rule_id, &VAR_38))) {
   VAR_31 = VAR_0;
  } else {
   if (VAR_27) {
    *VAR_27 = VAR_23->inp_policyresult.policy_id;
   }
   if (VAR_28) {
    *VAR_28 = VAR_23->inp_policyresult.results.route_rule_id;
   }
  }
  FUNC_3(&VAR_18);
  goto done;
 }

 struct necp_kernel_socket_policy *VAR_42 = FUNC_11(VAR_21[FUNC_1(VAR_32.application_id)], &VAR_32, ((void*)0), &VAR_36, &VAR_34, &VAR_35, VAR_39, ((void*)0), VAR_11, ((void*)0), 0, FUNC_2(), VAR_29);
 if (VAR_42 != ((void*)0)) {
  if (VAR_42->result == VAR_6 ||
   VAR_42->result == VAR_9 ||
   (VAR_42->result == VAR_7 && VAR_26 &&
   VAR_42->result_parameter.tunnel_interface_index != VAR_30) ||
   ((VAR_34 == VAR_10 ||
     VAR_34 == VAR_8) &&
    VAR_35.identifier != 0 && VAR_35.identifier != VAR_12) ||
   (VAR_36 != 0 &&
    !FUNC_7(VAR_37, VAR_26, VAR_36, &VAR_38)) ||
   !FUNC_6(VAR_39, VAR_11)) {
   VAR_31 = VAR_0;
  } else {
   if (VAR_27) {
    *VAR_27 = VAR_42->id;
   }
   if (VAR_28) {
    *VAR_28 = VAR_36;
   }
  }
  FUNC_3(&VAR_18);

  if (VAR_16 > 1 && VAR_42->id != VAR_23->inp_policyresult.policy_id) {
   FUNC_0(VAR_3, "Socket Send/Recv Policy: Policy %d Allowed %d", VAR_27 ? *VAR_27 : 0, VAR_31);
  }
  goto done;
 } else if (VAR_17 > 0) {
  VAR_31 = VAR_0;
 } else {
  if (VAR_27) {
   *VAR_27 = VAR_5;
  }
  if (VAR_28) {
   *VAR_28 = VAR_36;
  }
 }

 FUNC_3(&VAR_18);

done:
 if (!VAR_31 && VAR_38 != VAR_1) {
  FUNC_13(VAR_23->inp_socket, (VAR_14 | VAR_13));
 }

 return (VAR_31);
}
