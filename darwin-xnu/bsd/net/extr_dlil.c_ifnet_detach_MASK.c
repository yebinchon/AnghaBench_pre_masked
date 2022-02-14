
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;


struct nd_ifinfo {int cga_initialized; } ;
struct ifnet {int dummy; } ;
struct dlil_ifnet {int dl_if_detach; } ;
typedef TYPE_3__* ifnet_t ;
typedef int errno_t ;
struct TYPE_22__ {struct ifnet* ifp; } ;
struct TYPE_24__ {int * tqe_prev; int * tqe_next; } ;
struct TYPE_23__ {int * tqe_prev; int * tqe_next; } ;
struct TYPE_25__ {int if_refflags; int if_eflags; size_t if_index; int * if_dt_tcall; scalar_t__ if_data_threshold; int if_cached_route_lock; scalar_t__ if_fwd_cacheok; scalar_t__ if_agentcount; int * if_agentids; int * if_link_status; TYPE_18__* if_ipv6_stat; TYPE_18__* if_ipv4_stat; TYPE_18__* if_udp_stat; TYPE_18__* if_tcp_stat; TYPE_18__ if_interface_state; TYPE_18__ if_delegated; TYPE_18__ if_log; TYPE_2__ if_ordered_link; TYPE_1__ if_link; int if_flowhash; int if_ref_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
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
 struct nd_ifinfo* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_18__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int ,int ,int *,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_18 ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 char* FUNC_12 (TYPE_3__*) ;
 TYPE_3__** VAR_19 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ) ;
 int VAR_20 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int ,int ) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 TYPE_3__* VAR_21 ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (char*,char*) ;
 int * VAR_22 ;
 int FUNC_28 (int *) ;

errno_t
FUNC_29(ifnet_t VAR_23)
{
 struct ifnet *VAR_24;
 struct nd_ifinfo *VAR_25 = ((void*)0);

 if (VAR_23 == ((void*)0))
  return (VAR_0);

 VAR_25 = FUNC_1(VAR_23);
 if (((void*)0) != VAR_25)
  VAR_25->cga_initialized = VAR_2;

 FUNC_23(VAR_22);
 FUNC_16();
 FUNC_18(VAR_23);







 (void) FUNC_21(VAR_23, 0, ~0);

 FUNC_24(&VAR_23->if_ref_lock);
 if (!(VAR_23->if_refflags & VAR_10)) {
  FUNC_25(&VAR_23->if_ref_lock);
  FUNC_17(VAR_23);
  FUNC_15();
  FUNC_25(VAR_22);
  return (VAR_0);
 } else if (VAR_23->if_refflags & VAR_11) {

  FUNC_25(&VAR_23->if_ref_lock);
  FUNC_17(VAR_23);
  FUNC_15();
  FUNC_25(VAR_22);
  return (VAR_1);
 }
 FUNC_3(!(VAR_23->if_refflags & VAR_12));

 VAR_23->if_refflags &= ~VAR_10;
 VAR_23->if_refflags |= VAR_11;
 FUNC_25(&VAR_23->if_ref_lock);

 if (VAR_17) {
  FUNC_27("%s: detaching\n", FUNC_12(VAR_23));
 }


 if (VAR_23->if_eflags & VAR_8) {
  FUNC_14(VAR_23->if_flowhash);
 }


 VAR_23->if_eflags &= ~VAR_4;
 VAR_23->if_eflags &= ~VAR_5;


 VAR_23->if_eflags &= ~VAR_3;





 FUNC_3(VAR_19[VAR_23->if_index] == VAR_23);
 FUNC_2(&VAR_20, VAR_23, VAR_18);
 VAR_23->if_link.tqe_next = ((void*)0);
 VAR_23->if_link.tqe_prev = ((void*)0);
 if (VAR_23->if_ordered_link.tqe_next != ((void*)0) ||
  VAR_23->if_ordered_link.tqe_prev != ((void*)0)) {
  FUNC_20(VAR_23);
 }
 VAR_19[VAR_23->if_index] = ((void*)0);


 VAR_23->if_eflags &= ~(VAR_6 | VAR_7);


 FUNC_6(&((struct dlil_ifnet *)VAR_23)->dl_if_detach);


 FUNC_5(&VAR_23->if_log, sizeof (VAR_23->if_log));


 VAR_24 = VAR_23->if_delegated.ifp;
 FUNC_5(&VAR_23->if_delegated, sizeof (VAR_23->if_delegated));


 FUNC_5(&VAR_23->if_interface_state, sizeof(VAR_23->if_interface_state));

 FUNC_17(VAR_23);
 FUNC_15();
 FUNC_25(VAR_22);



 if (VAR_24 != ((void*)0))
  FUNC_19(VAR_24);


 if (VAR_23 != VAR_21)
  FUNC_11(VAR_23, VAR_9, 0);


 if (VAR_23->if_tcp_stat != ((void*)0))
  FUNC_5(VAR_23->if_tcp_stat, sizeof(*VAR_23->if_tcp_stat));


 if (VAR_23->if_udp_stat != ((void*)0))
  FUNC_5(VAR_23->if_udp_stat, sizeof(*VAR_23->if_udp_stat));


 if (VAR_23->if_ipv4_stat != ((void*)0))
  FUNC_5(VAR_23->if_ipv4_stat, sizeof(*VAR_23->if_ipv4_stat));


 if (VAR_23->if_ipv6_stat != ((void*)0))
  FUNC_5(VAR_23->if_ipv6_stat, sizeof(*VAR_23->if_ipv6_stat));


 if (VAR_23->if_link_status != ((void*)0)) {
  FUNC_0(VAR_23->if_link_status, VAR_16);
  VAR_23->if_link_status = ((void*)0);
 }


 if (VAR_23->if_agentids != ((void*)0)) {
  FUNC_0(VAR_23->if_agentids, VAR_15);
  VAR_23->if_agentids = ((void*)0);
 }
 VAR_23->if_agentcount = 0;



 FUNC_4(VAR_23);


 FUNC_10(VAR_23);


 FUNC_23(&VAR_23->if_cached_route_lock);
 VAR_23->if_fwd_cacheok = 0;
 FUNC_25(&VAR_23->if_cached_route_lock);


 VAR_23->if_data_threshold = 0;
 FUNC_3(VAR_23->if_dt_tcall != ((void*)0));
 (void) FUNC_28(VAR_23->if_dt_tcall);
 FUNC_9(VAR_23, VAR_14, VAR_13, ((void*)0), 0);


 FUNC_7();
 FUNC_13(VAR_23);
 FUNC_8();

 return (0);
}
