
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int flow_divert_control_unit; } ;
struct TYPE_5__ {scalar_t__ result; TYPE_1__ result_parameter; } ;
struct TYPE_6__ {TYPE_2__ results; } ;
struct inpcb {TYPE_3__ inp_policyresult; } ;


 scalar_t__ VAR_0 ;

u_int32_t
FUNC_0(struct inpcb *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  return (0);
 }

 if (VAR_1->inp_policyresult.results.result == VAR_0) {
  return (VAR_1->inp_policyresult.results.result_parameter.flow_divert_control_unit);
 }

 return (0);
}
