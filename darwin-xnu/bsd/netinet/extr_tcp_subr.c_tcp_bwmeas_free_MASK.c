
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flagsext; int * t_bwmeas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct tcpcb *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->t_bwmeas);
 VAR_2->t_bwmeas = ((void*)0);
 VAR_2->t_flagsext &= ~(VAR_0);
}
