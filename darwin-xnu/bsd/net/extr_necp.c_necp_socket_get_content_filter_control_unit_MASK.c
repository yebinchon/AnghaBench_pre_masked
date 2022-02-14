
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct socket {int dummy; } ;
struct TYPE_3__ {int filter_control_unit; } ;
struct TYPE_4__ {TYPE_1__ results; } ;
struct inpcb {TYPE_2__ inp_policyresult; } ;


 struct inpcb* FUNC_0 (struct socket*) ;

u_int32_t
FUNC_1(struct socket *VAR_0)
{
 struct inpcb *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0)) {
  return (0);
 }
 return (VAR_1->inp_policyresult.results.filter_control_unit);
}
