
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_adaptive_rtimo; scalar_t__ t_state; scalar_t__ t_rtimo_probes; int t_flagsext; int * t_timer; TYPE_1__* t_inpcb; } ;
struct ifnet {int if_eflags; } ;
struct TYPE_2__ {struct ifnet* inp_last_outifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct tcpcb*) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_2(struct tcpcb *VAR_4, int VAR_5)
{
 struct ifnet *VAR_6 = VAR_4->t_inpcb->inp_last_outifp;

 if ((VAR_4->t_adaptive_rtimo > 0 ||
     (VAR_6 != ((void*)0) &&
     (VAR_6->if_eflags & VAR_0)))
     && VAR_5 > 0 &&
     VAR_4->t_state == VAR_1) {
  VAR_4->t_timer[VAR_2] = FUNC_0(VAR_4,
   (FUNC_1(VAR_4) << 1));
  VAR_4->t_flagsext |= VAR_3;
  VAR_4->t_rtimo_probes = 0;
 }
}
