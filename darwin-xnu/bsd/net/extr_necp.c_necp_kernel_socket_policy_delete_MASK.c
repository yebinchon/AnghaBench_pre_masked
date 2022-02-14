
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_kernel_socket_policy {int * cond_custom_entitlement; int * cond_domain; int * cond_bound_interface; } ;
typedef int necp_kernel_policy_id ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct necp_kernel_socket_policy*,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct necp_kernel_socket_policy*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 struct necp_kernel_socket_policy* FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(necp_kernel_policy_id VAR_7)
{
 struct necp_kernel_socket_policy *VAR_8 = ((void*)0);

 FUNC_2(&VAR_6, VAR_1);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_8, VAR_5);

  if (VAR_8->cond_bound_interface) {
   FUNC_4(VAR_8->cond_bound_interface);
   VAR_8->cond_bound_interface = ((void*)0);
  }

  if (VAR_8->cond_domain) {
   FUNC_0(VAR_8->cond_domain, VAR_2);
   VAR_8->cond_domain = ((void*)0);
  }

  if (VAR_8->cond_custom_entitlement) {
   FUNC_0(VAR_8->cond_custom_entitlement, VAR_2);
   VAR_8->cond_custom_entitlement = ((void*)0);
  }

  FUNC_1(VAR_8, sizeof(*VAR_8), VAR_3);
  return (VAR_4);
 }

 return (VAR_0);
}
