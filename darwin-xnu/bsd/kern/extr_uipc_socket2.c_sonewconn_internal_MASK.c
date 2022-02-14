
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sb_flags; int sb_hiwat; struct socket* sb_so; } ;
struct TYPE_10__ {int sb_flags; int sb_hiwat; struct socket* sb_so; } ;
struct socket {int so_qlen; int so_incqlen; int so_qlimit; int so_options; int so_state; int so_flags; int so_usecount; int so_flags1; int so_timeo; int so_incomp; int so_comp; struct socket* so_head; TYPE_3__* so_proto; TYPE_4__ so_snd; TYPE_5__ so_rcv; int so_traffic_class; int so_background_thread; int so_evlist; scalar_t__ next_unlock_lr; scalar_t__ next_lock_lr; int e_uuid; int e_upid; int e_pid; int last_uuid; int last_upid; int last_pid; int so_cred; int so_pgid; int so_linger; int so_type; } ;
typedef int lck_mtx_t ;
typedef int caddr_t ;
struct TYPE_8__ {TYPE_2__* pr_domain; scalar_t__ pr_unlock; TYPE_1__* pr_usrreqs; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_7__ {int dom_refs; int * dom_mtx; } ;
struct TYPE_6__ {scalar_t__ (* pru_attach ) (struct socket*,int ,int *) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct socket*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct socket*,struct socket*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int *) ;
 int VAR_20 ;
 int FUNC_10 (struct socket*) ;
 struct socket* FUNC_11 (int,int ,int ) ;
 int FUNC_12 (struct socket*,int ) ;
 int FUNC_13 (struct socket*,int ) ;
 int FUNC_14 (struct socket*) ;
 int FUNC_15 (struct socket*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_16 (struct socket*,int ,int ) ;
 int FUNC_17 (struct socket*) ;
 int * FUNC_18 (struct socket*,int ) ;
 scalar_t__ FUNC_19 (struct socket*,int ,int *) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static struct socket *
FUNC_21(struct socket *VAR_24, int VAR_25)
{
 int VAR_26, VAR_27 = 0;
 struct socket *VAR_28;
 lck_mtx_t *VAR_29;

 if (VAR_24->so_proto->pr_getlock != ((void*)0))
  VAR_29 = (*VAR_24->so_proto->pr_getlock)(VAR_24, 0);
 else
  VAR_29 = VAR_24->so_proto->pr_domain->dom_mtx;
 FUNC_0(VAR_29, VAR_0);

 if (!VAR_22) {




  VAR_26 = VAR_24->so_qlen;
 } else {
  VAR_26 = VAR_24->so_qlen - VAR_24->so_incqlen;
  if (VAR_24->so_incqlen > VAR_21)
   VAR_26 = VAR_21;
 }

 if (VAR_26 >=
     (VAR_23 ? VAR_24->so_qlimit : (3 * VAR_24->so_qlimit / 2)))
  return ((struct socket *)0);
 VAR_28 = FUNC_11(1, FUNC_1(VAR_24), VAR_24->so_type);
 if (VAR_28 == ((void*)0))
  return ((struct socket *)0);

 if (VAR_24->so_proto == ((void*)0)) {
  FUNC_15(VAR_28);
  return ((struct socket *)0);
 }

 VAR_28->so_type = VAR_24->so_type;
 VAR_28->so_options = VAR_24->so_options &~ VAR_16;
 VAR_28->so_linger = VAR_24->so_linger;
 VAR_28->so_state = VAR_24->so_state | VAR_19;
 VAR_28->so_proto = VAR_24->so_proto;
 VAR_28->so_timeo = VAR_24->so_timeo;
 VAR_28->so_pgid = VAR_24->so_pgid;
 FUNC_5(VAR_24->so_cred);
 VAR_28->so_cred = VAR_24->so_cred;
 VAR_28->last_pid = VAR_24->last_pid;
 VAR_28->last_upid = VAR_24->last_upid;
 FUNC_7(VAR_28->last_uuid, VAR_24->last_uuid, sizeof (VAR_28->last_uuid));
 if (VAR_24->so_flags & VAR_5) {
  VAR_28->e_pid = VAR_24->e_pid;
  VAR_28->e_upid = VAR_24->e_upid;
  FUNC_7(VAR_28->e_uuid, VAR_24->e_uuid, sizeof (VAR_28->e_uuid));
 }

 VAR_28->so_flags = VAR_24->so_flags &
     (VAR_9 | VAR_7 | VAR_14 |
     VAR_10 | VAR_4 | VAR_12 |
     VAR_8 | VAR_13| VAR_11 |
     VAR_15 | VAR_5);
 VAR_28->so_usecount = 1;
 VAR_28->next_lock_lr = 0;
 VAR_28->next_unlock_lr = 0;

 VAR_28->so_rcv.sb_flags |= VAR_1;
 VAR_28->so_rcv.sb_so = VAR_28->so_snd.sb_so = VAR_28;
 FUNC_2(&VAR_28->so_evlist);






 VAR_28->so_flags1 |=
     VAR_24->so_flags1 & (VAR_3);
 VAR_28->so_background_thread = VAR_24->so_background_thread;
 VAR_28->so_traffic_class = VAR_24->so_traffic_class;

 if (FUNC_16(VAR_28, VAR_24->so_snd.sb_hiwat, VAR_24->so_rcv.sb_hiwat)) {
  FUNC_15(VAR_28);
  return ((struct socket *)0);
 }
 VAR_28->so_rcv.sb_flags |= (VAR_24->so_rcv.sb_flags & VAR_2);
 VAR_28->so_snd.sb_flags |= (VAR_24->so_snd.sb_flags & VAR_2);





 if (VAR_24->so_proto->pr_unlock)
  FUNC_13(VAR_24, 0);
 if (((*VAR_28->so_proto->pr_usrreqs->pru_attach)(VAR_28, 0, ((void*)0)) != 0) ||
     VAR_27) {
  FUNC_15(VAR_28);
  if (VAR_24->so_proto->pr_unlock)
   FUNC_12(VAR_24, 0);
  return ((struct socket *)0);
 }
 if (VAR_24->so_proto->pr_unlock) {
  FUNC_12(VAR_24, 0);




  if ((VAR_24->so_options & VAR_16) == 0) {
   VAR_28->so_state &= ~VAR_19;
   FUNC_14(VAR_28);
   return ((struct socket *)0);
  }
 }

 FUNC_4(&VAR_28->so_proto->pr_domain->dom_refs, 1);


 FUNC_9(VAR_24, ((void*)0));

 VAR_28->so_head = VAR_24;
 VAR_28->so_flags |= VAR_6;

 if (VAR_25) {
  FUNC_3(&VAR_24->so_comp, VAR_28, VAR_20);
  VAR_28->so_state |= VAR_17;
 } else {
  FUNC_3(&VAR_24->so_incomp, VAR_28, VAR_20);
  VAR_28->so_state |= VAR_18;
  VAR_24->so_incqlen++;
 }
 VAR_24->so_qlen++;

 FUNC_10(VAR_24);


 FUNC_8(VAR_28);

 if (VAR_25) {
  VAR_28->so_state |= VAR_25;
  FUNC_17(VAR_24);
  FUNC_20((caddr_t)&VAR_24->so_timeo);
 }
 return (VAR_28);
}
