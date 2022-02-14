
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rxoutoforderbytes; int rxmitpkts; int txretransmitbytes; } ;
struct tcpcb {scalar_t__ t_state; scalar_t__ t_rxtshift; int t_flagsext; scalar_t__* t_timer; int t_srtt; int t_rttvar; int t_tfo_stats; TYPE_4__ t_stat; int t_rttcur; int rcv_wnd; int snd_wnd; int snd_cwnd; int snd_ssthresh; int t_maxseg; int t_rxtcur; int rcv_scale; int snd_scale; struct inpcb* t_inpcb; } ;
struct tcp_connection_info {scalar_t__ tcpi_state; int tcpi_srtt; int tcpi_rttvar; int tcpi_tfo_syn_data_rcv; int tcpi_tfo_cookie_req_rcv; int tcpi_tfo_cookie_sent; int tcpi_tfo_cookie_invalid; int tcpi_tfo_cookie_req; int tcpi_tfo_cookie_rcv; int tcpi_tfo_syn_data_sent; int tcpi_tfo_syn_data_acked; int tcpi_tfo_syn_loss; int tcpi_tfo_cookie_wrong; int tcpi_tfo_no_cookie_rcv; int tcpi_tfo_heuristics_disable; int tcpi_tfo_send_blackhole; int tcpi_tfo_recv_blackhole; int tcpi_tfo_onebyte_proxy; int tcpi_rxoutoforderbytes; int tcpi_rxbytes; int tcpi_rxpackets; int tcpi_txretransmitpackets; int tcpi_txretransmitbytes; int tcpi_txbytes; int tcpi_txpackets; int tcpi_rttcur; int tcpi_rcv_wnd; int tcpi_snd_sbbytes; int tcpi_snd_wnd; int tcpi_snd_cwnd; int tcpi_snd_ssthresh; int tcpi_maxseg; int tcpi_rto; int tcpi_flags; int tcpi_options; int tcpi_rcv_wscale; int tcpi_snd_wscale; } ;
struct inpcb {TYPE_3__* inp_stat; TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int rxbytes; int rxpackets; int txbytes; int txpackets; } ;
struct TYPE_5__ {int sb_cc; } ;
struct TYPE_6__ {TYPE_1__ so_snd; } ;


 scalar_t__ FUNC_0 (struct tcpcb*) ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_2 (struct tcpcb*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct tcpcb*) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcp_connection_info*,int) ;

__attribute__((used)) static void
FUNC_6(struct tcpcb *VAR_26, struct tcp_connection_info *VAR_27)
{
 struct inpcb *VAR_28 = VAR_26->t_inpcb;

 FUNC_5(VAR_27, sizeof(*VAR_27));
 VAR_27->tcpi_state = VAR_26->t_state;
 if (VAR_26->t_state > VAR_6) {
  if (FUNC_4(VAR_26))
   VAR_27->tcpi_options |= VAR_4;
  if (FUNC_1(VAR_26))
   VAR_27->tcpi_options |= VAR_3;
  if (FUNC_3(VAR_26)) {
   VAR_27->tcpi_options |= VAR_5;
   VAR_27->tcpi_snd_wscale = VAR_26->snd_scale;
   VAR_27->tcpi_rcv_wscale = VAR_26->rcv_scale;
  }
  if (FUNC_2(VAR_26))
   VAR_27->tcpi_options |= VAR_2;
  if (FUNC_0(VAR_26) || VAR_26->t_rxtshift > 0)
   VAR_27->tcpi_flags |= VAR_0;
  if (VAR_26->t_flagsext & VAR_25)
   VAR_27->tcpi_flags |= VAR_1;
  VAR_27->tcpi_rto = (VAR_26->t_timer[VAR_7] > 0) ?
   VAR_26->t_rxtcur : 0;
  VAR_27->tcpi_maxseg = VAR_26->t_maxseg;
  VAR_27->tcpi_snd_ssthresh = VAR_26->snd_ssthresh;
  VAR_27->tcpi_snd_cwnd = VAR_26->snd_cwnd;
  VAR_27->tcpi_snd_wnd = VAR_26->snd_wnd;
  VAR_27->tcpi_snd_sbbytes = VAR_28->inp_socket->so_snd.sb_cc;
  VAR_27->tcpi_rcv_wnd = VAR_26->rcv_wnd;
  VAR_27->tcpi_rttcur = VAR_26->t_rttcur;
  VAR_27->tcpi_srtt = (VAR_26->t_srtt >> VAR_9);
  VAR_27->tcpi_rttvar = (VAR_26->t_rttvar >> VAR_8);
  VAR_27->tcpi_txpackets = VAR_28->inp_stat->txpackets;
  VAR_27->tcpi_txbytes = VAR_28->inp_stat->txbytes;
  VAR_27->tcpi_txretransmitbytes = VAR_26->t_stat.txretransmitbytes;
  VAR_27->tcpi_txretransmitpackets = VAR_26->t_stat.rxmitpkts;
  VAR_27->tcpi_rxpackets = VAR_28->inp_stat->rxpackets;
  VAR_27->tcpi_rxbytes = VAR_28->inp_stat->rxbytes;
  VAR_27->tcpi_rxoutoforderbytes = VAR_26->t_stat.rxoutoforderbytes;

  VAR_27->tcpi_tfo_syn_data_rcv = !!(VAR_26->t_tfo_stats & VAR_21);
  VAR_27->tcpi_tfo_cookie_req_rcv = !!(VAR_26->t_tfo_stats & VAR_10);
  VAR_27->tcpi_tfo_cookie_sent = !!(VAR_26->t_tfo_stats & VAR_14);
  VAR_27->tcpi_tfo_cookie_invalid = !!(VAR_26->t_tfo_stats & VAR_11);
  VAR_27->tcpi_tfo_cookie_req = !!(VAR_26->t_tfo_stats & VAR_13);
  VAR_27->tcpi_tfo_cookie_rcv = !!(VAR_26->t_tfo_stats & VAR_12);
  VAR_27->tcpi_tfo_syn_data_sent = !!(VAR_26->t_tfo_stats & VAR_23);
  VAR_27->tcpi_tfo_syn_data_acked = !!(VAR_26->t_tfo_stats & VAR_22);
  VAR_27->tcpi_tfo_syn_loss = !!(VAR_26->t_tfo_stats & VAR_24);
  VAR_27->tcpi_tfo_cookie_wrong = !!(VAR_26->t_tfo_stats & VAR_15);
  VAR_27->tcpi_tfo_no_cookie_rcv = !!(VAR_26->t_tfo_stats & VAR_17);
  VAR_27->tcpi_tfo_heuristics_disable = !!(VAR_26->t_tfo_stats & VAR_16);
  VAR_27->tcpi_tfo_send_blackhole = !!(VAR_26->t_tfo_stats & VAR_20);
  VAR_27->tcpi_tfo_recv_blackhole = !!(VAR_26->t_tfo_stats & VAR_19);
  VAR_27->tcpi_tfo_onebyte_proxy = !!(VAR_26->t_tfo_stats & VAR_18);
 }
}
