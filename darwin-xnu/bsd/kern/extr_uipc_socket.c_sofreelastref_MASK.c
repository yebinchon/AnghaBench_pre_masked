
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sb_flags; int sb_sel; } ;
struct TYPE_5__ {int sb_flags; int sb_sel; } ;
struct socket {int so_flags; int so_state; void* so_event; TYPE_3__ so_snd; TYPE_2__ so_rcv; TYPE_1__* so_proto; struct socket* so_head; int so_qlen; int so_incqlen; int so_incomp; } ;
struct TYPE_4__ {int * pr_getlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct socket*,int ) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct socket*,struct socket*) ;
 int VAR_8 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*) ;
 void* VAR_9 ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*) ;

void
FUNC_11(struct socket *VAR_10, int VAR_11)
{
 struct socket *VAR_12 = VAR_10->so_head;



 if (!(VAR_10->so_flags & VAR_4) || !(VAR_10->so_state & VAR_7)) {
  FUNC_3(&VAR_10->so_snd.sb_sel);
  FUNC_3(&VAR_10->so_rcv.sb_sel);
  VAR_10->so_rcv.sb_flags &= ~(VAR_0|VAR_2);
  VAR_10->so_snd.sb_flags &= ~(VAR_0|VAR_2);
  VAR_10->so_event = VAR_9;
  return;
 }
 if (VAR_12 != ((void*)0)) {




  if (VAR_12->so_proto->pr_getlock != ((void*)0)) {
   FUNC_6(VAR_12, 1);
   FUNC_4(VAR_12, VAR_10);
  }
  if (VAR_10->so_state & VAR_6) {
   VAR_10->so_state &= ~VAR_6;
   FUNC_0(&VAR_12->so_incomp, VAR_10, VAR_8);
   VAR_12->so_incqlen--;
   VAR_12->so_qlen--;
   VAR_10->so_head = ((void*)0);

   if (VAR_12->so_proto->pr_getlock != ((void*)0)) {
    FUNC_5(VAR_12);
    FUNC_7(VAR_12, 1);
   }
  } else if (VAR_10->so_state & VAR_5) {
   if (VAR_12->so_proto->pr_getlock != ((void*)0)) {
    FUNC_5(VAR_12);
    FUNC_7(VAR_12, 1);
   }






   FUNC_3(&VAR_10->so_snd.sb_sel);
   FUNC_3(&VAR_10->so_rcv.sb_sel);
   VAR_10->so_rcv.sb_flags &= ~(VAR_0|VAR_2);
   VAR_10->so_snd.sb_flags &= ~(VAR_0|VAR_2);
   VAR_10->so_event = VAR_9;
   return;
  } else {
   if (VAR_12->so_proto->pr_getlock != ((void*)0)) {
    FUNC_5(VAR_12);
   FUNC_7(VAR_12, 1);
 }
   FUNC_2("sofree: not queued\n");
  }
 }
 FUNC_10(VAR_10);
 FUNC_9(VAR_10);
 VAR_10->so_rcv.sb_flags &= ~VAR_2;
 VAR_10->so_snd.sb_flags &= ~(VAR_2|VAR_1);
 VAR_10->so_event = VAR_9;

 if (VAR_11)
  FUNC_8(VAR_10);
}
