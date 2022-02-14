
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef void* uint64_t ;
typedef int u_int64_t ;
struct unpcb {struct tcpcb* unp_conn; TYPE_11__* unp_addr; } ;
struct un_sockinfo {int unsi_caddr; int unsi_addr; void* unsi_conn_so; void* unsi_conn_pcb; } ;
struct tcpcb {TYPE_11__* unp_addr; struct tcpcb* unp_socket; int t_flags; int t_maxseg; int * t_timer; int t_state; } ;
struct tcp_sockinfo {int tcpsi_tp; int tcpsi_flags; int tcpsi_mss; int * tcpsi_timer; int tcpsi_state; } ;
struct kern_event_info {int kesi_subclass_filter; int kesi_class_filter; int kesi_vendor_code_filter; } ;
struct ndrv_info {int ndrvsi_if_name; int ndrvsi_if_unit; int ndrvsi_if_family; } ;
struct TYPE_21__ {int in6_hops; int in6_ifindex; int in6_cksum; int in6_hlim; } ;
struct TYPE_19__ {int in4_tos; } ;
struct TYPE_17__ {int ina_6; } ;
struct TYPE_15__ {int ina_6; } ;
struct in_sockinfo {TYPE_8__ insi_v6; TYPE_6__ insi_v4; TYPE_4__ insi_laddr; TYPE_2__ insi_faddr; int insi_ip_ttl; int insi_vflag; int insi_flags; int insi_gencnt; int insi_lport; int insi_fport; } ;
struct TYPE_12__ {struct kern_event_info pri_kern_event; struct ndrv_info pri_ndrv; struct un_sockinfo pri_un; struct tcp_sockinfo pri_tcp; struct in_sockinfo pri_in; } ;
struct socket_info {int soi_kind; TYPE_10__ soi_proto; } ;
struct socket {int * so_pcb; TYPE_1__* so_proto; } ;
struct ndrv_cb {struct ifnet* nd_if; } ;
struct kern_event_pcb {int evp_subclass_filter; int evp_class_filter; int evp_vendor_code_filter; } ;
struct TYPE_22__ {int inp6_hops; int inp6_cksum; } ;
struct TYPE_20__ {int inp4_ip_tos; } ;
struct TYPE_18__ {int inp6_local; } ;
struct TYPE_16__ {int inp6_foreign; } ;
struct inpcb {int * inp_ppcb; TYPE_9__ inp_depend6; TYPE_7__ inp_depend4; TYPE_5__ inp_dependladdr; TYPE_3__ inp_dependfaddr; int inp_ip_ttl; int inp_vflag; int inp_flags; int inp_gencnt; int inp_lport; int inp_fport; } ;
struct ifnet {int if_name; int if_unit; int if_family; } ;
typedef int errno_t ;
struct TYPE_14__ {int * pr_domain; } ;
struct TYPE_13__ {size_t sun_len; } ;


 int VAR_0 ;
 short VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct socket*) ;
 size_t VAR_8 ;
 short FUNC_1 (struct socket*) ;
 short VAR_9 ;
 short FUNC_2 (struct socket*) ;
 short VAR_10 ;
 short VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_3 (struct tcpcb*) ;
 int FUNC_4 (TYPE_11__*,int *,size_t) ;
 int FUNC_5 (struct socket*,struct socket_info*) ;
 int FUNC_6 (struct socket*,struct socket_info*) ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*,int ) ;
 int FUNC_9 (int ,int ,int ) ;

errno_t
FUNC_10(struct socket *VAR_20, struct socket_info *VAR_21)
{
 errno_t VAR_22 = 0;
 int VAR_23;
 short VAR_24;
 short VAR_25;

 FUNC_7(VAR_20, 0);

 VAR_21->soi_kind = VAR_2;

 FUNC_5(VAR_20, VAR_21);

 if (VAR_20->so_pcb == ((void*)0) || VAR_20->so_proto == 0 ||
     VAR_20->so_proto->pr_domain == ((void*)0))
  goto out;





 VAR_23 = FUNC_0(VAR_20);
 VAR_24 = FUNC_2(VAR_20);
 VAR_25 = FUNC_1(VAR_20);
 switch (VAR_23) {
 case 134:
 case 133: {
  struct in_sockinfo *VAR_26 = &VAR_21->soi_proto.pri_in;
  struct inpcb *VAR_27 = (struct inpcb *)VAR_20->so_pcb;

  VAR_21->soi_kind = VAR_3;

  VAR_26->insi_fport = VAR_27->inp_fport;
  VAR_26->insi_lport = VAR_27->inp_lport;
  VAR_26->insi_gencnt = VAR_27->inp_gencnt;
  VAR_26->insi_flags = VAR_27->inp_flags;
  VAR_26->insi_vflag = VAR_27->inp_vflag;
  VAR_26->insi_ip_ttl = VAR_27->inp_ip_ttl;
  VAR_26->insi_faddr.ina_6 = VAR_27->inp_dependfaddr.inp6_foreign;
  VAR_26->insi_laddr.ina_6 = VAR_27->inp_dependladdr.inp6_local;
  VAR_26->insi_v4.in4_tos = VAR_27->inp_depend4.inp4_ip_tos;
  VAR_26->insi_v6.in6_hlim = 0;
  VAR_26->insi_v6.in6_cksum = VAR_27->inp_depend6.inp6_cksum;
  VAR_26->insi_v6.in6_ifindex = 0;
  VAR_26->insi_v6.in6_hops = VAR_27->inp_depend6.inp6_hops;

  if (VAR_24 == VAR_9 && (VAR_25 == 0 ||
      VAR_25 == VAR_1) && VAR_27->inp_ppcb != ((void*)0)) {
   struct tcp_sockinfo *VAR_28 = &VAR_21->soi_proto.pri_tcp;
   struct tcpcb *VAR_29 = (struct tcpcb *)VAR_27->inp_ppcb;

   VAR_21->soi_kind = VAR_6;

   VAR_28->tcpsi_state = VAR_29->t_state;
   VAR_28->tcpsi_timer[VAR_19] =
       VAR_29->t_timer[VAR_15];
   VAR_28->tcpsi_timer[VAR_18] =
       VAR_29->t_timer[VAR_14];
   VAR_28->tcpsi_timer[VAR_17] =
       VAR_29->t_timer[VAR_13];
   VAR_28->tcpsi_timer[VAR_16] =
       VAR_29->t_timer[VAR_12];
   VAR_28->tcpsi_mss = VAR_29->t_maxseg;
   VAR_28->tcpsi_flags = VAR_29->t_flags;
   VAR_28->tcpsi_tp =
       (u_int64_t)FUNC_3(VAR_29);
  }
  break;
 }
 case 128: {
  struct unpcb *VAR_30 = (struct unpcb *)VAR_20->so_pcb;
  struct un_sockinfo *VAR_31 = &VAR_21->soi_proto.pri_un;

  VAR_21->soi_kind = VAR_7;

  VAR_31->unsi_conn_pcb =
      (uint64_t)FUNC_3(VAR_30->unp_conn);
  if (VAR_30->unp_conn)
   VAR_31->unsi_conn_so = (uint64_t)
       FUNC_3(VAR_30->unp_conn->unp_socket);

  if (VAR_30->unp_addr) {
   size_t VAR_32 = VAR_30->unp_addr->sun_len;

   if (VAR_32 > VAR_8)
    VAR_32 = VAR_8;
   FUNC_4(VAR_30->unp_addr, &VAR_31->unsi_addr, VAR_32);
  }
  if (VAR_30->unp_conn && VAR_30->unp_conn->unp_addr) {
   size_t VAR_33 = VAR_30->unp_conn->unp_addr->sun_len;

   if (VAR_33 > VAR_8)
    VAR_33 = VAR_8;
   FUNC_4(VAR_30->unp_conn->unp_addr, &VAR_31->unsi_caddr,
       VAR_33);
  }
  break;
 }
 case 132: {
  struct ndrv_cb *VAR_34 = (struct ndrv_cb *)VAR_20->so_pcb;
  struct ndrv_info *VAR_35 = &VAR_21->soi_proto.pri_ndrv;

  VAR_21->soi_kind = VAR_5;


  if (VAR_34->nd_if != 0) {
   struct ifnet *VAR_36 = VAR_34->nd_if;

   VAR_35->ndrvsi_if_family = VAR_36->if_family;
   VAR_35->ndrvsi_if_unit = VAR_36->if_unit;
   FUNC_9(VAR_35->ndrvsi_if_name, VAR_36->if_name, VAR_0);
  }
  break;
 }
 case 129:
  if (FUNC_1(VAR_20) == VAR_11) {
   struct kern_event_pcb *VAR_37 =
       (struct kern_event_pcb *)VAR_20->so_pcb;
   struct kern_event_info *VAR_38 =
       &VAR_21->soi_proto.pri_kern_event;

   VAR_21->soi_kind = VAR_4;

   VAR_38->kesi_vendor_code_filter =
       VAR_37->evp_vendor_code_filter;
   VAR_38->kesi_class_filter = VAR_37->evp_class_filter;
   VAR_38->kesi_subclass_filter = VAR_37->evp_subclass_filter;
  } else if (FUNC_1(VAR_20) == VAR_10) {
   FUNC_6(VAR_20, VAR_21);
  }
  break;

 case 130:
 case 131:
 default:
  break;
 }
out:
 FUNC_8(VAR_20, 0);

 return (VAR_22);
}
