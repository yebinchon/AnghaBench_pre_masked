
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_session_policy {scalar_t__ applied_route_rules_id; scalar_t__* kernel_socket_policies; scalar_t__* kernel_ip_output_policies; int applied; int * applied_account; int applied_result_uuid; int applied_real_app_uuid; int applied_app_uuid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10(struct necp_session_policy *VAR_11)
{
 int VAR_12 = 0;
 if (VAR_11 == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_1(&VAR_7, VAR_1);


 if (!FUNC_9(VAR_11->applied_app_uuid)) {
  bool VAR_13 = VAR_0;
  if (FUNC_6(VAR_11->applied_app_uuid, &VAR_13, VAR_5) && VAR_13) {
   VAR_10 = VAR_5;
   VAR_8--;
  }
  FUNC_8(VAR_11->applied_app_uuid);
 }
 if (!FUNC_9(VAR_11->applied_real_app_uuid)) {
  FUNC_6(VAR_11->applied_real_app_uuid, ((void*)0), VAR_0);
  FUNC_8(VAR_11->applied_real_app_uuid);
 }
 if (!FUNC_9(VAR_11->applied_result_uuid)) {
  FUNC_7(VAR_11->applied_result_uuid);
  FUNC_8(VAR_11->applied_result_uuid);
 }


 if (VAR_11->applied_account != ((void*)0)) {
  FUNC_5(&VAR_6, VAR_11->applied_account);
  FUNC_0(VAR_11->applied_account, VAR_4);
  VAR_11->applied_account = ((void*)0);
 }


 if (VAR_11->applied_route_rules_id != 0) {
  FUNC_4(&VAR_9, VAR_11->applied_route_rules_id);
  VAR_11->applied_route_rules_id = 0;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_11->kernel_socket_policies[VAR_12] != 0) {
   FUNC_3(VAR_11->kernel_socket_policies[VAR_12]);
   VAR_11->kernel_socket_policies[VAR_12] = 0;
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  if (VAR_11->kernel_ip_output_policies[VAR_12] != 0) {
   FUNC_2(VAR_11->kernel_ip_output_policies[VAR_12]);
   VAR_11->kernel_ip_output_policies[VAR_12] = 0;
  }
 }

 VAR_11->applied = VAR_0;

 return (VAR_5);
}
