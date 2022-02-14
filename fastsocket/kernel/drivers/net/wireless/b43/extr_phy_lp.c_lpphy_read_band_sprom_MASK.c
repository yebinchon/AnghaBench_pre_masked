
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
struct ssb_sprom {int ofdm2gpo; int ofdm5glpo; int ofdm5gpo; int ofdm5ghpo; void* maxpwr_ah; void* maxpwr_a; void* maxpwr_al; int pa1hib2; int pa1hib1; int pa1hib0; int pa1lob2; int pa1lob1; int pa1lob0; int pa1b2; int pa1b1; int pa1b0; int rssisav5g; int rssismc5g; int rssismf5g; int rxpo5g; int bxa5g; int tri5gh; int tri5g; int tri5gl; void* opo; void* cck2gpo; void* maxpwr_bg; int pa0b2; int pa0b1; int pa0b0; int rssisav2g; int rssismc2g; int rssismf2g; int rxpo2g; int bxa2g; int tri2g; } ;
struct TYPE_4__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_2__ phy; TYPE_1__* dev; } ;
struct b43_phy_lp {void** tx_max_rateh; void* max_tx_pwr_hi_band; void** tx_max_rate; void* max_tx_pwr_med_band; void** tx_max_ratel; void* max_tx_pwr_low_band; int * txpah; int * txpal; int * txpa; int rssi_gs; int rssi_vc; int rssi_vf; int rx_pwr_offset; int bx_arch; int tx_isolation_hi_band; int tx_isolation_med_band; int tx_isolation_low_band; } ;
struct TYPE_3__ {struct ssb_sprom* bus_sprom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1)
{
 struct ssb_sprom *VAR_2 = VAR_1->dev->bus_sprom;
 struct b43_phy_lp *VAR_3 = VAR_1->phy.lp;
 u16 VAR_4, VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_1->wl) == VAR_0) {
  VAR_3->tx_isolation_med_band = VAR_2->tri2g;
  VAR_3->bx_arch = VAR_2->bxa2g;
  VAR_3->rx_pwr_offset = VAR_2->rxpo2g;
  VAR_3->rssi_vf = VAR_2->rssismf2g;
  VAR_3->rssi_vc = VAR_2->rssismc2g;
  VAR_3->rssi_gs = VAR_2->rssisav2g;
  VAR_3->txpa[0] = VAR_2->pa0b0;
  VAR_3->txpa[1] = VAR_2->pa0b1;
  VAR_3->txpa[2] = VAR_2->pa0b2;
  VAR_5 = VAR_2->maxpwr_bg;
  VAR_3->max_tx_pwr_med_band = VAR_5;
  VAR_4 = VAR_2->cck2gpo;
  if (VAR_4) {
   VAR_6 = VAR_2->ofdm2gpo;
   for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
    VAR_3->tx_max_rate[VAR_7] =
     VAR_5 - (VAR_6 & 0xF) * 2;
    VAR_6 >>= 4;
   }
   VAR_6 = VAR_2->ofdm2gpo;
   for (VAR_7 = 4; VAR_7 < 15; VAR_7++) {
    VAR_3->tx_max_rate[VAR_7] =
     VAR_5 - (VAR_6 & 0xF) * 2;
    VAR_6 >>= 4;
   }
  } else {
   u8 VAR_8 = VAR_2->opo;
   for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
    VAR_3->tx_max_rate[VAR_7] = VAR_5;
   for (VAR_7 = 4; VAR_7 < 15; VAR_7++)
    VAR_3->tx_max_rate[VAR_7] = VAR_5 - VAR_8;
  }
 } else {
  VAR_3->tx_isolation_low_band = VAR_2->tri5gl;
  VAR_3->tx_isolation_med_band = VAR_2->tri5g;
  VAR_3->tx_isolation_hi_band = VAR_2->tri5gh;
  VAR_3->bx_arch = VAR_2->bxa5g;
  VAR_3->rx_pwr_offset = VAR_2->rxpo5g;
  VAR_3->rssi_vf = VAR_2->rssismf5g;
  VAR_3->rssi_vc = VAR_2->rssismc5g;
  VAR_3->rssi_gs = VAR_2->rssisav5g;
  VAR_3->txpa[0] = VAR_2->pa1b0;
  VAR_3->txpa[1] = VAR_2->pa1b1;
  VAR_3->txpa[2] = VAR_2->pa1b2;
  VAR_3->txpal[0] = VAR_2->pa1lob0;
  VAR_3->txpal[1] = VAR_2->pa1lob1;
  VAR_3->txpal[2] = VAR_2->pa1lob2;
  VAR_3->txpah[0] = VAR_2->pa1hib0;
  VAR_3->txpah[1] = VAR_2->pa1hib1;
  VAR_3->txpah[2] = VAR_2->pa1hib2;
  VAR_5 = VAR_2->maxpwr_al;
  VAR_6 = VAR_2->ofdm5glpo;
  VAR_3->max_tx_pwr_low_band = VAR_5;
  for (VAR_7 = 4; VAR_7 < 12; VAR_7++) {
   VAR_3->tx_max_ratel[VAR_7] = VAR_5 - (VAR_6 & 0xF) * 2;
   VAR_6 >>= 4;
  }
  VAR_5 = VAR_2->maxpwr_a;
  VAR_6 = VAR_2->ofdm5gpo;
  VAR_3->max_tx_pwr_med_band = VAR_5;
  for (VAR_7 = 4; VAR_7 < 12; VAR_7++) {
   VAR_3->tx_max_rate[VAR_7] = VAR_5 - (VAR_6 & 0xF) * 2;
   VAR_6 >>= 4;
  }
  VAR_5 = VAR_2->maxpwr_ah;
  VAR_6 = VAR_2->ofdm5ghpo;
  VAR_3->max_tx_pwr_hi_band = VAR_5;
  for (VAR_7 = 4; VAR_7 < 12; VAR_7++) {
   VAR_3->tx_max_rateh[VAR_7] = VAR_5 - (VAR_6 & 0xF) * 2;
   VAR_6 >>= 4;
  }
 }
}
