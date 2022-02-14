
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct necp_client_flow {int remote_addr; int local_addr; int interface_index; int necp_flow_flags; int socket; int nexus; } ;
struct necp_client {scalar_t__ parameters_length; int parameters; scalar_t__ allow_multiple_flows; } ;
struct necp_aggregate_result {scalar_t__ routed_interface_index; scalar_t__ routing_result; } ;
typedef int proc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct necp_aggregate_result*,int *,int ,int *,int *,int *,int) ;

__attribute__((used)) static bool
FUNC_1(proc_t VAR_2, struct necp_client *VAR_3,
      struct necp_client_flow *VAR_4)
{
 struct necp_aggregate_result VAR_5;
 bool VAR_6 = (VAR_3->allow_multiple_flows && !VAR_4->nexus && !VAR_4->socket);

 VAR_4->necp_flow_flags = 0;
 int VAR_7 = FUNC_0(VAR_2, VAR_3->parameters,
               (u_int32_t)VAR_3->parameters_length,
               &VAR_5, &VAR_4->necp_flow_flags,
               VAR_4->interface_index,
               &VAR_4->local_addr, &VAR_4->remote_addr, ((void*)0), VAR_6);

 return (VAR_7 == 0 &&
   VAR_5.routed_interface_index != VAR_0 &&
   VAR_5.routing_result != VAR_1);
}
