
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union necp_sockaddr_union {int dummy; } necp_sockaddr_union ;
typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct TYPE_2__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_ip_output_policy {scalar_t__ session_order; scalar_t__ order; scalar_t__ result; TYPE_1__ result_parameter; } ;
typedef int necp_kernel_policy_id ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct necp_kernel_ip_output_policy*,int ,int ,scalar_t__,scalar_t__,int ,union necp_sockaddr_union*,union necp_sockaddr_union*) ;
 struct necp_kernel_ip_output_policy*** VAR_2 ;

__attribute__((used)) static inline struct necp_kernel_ip_output_policy *
FUNC_2(necp_kernel_policy_id VAR_3, necp_kernel_policy_id VAR_4, u_int32_t VAR_5, u_int32_t VAR_6, u_int16_t VAR_7, union necp_sockaddr_union *VAR_8, union necp_sockaddr_union *VAR_9)
{
 u_int32_t VAR_10 = 0;
 u_int32_t VAR_11 = 0;
 int VAR_12;
 struct necp_kernel_ip_output_policy *VAR_13 = ((void*)0);
 struct necp_kernel_ip_output_policy **VAR_14 = VAR_2[FUNC_0(VAR_3)];
 if (VAR_14 != ((void*)0)) {
  for (VAR_12 = 0; VAR_14[VAR_12] != ((void*)0); VAR_12++) {
   if (VAR_1 != 0 && VAR_14[VAR_12]->session_order >= VAR_1) {

    break;
   }
   if (VAR_11 && VAR_14[VAR_12]->session_order >= VAR_11) {

    VAR_10 = 0;
    VAR_11 = 0;
   }
   if (VAR_10) {
    if (VAR_14[VAR_12]->order < VAR_10) {

     continue;
    } else {

     VAR_10 = 0;
     VAR_11 = 0;
    }
   } else if (VAR_11) {

    continue;
   }
   if (FUNC_1(VAR_14[VAR_12], VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9)) {

    VAR_13 = VAR_14[VAR_12];

    if (VAR_14[VAR_12]->result == VAR_0) {
     VAR_10 = VAR_14[VAR_12]->result_parameter.skip_policy_order;
     VAR_11 = VAR_14[VAR_12]->session_order + 1;
     continue;
    }

    break;
   }
  }
 }

 return (VAR_13);
}
