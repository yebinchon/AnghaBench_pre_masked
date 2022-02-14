
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_ip_output_policy {scalar_t__ result; scalar_t__ session_order; scalar_t__ order; TYPE_1__ result_parameter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(struct necp_kernel_ip_output_policy *VAR_3, struct necp_kernel_ip_output_policy *VAR_4)
{
 if (VAR_3->result == VAR_1) {
  if (VAR_3->session_order != VAR_4->session_order) {

   return (VAR_0);
  } else {
   if (VAR_3->result_parameter.skip_policy_order == 0 ||
    VAR_4->order >= VAR_3->result_parameter.skip_policy_order) {

    return (VAR_0);
   } else {

    return (VAR_2);
   }
  }
 }


 return (VAR_2);
}
