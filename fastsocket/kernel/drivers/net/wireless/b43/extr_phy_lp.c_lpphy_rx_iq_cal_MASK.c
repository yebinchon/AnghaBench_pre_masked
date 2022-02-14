
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct lpphy_tx_gains {int dummy; } ;
struct lpphy_rx_iq_comp {scalar_t__ chan; int c1; int c0; } ;
struct TYPE_4__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_2__ phy; TYPE_1__* dev; } ;
struct b43_phy_lp {scalar_t__ channel; } ;
typedef int oldgains ;
typedef int nogains ;
struct TYPE_3__ {int chip_id; } ;


 int FUNC_0 (struct lpphy_rx_iq_comp*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 struct lpphy_rx_iq_comp* VAR_6 ;
 int FUNC_7 (struct b43_wldev*,int) ;
 int FUNC_8 (struct b43_wldev*,int) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 struct lpphy_tx_gains FUNC_11 (struct b43_wldev*) ;
 struct lpphy_rx_iq_comp* VAR_7 ;
 struct lpphy_rx_iq_comp VAR_8 ;
 int FUNC_12 (struct b43_wldev*,int) ;
 int FUNC_13 (struct b43_wldev*,int) ;
 int FUNC_14 (struct b43_wldev*,int,int) ;
 int FUNC_15 (struct b43_wldev*,struct lpphy_tx_gains) ;
 int FUNC_16 (struct b43_wldev*,int,int) ;
 int FUNC_17 (struct b43_wldev*) ;
 int FUNC_18 (struct lpphy_tx_gains*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct b43_wldev *VAR_9, bool VAR_10, bool VAR_11,
       bool VAR_12, bool VAR_13, struct lpphy_tx_gains *VAR_14)
{
 struct b43_phy_lp *VAR_15 = VAR_9->phy.lp;
 const struct lpphy_rx_iq_comp *VAR_16 = ((void*)0);
 struct lpphy_tx_gains VAR_17, VAR_18;
 u16 VAR_19;
 int VAR_20, VAR_21;

 FUNC_18(&VAR_17, 0, sizeof(VAR_17));
 FUNC_18(&VAR_18, 0, sizeof(VAR_18));

 if (VAR_9->dev->chip_id == 0x5354) {
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_6); VAR_20++) {
   if (VAR_6[VAR_20].chan == VAR_15->channel) {
    VAR_16 = &VAR_6[VAR_20];
   }
  }
 } else if (VAR_9->phy.rev >= 2) {
  VAR_16 = &VAR_8;
 } else {
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_7); VAR_20++) {
   if (VAR_7[VAR_20].chan == VAR_15->channel) {
    VAR_16 = &VAR_7[VAR_20];
   }
  }
 }

 if (FUNC_1(!VAR_16))
  return 0;

 FUNC_4(VAR_9, VAR_4, 0xFF00, VAR_16->c1);
 FUNC_4(VAR_9, VAR_4,
   0x00FF, VAR_16->c0 << 8);

 if (VAR_10) {
  VAR_11 = 1;
  VAR_12 = 0;
  VAR_13 = 0;
 }

 FUNC_14(VAR_9, VAR_11, VAR_12);

 if (FUNC_2(VAR_9->wl) == VAR_5) {
  FUNC_6(VAR_9, VAR_2, 0x8);
  FUNC_4(VAR_9, VAR_3,
    0xFFF7, VAR_13 << 3);
 } else {
  FUNC_6(VAR_9, VAR_2, 0x20);
  FUNC_4(VAR_9, VAR_3,
    0xFFDF, VAR_13 << 5);
 }

 VAR_19 = FUNC_5(VAR_9, VAR_0) & 0x40;

 if (VAR_10)
  FUNC_13(VAR_9, 0x2D5D);
 else {
  if (VAR_19)
   VAR_18 = FUNC_11(VAR_9);
  if (!VAR_14)
   VAR_14 = &VAR_17;
  FUNC_15(VAR_9, *VAR_14);
 }

 FUNC_3(VAR_9, VAR_0, 0xFFFE);
 FUNC_3(VAR_9, VAR_1, 0xFFFE);
 FUNC_6(VAR_9, VAR_2, 0x800);
 FUNC_6(VAR_9, VAR_3, 0x800);
 FUNC_12(VAR_9, 0);
 if (VAR_10)
  VAR_21 = FUNC_7(VAR_9, 0xFFF0);
 else {
  FUNC_16(VAR_9, 4000, 100);
  VAR_21 = FUNC_7(VAR_9, 0x4000);
  FUNC_17(VAR_9);
 }
 FUNC_8(VAR_9, 0);
 FUNC_3(VAR_9, VAR_2, 0xFFFC);
 FUNC_3(VAR_9, VAR_2, 0xFFF7);
 FUNC_3(VAR_9, VAR_2, 0xFFDF);
 if (!VAR_10) {
  if (VAR_19)
   FUNC_15(VAR_9, VAR_18);
  else
   FUNC_10(VAR_9);
 }
 FUNC_9(VAR_9);
 FUNC_3(VAR_9, VAR_0, 0xFFFE);
 FUNC_3(VAR_9, VAR_1, 0xF7FF);
 return VAR_21;
}
