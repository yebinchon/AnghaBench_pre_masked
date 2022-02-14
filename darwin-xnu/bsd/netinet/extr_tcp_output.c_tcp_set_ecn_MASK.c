
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int ecn_flags; int iss; TYPE_2__* t_inpcb; } ;
struct ifnet {int if_eflags; } ;
typedef int boolean_t ;
struct TYPE_4__ {TYPE_1__* inp_socket; } ;
struct TYPE_3__ {int * so_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tcpcb*) ;

void
FUNC_1(struct tcpcb *VAR_8, struct ifnet *VAR_9)
{
 boolean_t VAR_10;




 if (VAR_8->ecn_flags & VAR_3) {
  VAR_8->ecn_flags |= VAR_4;
  goto check_heuristic;
 }

 if (VAR_8->ecn_flags & VAR_2) {
  VAR_8->ecn_flags &= ~VAR_4;
  return;
 }



 if (VAR_9 != ((void*)0)) {
  if (VAR_9->if_eflags & VAR_1) {
   VAR_8->ecn_flags |= VAR_4;
   goto check_heuristic;
  }

  if (VAR_9->if_eflags & VAR_0) {
   VAR_8->ecn_flags &= ~VAR_4;
   return;
  }
 }



 VAR_10 = (VAR_8->t_inpcb->inp_socket->so_head != ((void*)0));
 if ((VAR_10 && VAR_5 == 1) ||
     (!VAR_10 && VAR_6 == 1)) {
  VAR_8->ecn_flags |= VAR_4;
  goto check_heuristic;
 } else {
  VAR_8->ecn_flags &= ~VAR_4;
 }

 return;

check_heuristic:
 if (!FUNC_0(VAR_8))
  VAR_8->ecn_flags &= ~VAR_4;






 if ((VAR_8->ecn_flags & (VAR_3 | VAR_2
     | VAR_4)) == VAR_4) {




  if ((VAR_8->iss % 100) >= VAR_7)
   VAR_8->ecn_flags &= ~VAR_4;
 }
}
