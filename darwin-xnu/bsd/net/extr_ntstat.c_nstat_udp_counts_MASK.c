
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nstat_tucookie {struct inpcb* inp; } ;
struct nstat_counts {int nstat_wired_txbytes; int nstat_wired_rxbytes; int nstat_wifi_txbytes; int nstat_wifi_rxbytes; int nstat_cell_txbytes; int nstat_cell_rxbytes; int nstat_txbytes; int nstat_txpackets; int nstat_rxbytes; int nstat_rxpackets; } ;
struct inpcb {TYPE_4__* inp_Wstat; TYPE_3__* inp_wstat; TYPE_2__* inp_cstat; TYPE_1__* inp_stat; } ;
typedef scalar_t__ nstat_provider_cookie_t ;
typedef int errno_t ;
struct TYPE_8__ {int txbytes; int rxbytes; } ;
struct TYPE_7__ {int txbytes; int rxbytes; } ;
struct TYPE_6__ {int txbytes; int rxbytes; } ;
struct TYPE_5__ {int txbytes; int txpackets; int rxbytes; int rxpackets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_provider_cookie_t VAR_1,
 struct nstat_counts *VAR_2,
 int *VAR_3)
{
 struct nstat_tucookie *VAR_4 =
     (struct nstat_tucookie *)VAR_1;

 if (VAR_3) *VAR_3 = 0;


 if (FUNC_1(VAR_1))
 {
  if (VAR_3) *VAR_3 = 1;
  if (!VAR_4->inp)
   return VAR_0;
 }
 struct inpcb *VAR_5 = VAR_4->inp;

 FUNC_0(VAR_2->nstat_rxpackets, &VAR_5->inp_stat->rxpackets);
 FUNC_0(VAR_2->nstat_rxbytes, &VAR_5->inp_stat->rxbytes);
 FUNC_0(VAR_2->nstat_txpackets, &VAR_5->inp_stat->txpackets);
 FUNC_0(VAR_2->nstat_txbytes, &VAR_5->inp_stat->txbytes);
 FUNC_0(VAR_2->nstat_cell_rxbytes, &VAR_5->inp_cstat->rxbytes);
 FUNC_0(VAR_2->nstat_cell_txbytes, &VAR_5->inp_cstat->txbytes);
 FUNC_0(VAR_2->nstat_wifi_rxbytes, &VAR_5->inp_wstat->rxbytes);
 FUNC_0(VAR_2->nstat_wifi_txbytes, &VAR_5->inp_wstat->txbytes);
 FUNC_0(VAR_2->nstat_wired_rxbytes, &VAR_5->inp_Wstat->rxbytes);
 FUNC_0(VAR_2->nstat_wired_txbytes, &VAR_5->inp_Wstat->txbytes);

 return 0;
}
