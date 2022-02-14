
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_socket_policy {scalar_t__ result; scalar_t__ session_order; scalar_t__ order; TYPE_1__ result_parameter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct necp_kernel_socket_policy*) ;

__attribute__((used)) static inline bool
FUNC_1(struct necp_kernel_socket_policy *VAR_8, struct necp_kernel_socket_policy *VAR_9)
{
 if (VAR_8->result == VAR_1) {

  return (VAR_7);
 } else if (VAR_8->result == VAR_5 ||
      VAR_8->result == VAR_3 ||
      VAR_8->result == VAR_6 ||
      VAR_8->result == VAR_2) {

  return (VAR_0);
 } else if (FUNC_0(VAR_8)) {

  return (FUNC_0(VAR_9));
 } else if (VAR_8->result == VAR_4) {
  if (VAR_8->session_order != VAR_9->session_order) {

   return (VAR_0);
  } else {
   if (VAR_8->result_parameter.skip_policy_order == 0 ||
    VAR_9->order >= VAR_8->result_parameter.skip_policy_order) {

    return (VAR_0);
   } else {

    return (VAR_7);
   }
  }
 }


 return (VAR_7);
}
