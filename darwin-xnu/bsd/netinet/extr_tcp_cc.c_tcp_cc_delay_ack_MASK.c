
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_flags; } ;
struct tcpcb {int t_flags; int t_unacksegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(struct tcpcb *VAR_5, struct tcphdr *VAR_6)
{
 switch (VAR_4) {
     case 1:
     case 2:
  if ((VAR_5->t_flags & VAR_0) == 0 &&
      (VAR_6->th_flags & VAR_2) == 0 &&
      (VAR_5->t_unacksegs == 1))
   return(1);
  break;
     case 3:
  if ((VAR_5->t_flags & VAR_0) == 0 &&
      (VAR_6->th_flags & VAR_2) == 0 &&
      ((VAR_5->t_unacksegs == 1) ||
      ((VAR_5->t_flags & VAR_1) != 0 &&
   VAR_5->t_unacksegs < (VAR_3))))
   return(1);
  break;
 }
 return(0);
}
