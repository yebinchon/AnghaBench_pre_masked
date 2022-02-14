
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {struct socket* sb_so; } ;
struct TYPE_6__ {struct socket* sb_so; int sb_flags; } ;
struct socket {int so_type; scalar_t__ so_usecount; int so_flags; int so_background_thread; int so_options; int so_evlist; int so_state; scalar_t__ next_unlock_lr; scalar_t__ next_lock_lr; TYPE_2__ so_snd; TYPE_1__ so_rcv; struct protosw* so_proto; int so_cred; int e_uuid; void* e_pid; void* e_upid; int so_vuuid; int last_uuid; void* last_pid; void* last_upid; int so_comp; int so_incomp; } ;
struct protosw {int pr_type; TYPE_4__* pr_domain; TYPE_3__* pr_usrreqs; } ;
struct proc {int dummy; } ;
struct TYPE_10__ {int nas_socket_domain_other_total; int nas_socket_domain_multipath_total; int nas_socket_domain_system_total; int nas_socket_inet6_dgram_total; int nas_socket_inet6_stream_total; int nas_socket_domain_inet6_total; int nas_socket_domain_key_total; int nas_socket_domain_ndrv_total; int nas_socket_domain_route_total; int nas_socket_inet_dgram_total; int nas_socket_inet_stream_total; int nas_socket_domain_inet_total; int nas_socket_domain_local_total; } ;
struct TYPE_9__ {int dom_refs; } ;
struct TYPE_8__ {int (* pru_attach ) (struct socket*,int,struct proc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct proc* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (int ,struct socket*) ;
 TYPE_5__ VAR_16 ;
 int * FUNC_8 (int) ;
 struct protosw* FUNC_9 (int,int,int) ;
 int * FUNC_10 (int,int) ;
 struct protosw* FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct proc*,int ,int) ;
 void* FUNC_14 (struct proc*) ;
 int FUNC_15 (int ,int) ;
 void* FUNC_16 (struct proc*) ;
 int FUNC_17 (struct socket*) ;
 int FUNC_18 (struct socket*) ;
 struct socket* FUNC_19 (int,int,int) ;
 int FUNC_20 (struct socket*,int ) ;
 int FUNC_21 (struct socket*,int) ;
 int FUNC_22 (struct socket*,int,struct proc*) ;
 int FUNC_23 (int ,int *) ;

int
FUNC_24(int VAR_17, struct socket **VAR_18, int VAR_19, int VAR_20,
    struct proc *VAR_21, uint32_t VAR_22, struct proc *VAR_23)
{
 struct protosw *VAR_24;
 struct socket *VAR_25;
 int VAR_26 = 0;





 FUNC_2(VAR_18 != ((void*)0));
 *VAR_18 = ((void*)0);

 if (VAR_20 != 0)
  VAR_24 = FUNC_9(VAR_17, VAR_20, VAR_19);
 else
  VAR_24 = FUNC_11(VAR_17, VAR_19);

 if (VAR_24 == ((void*)0) || VAR_24->pr_usrreqs->pru_attach == ((void*)0)) {
  if (FUNC_8(VAR_17) == ((void*)0))
   return (VAR_0);
  if (VAR_20 != 0) {
   if (FUNC_10(VAR_17, VAR_20) != ((void*)0))
    return (VAR_3);
  }
  return (VAR_2);
 }
 if (VAR_24->pr_type != VAR_19)
  return (VAR_3);
 VAR_25 = FUNC_19(1, VAR_17, VAR_19);
 if (VAR_25 == ((void*)0))
  return (VAR_1);

 switch (VAR_17) {
  case 132:
   FUNC_0(VAR_16.nas_socket_domain_local_total);
   break;
  case 135:
   FUNC_0(VAR_16.nas_socket_domain_inet_total);
   if (VAR_19 == VAR_7) {
    FUNC_0(VAR_16.nas_socket_inet_stream_total);
   } else {
    FUNC_0(VAR_16.nas_socket_inet_dgram_total);
   }
   break;
  case 129:
   FUNC_0(VAR_16.nas_socket_domain_route_total);
   break;
  case 130:
   FUNC_0(VAR_16.nas_socket_domain_ndrv_total);
   break;
  case 133:
   FUNC_0(VAR_16.nas_socket_domain_key_total);
   break;
  case 134:
   FUNC_0(VAR_16.nas_socket_domain_inet6_total);
   if (VAR_19 == VAR_7) {
    FUNC_0(VAR_16.nas_socket_inet6_stream_total);
   } else {
    FUNC_0(VAR_16.nas_socket_inet6_dgram_total);
   }
   break;
  case 128:
   FUNC_0(VAR_16.nas_socket_domain_system_total);
   break;
  case 131:
   FUNC_0(VAR_16.nas_socket_domain_multipath_total);
   break;
  default:
   FUNC_0(VAR_16.nas_socket_domain_other_total);
   break;
 }

 if (VAR_22 & VAR_6)
  VAR_25->so_state |= VAR_11;

 FUNC_1(&VAR_25->so_incomp);
 FUNC_1(&VAR_25->so_comp);
 VAR_25->so_type = VAR_19;
 VAR_25->last_upid = FUNC_16(VAR_21);
 VAR_25->last_pid = FUNC_14(VAR_21);
 FUNC_13(VAR_21, VAR_25->last_uuid, sizeof (VAR_25->last_uuid));
 FUNC_15(VAR_25->so_vuuid, sizeof(VAR_25->so_vuuid));

 if (VAR_23 != VAR_4 && VAR_23 != VAR_21) {
  VAR_25->e_upid = FUNC_16(VAR_23);
  VAR_25->e_pid = FUNC_14(VAR_23);
  FUNC_13(VAR_23, VAR_25->e_uuid, sizeof (VAR_25->e_uuid));
  VAR_25->so_flags |= VAR_8;
 }

 VAR_25->so_cred = FUNC_6(VAR_21);
 if (!FUNC_23(FUNC_5(), ((void*)0)))
  VAR_25->so_state |= VAR_13;

 VAR_25->so_proto = VAR_24;
 VAR_25->so_rcv.sb_flags |= VAR_5;
 VAR_25->so_rcv.sb_so = VAR_25->so_snd.sb_so = VAR_25;
 VAR_25->next_lock_lr = 0;
 VAR_25->next_unlock_lr = 0;
 VAR_25->so_usecount++;

 VAR_26 = (*VAR_24->pr_usrreqs->pru_attach)(VAR_25, VAR_20, VAR_21);
 if (VAR_26 != 0) {





  VAR_25->so_state |= VAR_12;
  FUNC_2(VAR_25->so_usecount > 0);
  VAR_25->so_usecount--;
  FUNC_21(VAR_25, 1);
  return (VAR_26);
 }

 FUNC_3(&VAR_24->pr_domain->dom_refs, 1);
 FUNC_1(&VAR_25->so_evlist);


 FUNC_17(VAR_25);




 FUNC_18(VAR_25);





 if (FUNC_12(FUNC_4(),
     VAR_14)) {
  FUNC_20(VAR_25, VAR_15);
  VAR_25->so_background_thread = FUNC_4();
 }

 switch (VAR_17) {




 case 132:
 case 128:
 case 131:
  VAR_25->so_flags |= VAR_9;
  break;
 default:
  break;
 }
 *VAR_18 = VAR_25;

 return (0);
}
