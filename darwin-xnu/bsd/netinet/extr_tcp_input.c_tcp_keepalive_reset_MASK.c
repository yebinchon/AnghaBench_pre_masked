
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_rtimo_probes; int t_flagsext; int * t_timer; } ;


 int FUNC_0 (struct tcpcb*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct tcpcb*) ;
 int VAR_1 ;

inline void
FUNC_2(struct tcpcb *VAR_2)
{
 VAR_2->t_timer[VAR_0] = FUNC_0(VAR_2,
  FUNC_1(VAR_2));
 VAR_2->t_flagsext &= ~(VAR_1);
 VAR_2->t_rtimo_probes = 0;
}
