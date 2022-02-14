
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct necp_client_parsed_parameters {int valid_fields; int flags; int effective_uuid; int traffic_class; int ip_protocol; int remote_addr; int local_addr; int effective_pid; } ;
struct necp_client_nexus_parameters {int local_addr; int remote_addr; int is_listener; int allow_qos_marking; int policy_id; int euuid; int traffic_class; int ip_protocol; int pid; int epid; } ;
struct necp_client {int result; int policy_id; int proc_pid; scalar_t__ parameters_length; int parameters; } ;
typedef int client_result_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int *,int) ;
 int * FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,struct necp_client_parsed_parameters*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct necp_client *VAR_3,
           struct necp_client_nexus_parameters *VAR_4)
{
 FUNC_0(VAR_4 != ((void*)0));

 struct necp_client_parsed_parameters VAR_5 = {};
 int VAR_6 = FUNC_3(VAR_3->parameters, (u_int32_t)VAR_3->parameters_length, &VAR_5);

 VAR_4->pid = VAR_3->proc_pid;
 if (VAR_5.valid_fields & VAR_2) {
  VAR_4->epid = VAR_5.effective_pid;
 } else {
  VAR_4->epid = VAR_4->pid;
 }
 FUNC_1(&VAR_4->local_addr, &VAR_5.local_addr, sizeof(VAR_4->local_addr));
 FUNC_1(&VAR_4->remote_addr, &VAR_5.remote_addr, sizeof(VAR_4->remote_addr));
 VAR_4->ip_protocol = VAR_5.ip_protocol;
 VAR_4->traffic_class = VAR_5.traffic_class;
 FUNC_4(VAR_4->euuid, VAR_5.effective_uuid);
 VAR_4->is_listener = (VAR_5.flags & VAR_0) ? 1 : 0;
 VAR_4->policy_id = VAR_3->policy_id;


 u_int32_t VAR_7 = 0;
 u_int32_t VAR_8 = 0;
 u_int8_t *VAR_9 = ((void*)0);
 VAR_9 = FUNC_2(VAR_3->result, 0, &VAR_8);
 if (VAR_9 && VAR_8 == sizeof(VAR_7)) {
  FUNC_1(&VAR_7, VAR_9, VAR_8);
 }
 VAR_4->allow_qos_marking = (VAR_7 & VAR_1) ? 1 : 0;

 return (VAR_6);
}
