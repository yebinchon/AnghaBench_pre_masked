
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int txretransmitbytes; int rxoutoforderbytes; int rxduplicatebytes; } ;
struct tcpcb {scalar_t__ t_state; int t_rttvar; int t_rttbest; int t_srtt; TYPE_2__ t_stat; } ;
struct nstat_tucookie {struct inpcb* inp; } ;
struct nstat_counts {int nstat_connectattempts; int nstat_connectsuccesses; int nstat_wired_txbytes; int nstat_wired_rxbytes; int nstat_wifi_txbytes; int nstat_wifi_rxbytes; int nstat_cell_txbytes; int nstat_cell_rxbytes; int nstat_avg_rtt; int nstat_min_rtt; int nstat_var_rtt; int nstat_txretransmit; int nstat_rxoutoforderbytes; int nstat_rxduplicatebytes; int nstat_txbytes; int nstat_txpackets; int nstat_rxbytes; int nstat_rxpackets; } ;
struct inpcb {TYPE_5__* inp_Wstat; TYPE_4__* inp_wstat; TYPE_3__* inp_cstat; TYPE_1__* inp_stat; } ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;
struct TYPE_10__ {int txbytes; int rxbytes; } ;
struct TYPE_9__ {int txbytes; int rxbytes; } ;
struct TYPE_8__ {int txbytes; int rxbytes; } ;
struct TYPE_6__ {int txbytes; int txpackets; int rxbytes; int rxpackets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nstat_counts*,int) ;
 struct tcpcb* FUNC_2 (struct inpcb*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_4(
 nstat_provider_cookie_t VAR_3,
 struct nstat_counts *VAR_4,
 int *VAR_5)
{
 struct nstat_tucookie *VAR_6 =
     (struct nstat_tucookie *)VAR_3;
 struct inpcb *VAR_7;

 FUNC_1(VAR_4, sizeof(*VAR_4));

 if (VAR_5) *VAR_5 = 0;


 if (FUNC_3(VAR_3))
 {
  if (VAR_5) *VAR_5 = 1;
  if (!(VAR_7 = VAR_6->inp) || !FUNC_2(VAR_7))
   return VAR_0;
 }
 VAR_7 = VAR_6->inp;
 struct tcpcb *VAR_8 = FUNC_2(VAR_7);

 FUNC_0(VAR_4->nstat_rxpackets, &VAR_7->inp_stat->rxpackets);
 FUNC_0(VAR_4->nstat_rxbytes, &VAR_7->inp_stat->rxbytes);
 FUNC_0(VAR_4->nstat_txpackets, &VAR_7->inp_stat->txpackets);
 FUNC_0(VAR_4->nstat_txbytes, &VAR_7->inp_stat->txbytes);
 VAR_4->nstat_rxduplicatebytes = VAR_8->t_stat.rxduplicatebytes;
 VAR_4->nstat_rxoutoforderbytes = VAR_8->t_stat.rxoutoforderbytes;
 VAR_4->nstat_txretransmit = VAR_8->t_stat.txretransmitbytes;
 VAR_4->nstat_connectattempts = VAR_8->t_state >= VAR_2 ? 1 : 0;
 VAR_4->nstat_connectsuccesses = VAR_8->t_state >= VAR_1 ? 1 : 0;
 VAR_4->nstat_avg_rtt = VAR_8->t_srtt;
 VAR_4->nstat_min_rtt = VAR_8->t_rttbest;
 VAR_4->nstat_var_rtt = VAR_8->t_rttvar;
 if (VAR_4->nstat_avg_rtt < VAR_4->nstat_min_rtt)
  VAR_4->nstat_min_rtt = VAR_4->nstat_avg_rtt;
 FUNC_0(VAR_4->nstat_cell_rxbytes, &VAR_7->inp_cstat->rxbytes);
 FUNC_0(VAR_4->nstat_cell_txbytes, &VAR_7->inp_cstat->txbytes);
 FUNC_0(VAR_4->nstat_wifi_rxbytes, &VAR_7->inp_wstat->rxbytes);
 FUNC_0(VAR_4->nstat_wifi_txbytes, &VAR_7->inp_wstat->txbytes);
 FUNC_0(VAR_4->nstat_wired_rxbytes, &VAR_7->inp_Wstat->rxbytes);
 FUNC_0(VAR_4->nstat_wired_txbytes, &VAR_7->inp_Wstat->txbytes);

 return 0;
}
