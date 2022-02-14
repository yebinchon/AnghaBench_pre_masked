
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int txpctl_mode; int tssi_idx; int tx_pwr_idx_over; scalar_t__ tssi_npt; } ;
typedef enum b43_lpphy_txpctl_mode { ____Placeholder_b43_lpphy_txpctl_mode } b43_lpphy_txpctl_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_3,
           enum b43_lpphy_txpctl_mode VAR_4)
{
 struct b43_phy_lp *VAR_5 = VAR_3->phy.lp;
 enum b43_lpphy_txpctl_mode VAR_6;

 FUNC_5(VAR_3);
 VAR_6 = VAR_5->txpctl_mode;
 if (VAR_6 == VAR_4)
  return;
 VAR_5->txpctl_mode = VAR_4;

 if (VAR_6 == VAR_0) {


 } else {
  if (VAR_4 == VAR_0) {

   FUNC_2(VAR_3, VAR_1,
     0xFF80, VAR_5->tssi_idx);
   FUNC_2(VAR_3, VAR_2,
     0x8FFF, ((u16)VAR_5->tssi_npt << 16));

   FUNC_4(VAR_3);
   VAR_5->tx_pwr_idx_over = -1;
  }
 }
 if (VAR_3->phy.rev >= 2) {
  if (VAR_4 == VAR_0)
   FUNC_3(VAR_3, FUNC_0(0xD0), 0x2);
  else
   FUNC_1(VAR_3, FUNC_0(0xD0), 0xFFFD);
 }
 FUNC_6(VAR_3);
}
