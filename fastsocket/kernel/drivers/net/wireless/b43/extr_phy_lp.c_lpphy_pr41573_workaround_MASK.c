
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;
struct b43_phy_lp {int txpctl_mode; int tx_pwr_idx_over; int antenna; scalar_t__ rc_cap; int channel; void* tssi_idx; void* tssi_npt; } ;
typedef int saved_tab ;
typedef int s8 ;
typedef enum b43_lpphy_txpctl_mode { ____Placeholder_b43_lpphy_txpctl_mode } b43_lpphy_txpctl_mode ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int ,unsigned int const,int *) ;
 int FUNC_4 (struct b43_wldev*,int ,unsigned int const,int *) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 (unsigned int const,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int ) ;
 int FUNC_12 (struct b43_wldev*) ;
 int FUNC_13 (struct b43_wldev*,int) ;
 int FUNC_14 (struct b43_wldev*,int) ;
 int FUNC_15 (struct b43_wldev*) ;
 int FUNC_16 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_17(struct b43_wldev *VAR_3)
{
 struct b43_phy_lp *VAR_4 = VAR_3->phy.lp;
 u32 *VAR_5;
 const unsigned int VAR_6 = 256;
 enum b43_lpphy_txpctl_mode VAR_7;
 s8 VAR_8;
 u16 VAR_9, VAR_10;

 VAR_5 = FUNC_7(VAR_6, sizeof(VAR_5[0]), VAR_2);
 if (!VAR_5) {
  FUNC_6(VAR_3->wl, "PR41573 failed. Out of memory!\n");
  return;
 }

 FUNC_10(VAR_3);
 VAR_7 = VAR_4->txpctl_mode;
 VAR_8 = VAR_4->tx_pwr_idx_over;
 VAR_9 = VAR_4->tssi_npt;
 VAR_10 = VAR_4->tssi_idx;

 if (VAR_3->phy.rev < 2) {
  FUNC_3(VAR_3, FUNC_0(10, 0x140),
        VAR_6, VAR_5);
 } else {
  FUNC_3(VAR_3, FUNC_0(7, 0x140),
        VAR_6, VAR_5);
 }

 FUNC_15(VAR_3);
 FUNC_9(VAR_3);
 FUNC_16(VAR_3);
 FUNC_2(VAR_3, 0);
 FUNC_14(VAR_3, VAR_0);
 if (VAR_3->phy.rev < 2) {
  FUNC_4(VAR_3, FUNC_0(10, 0x140),
         VAR_6, VAR_5);
 } else {
  FUNC_4(VAR_3, FUNC_0(7, 0x140),
         VAR_6, VAR_5);
 }
 FUNC_5(VAR_3, VAR_1, VAR_4->channel);
 VAR_4->tssi_npt = VAR_9;
 VAR_4->tssi_idx = VAR_10;
 FUNC_11(VAR_3, VAR_4->channel);
 if (VAR_8 != -1)
  FUNC_13(VAR_3, VAR_8);
 if (VAR_4->rc_cap)
  FUNC_12(VAR_3);
 FUNC_1(VAR_3, VAR_4->antenna);
 FUNC_14(VAR_3, VAR_7);
 FUNC_8(VAR_5);
}
