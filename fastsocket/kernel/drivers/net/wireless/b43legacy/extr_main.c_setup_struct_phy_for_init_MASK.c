
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {int radio_hw_enable; } ;
struct b43legacy_phy {int savedpctlreg; int aci_enable; int aci_wlan_automatic; int aci_hw_rssi; int* nrssi; int* nrssi_lt; int lofcal; int initval; int channel; int interfmode; scalar_t__ nrssislope; scalar_t__ txpwr_offset; int txctl1; int rfatt; int bbatt; scalar_t__ trsw_rx_gain; scalar_t__ max_lb_gain; struct b43legacy_lopair* _lo_pairs; struct b43legacy_lopair* minlowsigpos; struct b43legacy_lopair* minlowsig; } ;
struct b43legacy_lopair {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_lopair*,int,int) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_wldev *VAR_2,
          struct b43legacy_phy *VAR_3)
{
 struct b43legacy_lopair *VAR_4;
 int VAR_5;

 FUNC_4(VAR_3->minlowsig, 0xFF, sizeof(VAR_3->minlowsig));
 FUNC_4(VAR_3->minlowsigpos, 0, sizeof(VAR_3->minlowsigpos));



 VAR_2->radio_hw_enable = 1;

 VAR_3->savedpctlreg = 0xFFFF;
 VAR_3->aci_enable = 0;
 VAR_3->aci_wlan_automatic = 0;
 VAR_3->aci_hw_rssi = 0;

 VAR_4 = VAR_3->_lo_pairs;
 if (VAR_4)
  FUNC_4(VAR_4, 0, sizeof(struct b43legacy_lopair) *
         VAR_1);
 VAR_3->max_lb_gain = 0;
 VAR_3->trsw_rx_gain = 0;


 VAR_3->bbatt = FUNC_1(VAR_2);
 VAR_3->rfatt = FUNC_2(VAR_2);
 VAR_3->txctl1 = FUNC_3(VAR_2);
 VAR_3->txpwr_offset = 0;


 VAR_3->nrssislope = 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->nrssi); VAR_5++)
  VAR_3->nrssi[VAR_5] = -1000;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->nrssi_lt); VAR_5++)
  VAR_3->nrssi_lt[VAR_5] = VAR_5;

 VAR_3->lofcal = 0xFFFF;
 VAR_3->initval = 0xFFFF;

 VAR_3->interfmode = VAR_0;
 VAR_3->channel = 0xFF;
}
