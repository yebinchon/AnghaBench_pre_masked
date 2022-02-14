
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ifnet_stats_per_flow {int ecn_flags; scalar_t__ txretransmitbytes; scalar_t__ rxoutoforderbytes; scalar_t__ ecn_recv_ce; scalar_t__ ecn_recv_ece; scalar_t__ ipv4; scalar_t__ ecn_fallback_reorder; scalar_t__ ecn_fallback_ce; scalar_t__ ecn_fallback_droprxmt; scalar_t__ ecn_fallback_droprst; scalar_t__ ecn_fallback_synloss; scalar_t__ rxmit_drop; scalar_t__ local; } ;
struct ifnet {int if_lim_stat; TYPE_2__* if_ipv6_stat; TYPE_1__* if_ipv4_stat; } ;
struct TYPE_10__ {int rxmit_drop; } ;
struct TYPE_9__ {int rxmit_drop; } ;
struct TYPE_8__ {int tcps_ecn_conn_plnoce; int tcps_ecn_conn_nopl_ce; int tcps_ecn_conn_pl_ce; int tcps_ecn_conn_recv_ece; int tcps_ecn_conn_recv_ce; } ;
struct TYPE_7__ {int ecn_off; int ecn_on; void* timestamp; } ;
struct TYPE_6__ {int ecn_off; int ecn_on; void* timestamp; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 TYPE_5__ VAR_17 ;
 int VAR_18 ;
 TYPE_4__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 void* FUNC_5 () ;
 int FUNC_6 (struct ifnet_stats_per_flow*,int *) ;
 int FUNC_7 (struct ifnet_stats_per_flow*,int *) ;
 TYPE_3__ VAR_27 ;

void FUNC_8(struct ifnet_stats_per_flow *VAR_28,
    struct ifnet *VAR_29)
{
 if (VAR_29 == ((void*)0) || !FUNC_2(VAR_29))
  return;

 FUNC_4(VAR_29);
 if (VAR_28->ecn_flags & VAR_4) {
  if (VAR_28->ecn_flags & VAR_0) {
   FUNC_1(VAR_28->ipv4, VAR_5);
   if (FUNC_0(VAR_28->ecn_flags)) {
    FUNC_1(VAR_28->ipv4,
        VAR_6);
   } else if (VAR_28->ecn_flags & VAR_1) {
    FUNC_1(VAR_28->ipv4,
        VAR_25);
   } else {
    FUNC_1(VAR_28->ipv4,
        VAR_20);
   }
  } else {
   FUNC_1(VAR_28->ipv4, VAR_23);
   if (FUNC_0(VAR_28->ecn_flags)) {
    FUNC_1(VAR_28->ipv4,
        VAR_24);
   } else if (VAR_28->ecn_flags & VAR_1) {
    FUNC_1(VAR_28->ipv4,
        VAR_26);
   } else {
    FUNC_1(VAR_28->ipv4,
        VAR_20);
   }
  }
 } else {
  FUNC_1(VAR_28->ipv4, VAR_18);
 }
 if (FUNC_0(VAR_28->ecn_flags)) {
  if (VAR_28->ecn_flags & VAR_2) {
   VAR_27.tcps_ecn_conn_recv_ce++;
   FUNC_1(VAR_28->ipv4, VAR_10);
  }
  if (VAR_28->ecn_flags & VAR_3) {
   VAR_27.tcps_ecn_conn_recv_ece++;
   FUNC_1(VAR_28->ipv4, VAR_11);
  }
  if (VAR_28->ecn_flags & (VAR_2 | VAR_3)) {
   if (VAR_28->txretransmitbytes > 0 ||
       VAR_28->rxoutoforderbytes > 0) {
    VAR_27.tcps_ecn_conn_pl_ce++;
    FUNC_1(VAR_28->ipv4, VAR_8);
   } else {
    VAR_27.tcps_ecn_conn_nopl_ce++;
    FUNC_1(VAR_28->ipv4, VAR_7);
   }
  } else {
   if (VAR_28->txretransmitbytes > 0 ||
       VAR_28->rxoutoforderbytes > 0) {
    VAR_27.tcps_ecn_conn_plnoce++;
    FUNC_1(VAR_28->ipv4, VAR_9);
   }
  }
 }


 if (VAR_28->local) {
  FUNC_3(VAR_29);
  return;
 }

 if (VAR_28->ipv4) {
  VAR_29->if_ipv4_stat->timestamp = FUNC_5();
  if (FUNC_0(VAR_28->ecn_flags)) {
   FUNC_6(VAR_28, &VAR_29->if_ipv4_stat->ecn_on);
  } else {
   FUNC_6(VAR_28, &VAR_29->if_ipv4_stat->ecn_off);
  }
 } else {
  VAR_29->if_ipv6_stat->timestamp = FUNC_5();
  if (FUNC_0(VAR_28->ecn_flags)) {
   FUNC_6(VAR_28, &VAR_29->if_ipv6_stat->ecn_on);
  } else {
   FUNC_6(VAR_28, &VAR_29->if_ipv6_stat->ecn_off);
  }
 }

 if (VAR_28->rxmit_drop) {
  if (FUNC_0(VAR_28->ecn_flags)) {
   FUNC_1(VAR_28->ipv4, VAR_19.rxmit_drop);
  } else {
   FUNC_1(VAR_28->ipv4, VAR_17.rxmit_drop);
  }
 }
 if (VAR_28->ecn_fallback_synloss)
  FUNC_1(VAR_28->ipv4, VAR_16);
 if (VAR_28->ecn_fallback_droprst)
  FUNC_1(VAR_28->ipv4, VAR_13);
 if (VAR_28->ecn_fallback_droprxmt)
  FUNC_1(VAR_28->ipv4, VAR_14);
 if (VAR_28->ecn_fallback_ce)
  FUNC_1(VAR_28->ipv4, VAR_12);
 if (VAR_28->ecn_fallback_reorder)
  FUNC_1(VAR_28->ipv4, VAR_15);
 if (VAR_28->ecn_recv_ce > 0)
  FUNC_1(VAR_28->ipv4, VAR_21);
 if (VAR_28->ecn_recv_ece > 0)
  FUNC_1(VAR_28->ipv4, VAR_22);

 FUNC_7(VAR_28, &VAR_29->if_lim_stat);
 FUNC_3(VAR_29);
}
