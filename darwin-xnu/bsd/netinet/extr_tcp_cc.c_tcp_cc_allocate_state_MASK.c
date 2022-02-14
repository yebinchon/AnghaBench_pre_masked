
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ tcp_cc_index; struct tcp_ccstate* t_ccstate; } ;
struct tcp_ccstate {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_ccstate*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(struct tcpcb *VAR_3)
{
 if (VAR_3->tcp_cc_index == VAR_0 &&
  VAR_3->t_ccstate == ((void*)0)) {
  VAR_3->t_ccstate = (struct tcp_ccstate *)FUNC_1(VAR_2);






  if (VAR_3->t_ccstate == ((void*)0))
   VAR_3->tcp_cc_index = VAR_1;
  else
   FUNC_0(VAR_3->t_ccstate, sizeof(*VAR_3->t_ccstate));
 }
}
