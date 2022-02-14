
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flags; scalar_t__ rcv_waitforss; int t_flagsext; scalar_t__ rcv_unackwin; scalar_t__ rcv_by_unackwin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_0(struct tcpcb *VAR_5)
{
 VAR_5->t_flags &= ~(VAR_2|VAR_1);
 VAR_5->rcv_by_unackwin = 0;
 VAR_5->rcv_unackwin = VAR_3 + VAR_4;







 VAR_5->t_flagsext |= VAR_0;
 VAR_5->rcv_waitforss = 0;
}
