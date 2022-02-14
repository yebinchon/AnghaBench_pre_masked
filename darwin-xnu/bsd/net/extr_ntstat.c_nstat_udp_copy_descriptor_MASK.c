
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_14__ {int sb_cc; int sb_hiwat; } ;
struct socket {int so_flags; int so_traffic_class; TYPE_6__ so_rcv; int * e_uuid; int e_pid; int e_upid; int * so_vuuid; int * last_uuid; int last_pid; int last_upid; } ;
struct TYPE_12__ {int v4; int v6; } ;
struct TYPE_10__ {int v4; int v6; } ;
struct nstat_tucookie {int cached; scalar_t__* pname; int if_index; int ifnet_properties; TYPE_4__ remote; TYPE_2__ local; struct inpcb* inp; } ;
struct inpcb {int inp_vflag; int inp_start_timestamp; struct socket* inp_socket; TYPE_5__* inp_last_outifp; int inp_fport; int inp_faddr; int inp_lport; int inp_laddr; int in6p_faddr; int in6p_laddr; } ;
struct TYPE_11__ {int v4; int v6; } ;
struct TYPE_9__ {int v4; int v6; } ;
struct TYPE_15__ {scalar_t__* pname; int timestamp; int start_timestamp; int activity_bitmap; int traffic_class; int rcvbufused; int rcvbufsize; int * uuid; int * euuid; int pid; int epid; int upid; int eupid; int * vuuid; int ifindex; int ifnet_properties; TYPE_3__ remote; TYPE_1__ local; } ;
typedef TYPE_7__ nstat_udp_descriptor ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;
struct TYPE_13__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (struct inpcb*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int *,int ,int *,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static errno_t
FUNC_10(
 nstat_provider_cookie_t VAR_4,
 void *VAR_5,
 u_int32_t VAR_6)
{
 if (VAR_6 < sizeof(nstat_udp_descriptor))
 {
  return VAR_0;
 }

 if (FUNC_7(VAR_4))
  return VAR_0;

 struct nstat_tucookie *VAR_7 =
     (struct nstat_tucookie *)VAR_4;
 nstat_udp_descriptor *VAR_8 = (nstat_udp_descriptor*)VAR_5;
 struct inpcb *VAR_9 = VAR_7->inp;

 FUNC_0(VAR_8, sizeof(*VAR_8));

 if (VAR_7->cached == 0) {
  if (VAR_9->inp_vflag & VAR_2)
  {
   FUNC_1(&VAR_9->in6p_laddr, VAR_9->inp_lport,
    &VAR_8->local.v6, sizeof(VAR_8->local.v6));
   FUNC_1(&VAR_9->in6p_faddr, VAR_9->inp_fport,
    &VAR_8->remote.v6, sizeof(VAR_8->remote.v6));
  }
  else if (VAR_9->inp_vflag & VAR_1)
  {
   FUNC_6(&VAR_9->inp_laddr, VAR_9->inp_lport,
    &VAR_8->local.v4, sizeof(VAR_8->local.v4));
   FUNC_6(&VAR_9->inp_faddr, VAR_9->inp_fport,
    &VAR_8->remote.v4, sizeof(VAR_8->remote.v4));
  }
  VAR_8->ifnet_properties = FUNC_5(VAR_9);
 }
 else
 {
  if (VAR_9->inp_vflag & VAR_2)
  {
   FUNC_4(&VAR_8->local.v6, &VAR_7->local.v6,
       sizeof(VAR_8->local.v6));
   FUNC_4(&VAR_8->remote.v6, &VAR_7->remote.v6,
       sizeof(VAR_8->remote.v6));
  }
  else if (VAR_9->inp_vflag & VAR_1)
  {
   FUNC_4(&VAR_8->local.v4, &VAR_7->local.v4,
       sizeof(VAR_8->local.v4));
   FUNC_4(&VAR_8->remote.v4, &VAR_7->remote.v4,
       sizeof(VAR_8->remote.v4));
  }
  VAR_8->ifnet_properties = VAR_7->ifnet_properties;
 }

 if (VAR_9->inp_last_outifp)
  VAR_8->ifindex = VAR_9->inp_last_outifp->if_index;
 else
  VAR_8->ifindex = VAR_7->if_index;

 struct socket *VAR_10 = VAR_9->inp_socket;
 if (VAR_10)
 {


  VAR_8->upid = VAR_10->last_upid;
  VAR_8->pid = VAR_10->last_pid;
  FUNC_8(VAR_8->pid, VAR_8->pname, sizeof(VAR_8->pname));
  if (VAR_8->pname[0] == 0)
  {
   FUNC_9(VAR_8->pname, VAR_7->pname,
       sizeof(VAR_8->pname));
  }
  else
  {
   VAR_8->pname[sizeof(VAR_8->pname) - 1] = 0;
   FUNC_9(VAR_7->pname, VAR_8->pname,
       sizeof(VAR_7->pname));
  }
  FUNC_4(VAR_8->uuid, VAR_10->last_uuid, sizeof(VAR_10->last_uuid));
  FUNC_4(VAR_8->vuuid, VAR_10->so_vuuid, sizeof(VAR_10->so_vuuid));
  if (VAR_10->so_flags & VAR_3) {
   VAR_8->eupid = VAR_10->e_upid;
   VAR_8->epid = VAR_10->e_pid;
   FUNC_4(VAR_8->euuid, VAR_10->e_uuid, sizeof(VAR_10->e_uuid));
  } else {
   VAR_8->eupid = VAR_8->upid;
   VAR_8->epid = VAR_8->pid;
   FUNC_4(VAR_8->euuid, VAR_8->uuid, sizeof(VAR_8->uuid));
  }
  VAR_8->rcvbufsize = VAR_10->so_rcv.sb_hiwat;
  VAR_8->rcvbufused = VAR_10->so_rcv.sb_cc;
  VAR_8->traffic_class = VAR_10->so_traffic_class;
  FUNC_2(VAR_9, &VAR_8->activity_bitmap);
  VAR_8->start_timestamp = VAR_9->inp_start_timestamp;
  VAR_8->timestamp = FUNC_3();
 }

 return 0;
}
