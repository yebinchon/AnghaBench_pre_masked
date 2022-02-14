
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lcn_tx_gains {int gm_gain; int pga_gain; int pad_gain; scalar_t__ dac_gain; } ;
struct TYPE_3__ {TYPE_2__* lcn; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct TYPE_4__ {int hw_pwr_ctl_capable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,struct lcn_tx_gains*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_2)
{
 struct lcn_tx_gains VAR_3;
 u8 VAR_4;

 FUNC_2(VAR_2);

 if (!VAR_2->phy.lcn->hw_pwr_ctl_capable) {
  if (FUNC_0(VAR_2->wl) == VAR_1) {
   VAR_3.gm_gain = 4;
   VAR_3.pga_gain = 12;
   VAR_3.pad_gain = 12;
   VAR_3.dac_gain = 0;
   VAR_4 = 150;
  } else {
   VAR_3.gm_gain = 7;
   VAR_3.pga_gain = 15;
   VAR_3.pad_gain = 14;
   VAR_3.dac_gain = 0;
   VAR_4 = 150;
  }
  FUNC_5(VAR_2, &VAR_3);
  FUNC_4(VAR_2, VAR_4);
  FUNC_3(VAR_2, VAR_0);
 } else {
  FUNC_6(VAR_2->wl, "TX power control not supported for this HW\n");
 }

 FUNC_1(VAR_2);
}
