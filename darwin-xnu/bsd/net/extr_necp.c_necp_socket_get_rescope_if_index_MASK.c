
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int scoped_interface_index; } ;
struct TYPE_5__ {scalar_t__ result; TYPE_1__ result_parameter; } ;
struct TYPE_6__ {TYPE_2__ results; } ;
struct inpcb {TYPE_3__ inp_policyresult; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

u_int
FUNC_1(struct inpcb *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  return (0);
 }

 if (VAR_2->inp_policyresult.results.result == VAR_1) {
  return (VAR_2->inp_policyresult.results.result_parameter.scoped_interface_index);
 } else if (VAR_2->inp_policyresult.results.result == VAR_0) {
  return (FUNC_0());
 }

 return (0);
}
