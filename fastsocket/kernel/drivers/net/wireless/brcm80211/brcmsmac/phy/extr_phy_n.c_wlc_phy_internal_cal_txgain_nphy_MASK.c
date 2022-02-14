
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int radio_chanspec; int * nphy_cal_orig_pwr_idx; int * nphy_txcal_pwr_idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_3 (struct brcms_phy*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_1)
{
 u16 VAR_2[2];

 VAR_1->nphy_txcal_pwr_idx[0] = VAR_1->nphy_cal_orig_pwr_idx[0];
 VAR_1->nphy_txcal_pwr_idx[1] = VAR_1->nphy_cal_orig_pwr_idx[0];
 FUNC_3(VAR_1, 1, VAR_1->nphy_cal_orig_pwr_idx[0], 1);
 FUNC_3(VAR_1, 2, VAR_1->nphy_cal_orig_pwr_idx[1], 1);

 FUNC_1(VAR_1, VAR_0, 2, 0x110, 16,
    VAR_2);

 if (FUNC_0(VAR_1->radio_chanspec)) {
  VAR_2[0] = (VAR_2[0] & 0xF000) | 0x0F40;
  VAR_2[1] = (VAR_2[1] & 0xF000) | 0x0F40;
 } else {
  VAR_2[0] = (VAR_2[0] & 0xF000) | 0x0F60;
  VAR_2[1] = (VAR_2[1] & 0xF000) | 0x0F60;
 }

 FUNC_2(VAR_1, VAR_0, 2, 0x110, 16,
     VAR_2);
}
