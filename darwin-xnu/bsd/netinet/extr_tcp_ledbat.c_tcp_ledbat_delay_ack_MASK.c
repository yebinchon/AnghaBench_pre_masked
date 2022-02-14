
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_flags; } ;
struct tcpcb {int t_flags; int t_unacksegs; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct tcpcb *VAR_2, struct tcphdr *VAR_3) {
 if ((VAR_2->t_flags & VAR_0) == 0 &&
  (VAR_3->th_flags & VAR_1) == 0 && (VAR_2->t_unacksegs == 1))
  return(1);
 return(0);
}
