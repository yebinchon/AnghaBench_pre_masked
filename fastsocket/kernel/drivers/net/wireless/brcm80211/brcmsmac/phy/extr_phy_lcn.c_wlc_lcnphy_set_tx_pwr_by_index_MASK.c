
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int tbl_width; int tbl_len; int* tbl_ptr; scalar_t__ tbl_offset; int tbl_id; } ;
struct lcnphy_txgains {int gm_gain; int pga_gain; int pad_gain; int dac_gain; } ;
struct brcms_phy_lcnphy {scalar_t__ lcnphy_current_index; scalar_t__ lcnphy_tx_power_idx_override; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_3 (struct brcms_phy*,scalar_t__) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_6 (struct brcms_phy*,int,int) ;
 int FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (struct brcms_phy*,int ) ;
 int FUNC_9 (struct brcms_phy*) ;

void FUNC_10(struct brcms_phy *VAR_6, int VAR_7)
{
 struct phytbl_info VAR_8;
 u16 VAR_9, VAR_10;
 u8 VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 struct lcnphy_txgains VAR_16;
 struct brcms_phy_lcnphy *VAR_17 = VAR_6->u.pi_lcnphy;

 VAR_17->lcnphy_tx_power_idx_override = (s8) VAR_7;
 VAR_17->lcnphy_current_index = (u8) VAR_7;

 VAR_8.tbl_id = VAR_0;
 VAR_8.tbl_width = 32;
 VAR_8.tbl_len = 1;

 FUNC_8(VAR_6, VAR_4);

 VAR_8.tbl_offset = VAR_2 + VAR_7;
 VAR_8.tbl_ptr = &VAR_12;
 FUNC_2(VAR_6, &VAR_8);

 VAR_8.tbl_offset = VAR_1 + VAR_7;
 VAR_8.tbl_width = 32;
 VAR_8.tbl_ptr = &VAR_13;
 FUNC_2(VAR_6, &VAR_8);

 VAR_16.gm_gain = (u16) (VAR_13 & 0xff);
 VAR_16.pga_gain = (u16) (VAR_13 >> 8) & 0xff;
 VAR_16.pad_gain = (u16) (VAR_13 >> 16) & 0xff;
 VAR_16.dac_gain = (u16) (VAR_12 >> 28) & 0x07;
 FUNC_5(VAR_6, &VAR_16);
 FUNC_4(VAR_6, (u16) (VAR_13 >> 24) & 0x7f);

 VAR_11 = (u8) ((VAR_12 >> 20) & 0xff);
 FUNC_3(VAR_6, VAR_11);

 FUNC_1(VAR_6);

 if (!FUNC_9(VAR_6)) {

  VAR_9 = (u16) ((VAR_12 >> 10) & 0x3ff);
  VAR_10 = (u16) (VAR_12 & 0x3ff);
  FUNC_6(VAR_6, VAR_9, VAR_10);

  VAR_8.tbl_offset = VAR_3 + VAR_7;
  VAR_8.tbl_ptr = &VAR_14;
  FUNC_2(VAR_6, &VAR_8);

  FUNC_7(VAR_6, (u16) VAR_14);

  VAR_8.tbl_offset = VAR_5 + VAR_7;
  VAR_8.tbl_ptr = &VAR_15;
  FUNC_2(VAR_6, &VAR_8);
  FUNC_0(VAR_6, 0x6a6, (0x1fff << 0), (VAR_15 * 8) << 0);

 }
}
