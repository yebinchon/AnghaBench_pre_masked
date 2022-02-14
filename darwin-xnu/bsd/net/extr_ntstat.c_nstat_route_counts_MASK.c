
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; struct nstat_counts* rt_stats; } ;
struct nstat_counts {scalar_t__ nstat_cell_txbytes; scalar_t__ nstat_cell_rxbytes; int nstat_var_rtt; int nstat_avg_rtt; int nstat_min_rtt; int nstat_connectsuccesses; int nstat_connectattempts; int nstat_txretransmit; int nstat_rxoutoforderbytes; int nstat_rxduplicatebytes; int nstat_txbytes; int nstat_txpackets; int nstat_rxbytes; int nstat_rxpackets; } ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nstat_counts*,int) ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_provider_cookie_t VAR_1,
 struct nstat_counts *VAR_2,
 int *VAR_3)
{
 struct rtentry *VAR_4 = (struct rtentry*)VAR_1;
 struct nstat_counts *VAR_5 = VAR_4->rt_stats;

 if (VAR_3) *VAR_3 = 0;

 if (VAR_3 && (VAR_4->rt_flags & VAR_0) == 0) *VAR_3 = 1;

 if (VAR_5)
 {
  FUNC_0(VAR_2->nstat_rxpackets, &VAR_5->nstat_rxpackets);
  FUNC_0(VAR_2->nstat_rxbytes, &VAR_5->nstat_rxbytes);
  FUNC_0(VAR_2->nstat_txpackets, &VAR_5->nstat_txpackets);
  FUNC_0(VAR_2->nstat_txbytes, &VAR_5->nstat_txbytes);
  VAR_2->nstat_rxduplicatebytes = VAR_5->nstat_rxduplicatebytes;
  VAR_2->nstat_rxoutoforderbytes = VAR_5->nstat_rxoutoforderbytes;
  VAR_2->nstat_txretransmit = VAR_5->nstat_txretransmit;
  VAR_2->nstat_connectattempts = VAR_5->nstat_connectattempts;
  VAR_2->nstat_connectsuccesses = VAR_5->nstat_connectsuccesses;
  VAR_2->nstat_min_rtt = VAR_5->nstat_min_rtt;
  VAR_2->nstat_avg_rtt = VAR_5->nstat_avg_rtt;
  VAR_2->nstat_var_rtt = VAR_5->nstat_var_rtt;
  VAR_2->nstat_cell_rxbytes = VAR_2->nstat_cell_txbytes = 0;
 }
 else
 {
  FUNC_1(VAR_2, sizeof(*VAR_2));
 }

 return 0;
}
