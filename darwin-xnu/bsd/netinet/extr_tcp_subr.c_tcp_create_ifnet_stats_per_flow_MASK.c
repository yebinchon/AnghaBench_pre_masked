
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rxmitpkts; int rxoutoforderbytes; int txretransmitbytes; } ;
struct tcpcb {int t_flags; TYPE_2__* t_bwmeas; int t_rttvar; int t_rttupdated; int t_srtt; int t_dsack_recvd; int t_dsack_sent; int t_reordered_pkts; int t_sack_recovery_episode; int t_pawsdrop; int t_rcvoopack; TYPE_1__ t_stat; int ecn_flags; struct inpcb* t_inpcb; } ;
struct socket {scalar_t__ so_error; TYPE_3__* so_tc_stats; } ;
struct inpcb {int inp_vflag; TYPE_4__* inp_stat; struct socket* inp_socket; } ;
struct ifnet_stats_per_flow {int ipv4; int local; int connreset; int conntimeout; scalar_t__ bw_sndbw_max; scalar_t__ bw_rcvbw_max; int rxpackets; int txpackets; int bk_txpackets; int rttmin; int rttvar; int rttupdated; int srtt; int dsack_recvd; int dsack_sent; int reordered_pkts; int sack_recovery_episodes; int pawsdrop; int rcvoopack; int rxmitpkts; int rxoutoforderbytes; int txretransmitbytes; int ecn_flags; } ;
struct TYPE_8__ {int rxpackets; int txpackets; } ;
struct TYPE_7__ {int txpackets; } ;
struct TYPE_6__ {scalar_t__ bw_sndbw_max; scalar_t__ bw_rcvbw_max; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet_stats_per_flow*,int) ;
 int FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static inline void
FUNC_2(struct tcpcb *VAR_5,
    struct ifnet_stats_per_flow *VAR_6)
{
 struct inpcb *VAR_7;
 struct socket *VAR_8;
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return;

 FUNC_0(VAR_6, sizeof(*VAR_6));
 VAR_7 = VAR_5->t_inpcb;
 VAR_8 = VAR_7->inp_socket;

 VAR_6->ipv4 = (VAR_7->inp_vflag & VAR_2) ? 0 : 1;
 VAR_6->local = (VAR_5->t_flags & VAR_4) ? 1 : 0;
 VAR_6->connreset = (VAR_8->so_error == VAR_0) ? 1 : 0;
 VAR_6->conntimeout = (VAR_8->so_error == VAR_1) ? 1 : 0;
 VAR_6->ecn_flags = VAR_5->ecn_flags;
 VAR_6->txretransmitbytes = VAR_5->t_stat.txretransmitbytes;
 VAR_6->rxoutoforderbytes = VAR_5->t_stat.rxoutoforderbytes;
 VAR_6->rxmitpkts = VAR_5->t_stat.rxmitpkts;
 VAR_6->rcvoopack = VAR_5->t_rcvoopack;
 VAR_6->pawsdrop = VAR_5->t_pawsdrop;
 VAR_6->sack_recovery_episodes = VAR_5->t_sack_recovery_episode;
 VAR_6->reordered_pkts = VAR_5->t_reordered_pkts;
 VAR_6->dsack_sent = VAR_5->t_dsack_sent;
 VAR_6->dsack_recvd = VAR_5->t_dsack_recvd;
 VAR_6->srtt = VAR_5->t_srtt;
 VAR_6->rttupdated = VAR_5->t_rttupdated;
 VAR_6->rttvar = VAR_5->t_rttvar;
 VAR_6->rttmin = FUNC_1(VAR_5);
 if (VAR_5->t_bwmeas != ((void*)0) && VAR_5->t_bwmeas->bw_sndbw_max > 0) {
  VAR_6->bw_sndbw_max = VAR_5->t_bwmeas->bw_sndbw_max;
 } else {
  VAR_6->bw_sndbw_max = 0;
 }
 if (VAR_5->t_bwmeas!= ((void*)0) && VAR_5->t_bwmeas->bw_rcvbw_max > 0) {
  VAR_6->bw_rcvbw_max = VAR_5->t_bwmeas->bw_rcvbw_max;
 } else {
  VAR_6->bw_rcvbw_max = 0;
 }
 VAR_6->bk_txpackets = VAR_8->so_tc_stats[VAR_3].txpackets;
 VAR_6->txpackets = VAR_7->inp_stat->txpackets;
 VAR_6->rxpackets = VAR_7->inp_stat->rxpackets;
}
