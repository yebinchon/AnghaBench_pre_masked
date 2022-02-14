
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int nphy_bb_mult_save; int nphy_sample_play_lpf_bw_ctl_ovr; scalar_t__ phyhang_avoid; TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int ) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int,int ,int ,int,int ) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,int ,int,int,int,int*) ;

void FUNC_8(struct brcms_phy *VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;

 if (VAR_6->phyhang_avoid)
  FUNC_6(VAR_6, 1);

 VAR_7 = FUNC_4(VAR_6, 0xc7);
 if (VAR_7 & 0x1)
  FUNC_3(VAR_6, 0xc3, VAR_5);
 else if (VAR_7 & 0x2)
  FUNC_2(VAR_6, 0xc2,
       (u16) ~VAR_4);

 FUNC_2(VAR_6, 0xc3, (u16) ~(0x1 << 2));

 if ((VAR_6->nphy_bb_mult_save & VAR_1) != 0) {

  VAR_8 = VAR_6->nphy_bb_mult_save & VAR_0;
  FUNC_7(VAR_6, VAR_3, 1, 87, 16,
      &VAR_8);

  VAR_6->nphy_bb_mult_save = 0;
 }

 if (FUNC_1(VAR_6->pubpi.phy_rev, 7) || FUNC_0(VAR_6->pubpi.phy_rev, 8)) {
  if (VAR_6->nphy_sample_play_lpf_bw_ctl_ovr) {
   FUNC_5(
    VAR_6,
    (0x1 << 7),
    0, 0, 1,
    VAR_2);
   VAR_6->nphy_sample_play_lpf_bw_ctl_ovr = 0;
  }
 }

 if (VAR_6->phyhang_avoid)
  FUNC_6(VAR_6, 0);
}
