
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tunnel_interface_index; } ;
typedef TYPE_1__ necp_kernel_policy_result_parameter ;
typedef int * ifnet_t ;


 int ** VAR_0 ;

ifnet_t
FUNC_0(necp_kernel_policy_result_parameter *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  return (((void*)0));
 }

 return (VAR_0[VAR_1->tunnel_interface_index]);
}
