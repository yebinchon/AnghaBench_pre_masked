
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_phy_lcnphy {int lcnphy_tx_power_idx_override; scalar_t__ lcnphy_current_index; int lcnphy_tssi_tx_cnt; int lcnphy_tssi_npt; int lcnphy_tssi_idx; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef scalar_t__ s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_phy*,int,int,scalar_t__) ;
 int FUNC_1 (struct brcms_phy*,int ,int,int ) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*) ;
 scalar_t__ FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 scalar_t__ FUNC_8 (struct brcms_phy*,scalar_t__) ;
 int FUNC_9 (struct brcms_phy*,int ) ;
 int FUNC_10 (struct brcms_phy*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*) ;
 int FUNC_13 (struct brcms_phy*) ;
 int FUNC_14 (struct brcms_phy*) ;

void FUNC_15(struct brcms_phy *VAR_3, u16 VAR_4)
{
 u16 VAR_5 = FUNC_6(VAR_3);
 s8 VAR_6;
 struct brcms_phy_lcnphy *VAR_7 = VAR_3->u.pi_lcnphy;

 VAR_4 = FUNC_8(VAR_3, VAR_4);
 VAR_5 = FUNC_8(VAR_3, VAR_5);

 FUNC_0(VAR_3, 0x6da, (0x1 << 6),
      ((VAR_0 == VAR_4) ? 1 : 0) << 6);

 FUNC_0(VAR_3, 0x6a3, (0x1 << 4),
      ((VAR_0 == VAR_4) ? 0 : 1) << 4);

 if (VAR_5 != VAR_4) {
  if (VAR_0 == VAR_5) {

   FUNC_13(VAR_3);

   FUNC_3(VAR_3);
  }
  if (VAR_0 == VAR_4) {

   FUNC_14(VAR_3);

   FUNC_7(VAR_3,
       VAR_7->
       lcnphy_tssi_idx);
   FUNC_9(VAR_3, VAR_7->lcnphy_tssi_npt);
   FUNC_1(VAR_3, VAR_2, 0x4, 0);

   VAR_7->lcnphy_tssi_tx_cnt =
    FUNC_12(VAR_3);

   FUNC_4(VAR_3);
   VAR_7->lcnphy_tx_power_idx_override = -1;
  } else
   FUNC_5(VAR_3);

  FUNC_0(VAR_3, 0x4a4,
       ((0x1 << 15) | (0x1 << 14) | (0x1 << 13)), VAR_4);
  if (VAR_4 == VAR_1) {
   VAR_6 = FUNC_11(VAR_3);
   FUNC_10(VAR_3, VAR_6);
   VAR_7->lcnphy_current_index = (s8)
             ((FUNC_2(VAR_3,
              0x4a9) &
        0xFF) / 2);
  }
 }
}
