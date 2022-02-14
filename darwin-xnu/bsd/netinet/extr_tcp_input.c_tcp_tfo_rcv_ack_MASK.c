
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ th_seq; } ;
struct tcpcb {scalar_t__ t_tfo_probe_state; scalar_t__ t_tfo_probes; scalar_t__ rcv_nxt; int * t_timer; } ;


 int FUNC_0 (struct tcpcb*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_2 (struct tcpcb*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_4, struct tcphdr *VAR_5)
{
 if (VAR_4->t_tfo_probe_state == VAR_2 &&
     VAR_4->t_tfo_probes > 0) {
  if (VAR_5->th_seq == VAR_4->rcv_nxt) {

   VAR_4->t_tfo_probe_state = VAR_1;
  } else if (FUNC_1(VAR_5->th_seq, VAR_4->rcv_nxt)) {

   VAR_4->t_tfo_probe_state = VAR_3;
   VAR_4->t_timer[VAR_0] = FUNC_0(VAR_4,
       FUNC_2(VAR_4));
  }
 }
}
