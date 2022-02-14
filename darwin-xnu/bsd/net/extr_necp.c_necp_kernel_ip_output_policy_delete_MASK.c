
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_kernel_ip_output_policy {int * cond_bound_interface; } ;
typedef int necp_kernel_policy_id ;


 int VAR_0 ;
 int FUNC_0 (struct necp_kernel_ip_output_policy*,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct necp_kernel_ip_output_policy*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 struct necp_kernel_ip_output_policy* FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_5(necp_kernel_policy_id VAR_6)
{
 struct necp_kernel_ip_output_policy *VAR_7 = ((void*)0);

 FUNC_1(&VAR_5, VAR_1);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_7, VAR_4);

  if (VAR_7->cond_bound_interface) {
   FUNC_3(VAR_7->cond_bound_interface);
   VAR_7->cond_bound_interface = ((void*)0);
  }

  FUNC_0(VAR_7, sizeof(*VAR_7), VAR_2);
  return (VAR_3);
 }

 return (VAR_0);
}
