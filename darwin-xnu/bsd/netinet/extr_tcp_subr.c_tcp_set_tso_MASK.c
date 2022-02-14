
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_mpflags; scalar_t__ tso_max_segment_size; int t_flags; struct inpcb* t_inpcb; } ;
struct inpcb {int inp_vflag; } ;
struct ifnet {int if_hwassist; scalar_t__ if_tso_v6_mtu; scalar_t__ if_tso_v4_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(struct tcpcb *VAR_6, struct ifnet *VAR_7)
{
 {
  if (VAR_7 && (VAR_7->if_hwassist & VAR_0)) {
   VAR_6->t_flags |= VAR_4;
   if (VAR_7->if_tso_v4_mtu != 0)
    VAR_6->tso_max_segment_size = VAR_7->if_tso_v4_mtu;
   else
    VAR_6->tso_max_segment_size = VAR_3;
  } else
    VAR_6->t_flags &= ~VAR_4;
 }
}
