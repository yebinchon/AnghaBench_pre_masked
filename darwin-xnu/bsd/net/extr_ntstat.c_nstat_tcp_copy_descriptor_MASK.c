
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcpcb {int snd_cwnd; int snd_wnd; scalar_t__ snd_una; scalar_t__ snd_max; int t_state; } ;
struct TYPE_13__ {int sb_cc; int sb_hiwat; } ;
struct TYPE_12__ {int sb_cc; int sb_hiwat; } ;
struct socket {int so_flags1; int so_flags; TYPE_5__ so_rcv; TYPE_4__ so_snd; int e_uuid; int e_pid; int e_upid; int so_vuuid; int last_uuid; int so_traffic_class; int last_pid; int last_upid; } ;
struct nstat_tucookie {scalar_t__* pname; struct inpcb* inp; } ;
struct inpcb {int inp_vflag; int inp_start_timestamp; struct socket* inp_socket; TYPE_3__* inp_last_outifp; int inp_fport; int inp_faddr; int inp_lport; int inp_laddr; int in6p_faddr; int in6p_laddr; } ;
struct TYPE_10__ {int v4; int v6; } ;
struct TYPE_9__ {int v4; int v6; } ;
struct TYPE_14__ {scalar_t__* cc_algo; scalar_t__* pname; int timestamp; int start_timestamp; int activity_bitmap; int ifnet_properties; int connstatus; int rcvbufused; int rcvbufsize; int sndbufused; int sndbufsize; int uuid; int euuid; int pid; int epid; int upid; int eupid; int vuuid; int traffic_mgt_flags; int traffic_class; int txcwindow; int txwindow; scalar_t__ txunacked; int ifindex; int state; TYPE_2__ remote; TYPE_1__ local; } ;
typedef TYPE_6__ nstat_tcp_descriptor ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;
struct TYPE_15__ {scalar_t__* name; } ;
struct TYPE_11__ {int if_index; } ;


 TYPE_8__* FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (struct inpcb*,int *) ;
 struct tcpcb* FUNC_4 (struct inpcb*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct inpcb*) ;
 int FUNC_8 (int *,int ,int *,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__*,int) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_12 (struct tcpcb*,int *) ;

__attribute__((used)) static errno_t
FUNC_13(
 nstat_provider_cookie_t VAR_8,
 void *VAR_9,
 u_int32_t VAR_10)
{
 if (VAR_10 < sizeof(nstat_tcp_descriptor))
 {
  return VAR_0;
 }

 if (FUNC_9(VAR_8))
  return VAR_0;

 nstat_tcp_descriptor *VAR_11 = (nstat_tcp_descriptor*)VAR_9;
 struct nstat_tucookie *VAR_12 =
     (struct nstat_tucookie *)VAR_8;
 struct inpcb *VAR_13 = VAR_12->inp;
 struct tcpcb *VAR_14 = FUNC_4(VAR_13);
 FUNC_1(VAR_11, sizeof(*VAR_11));

 if (VAR_13->inp_vflag & VAR_2)
 {
  FUNC_2(&VAR_13->in6p_laddr, VAR_13->inp_lport,
   &VAR_11->local.v6, sizeof(VAR_11->local));
  FUNC_2(&VAR_13->in6p_faddr, VAR_13->inp_fport,
   &VAR_11->remote.v6, sizeof(VAR_11->remote));
 }
 else if (VAR_13->inp_vflag & VAR_1)
 {
  FUNC_8(&VAR_13->inp_laddr, VAR_13->inp_lport,
   &VAR_11->local.v4, sizeof(VAR_11->local));
  FUNC_8(&VAR_13->inp_faddr, VAR_13->inp_fport,
   &VAR_11->remote.v4, sizeof(VAR_11->remote));
 }

 VAR_11->state = FUNC_4(VAR_13)->t_state;
 VAR_11->ifindex = (VAR_13->inp_last_outifp == ((void*)0)) ? 0 :
     VAR_13->inp_last_outifp->if_index;


 VAR_11->txunacked = VAR_14->snd_max - VAR_14->snd_una;
 VAR_11->txwindow = VAR_14->snd_wnd;
 VAR_11->txcwindow = VAR_14->snd_cwnd;

 if (FUNC_0(VAR_14)->name != ((void*)0)) {
  FUNC_11(VAR_11->cc_algo, FUNC_0(VAR_14)->name,
      sizeof(VAR_11->cc_algo));
 }

 struct socket *VAR_15 = VAR_13->inp_socket;
 if (VAR_15)
 {


  VAR_11->upid = VAR_15->last_upid;
  VAR_11->pid = VAR_15->last_pid;
  VAR_11->traffic_class = VAR_15->so_traffic_class;
  if ((VAR_15->so_flags1 & VAR_3))
   VAR_11->traffic_mgt_flags |= VAR_6;
  if ((VAR_15->so_flags1 & VAR_4))
   VAR_11->traffic_mgt_flags |= VAR_7;
  FUNC_10(VAR_11->pid, VAR_11->pname, sizeof(VAR_11->pname));
  if (VAR_11->pname[0] == 0)
  {
   FUNC_11(VAR_11->pname, VAR_12->pname,
       sizeof(VAR_11->pname));
  }
  else
  {
   VAR_11->pname[sizeof(VAR_11->pname) - 1] = 0;
   FUNC_11(VAR_12->pname, VAR_11->pname,
       sizeof(VAR_12->pname));
  }
  FUNC_6(VAR_11->uuid, VAR_15->last_uuid, sizeof(VAR_15->last_uuid));
  FUNC_6(VAR_11->vuuid, VAR_15->so_vuuid, sizeof(VAR_15->so_vuuid));
  if (VAR_15->so_flags & VAR_5) {
   VAR_11->eupid = VAR_15->e_upid;
   VAR_11->epid = VAR_15->e_pid;
   FUNC_6(VAR_11->euuid, VAR_15->e_uuid, sizeof(VAR_15->e_uuid));
  } else {
   VAR_11->eupid = VAR_11->upid;
   VAR_11->epid = VAR_11->pid;
   FUNC_6(VAR_11->euuid, VAR_11->uuid, sizeof(VAR_11->uuid));
  }
  VAR_11->sndbufsize = VAR_15->so_snd.sb_hiwat;
  VAR_11->sndbufused = VAR_15->so_snd.sb_cc;
  VAR_11->rcvbufsize = VAR_15->so_rcv.sb_hiwat;
  VAR_11->rcvbufused = VAR_15->so_rcv.sb_cc;
 }

 FUNC_12(VAR_14, &VAR_11->connstatus);
 VAR_11->ifnet_properties = FUNC_7(VAR_13);
 FUNC_3(VAR_13, &VAR_11->activity_bitmap);
 VAR_11->start_timestamp = VAR_13->inp_start_timestamp;
 VAR_11->timestamp = FUNC_5();
 return 0;
}
