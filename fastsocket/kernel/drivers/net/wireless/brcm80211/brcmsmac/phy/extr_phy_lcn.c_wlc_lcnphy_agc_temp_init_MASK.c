
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phytbl_info {int* tbl_ptr; int tbl_len; int tbl_id; int tbl_offset; int tbl_width; } ;
struct brcms_phy_lcnphy {int lcnphy_ofdmgainidxtableoffset; int lcnphy_dsssgainidxtableoffset; int lcnphy_tr_R_gain_val; int lcnphy_tr_T_gain_val; int lcnphy_Med_Low_Gain_db; int lcnphy_Very_Low_Gain_db; int lcnphy_gain_idx_14_lowword; int lcnphy_gain_idx_14_hiword; scalar_t__ lcnphy_input_pwr_offset_db; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef scalar_t__ s8 ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_1)
{
 s16 VAR_2;
 struct phytbl_info VAR_3;
 u32 VAR_4[2];
 struct brcms_phy_lcnphy *VAR_5 = VAR_1->u.pi_lcnphy;

 VAR_2 = (s16) FUNC_0(VAR_1, 0x4df);
 VAR_5->lcnphy_ofdmgainidxtableoffset = (VAR_2 & (0xff << 0)) >> 0;

 if (VAR_5->lcnphy_ofdmgainidxtableoffset > 127)
  VAR_5->lcnphy_ofdmgainidxtableoffset -= 256;

 VAR_5->lcnphy_dsssgainidxtableoffset = (VAR_2 & (0xff << 8)) >> 8;

 if (VAR_5->lcnphy_dsssgainidxtableoffset > 127)
  VAR_5->lcnphy_dsssgainidxtableoffset -= 256;

 VAR_3.tbl_ptr = VAR_4;
 VAR_3.tbl_len = 2;
 VAR_3.tbl_id = 17;
 VAR_3.tbl_offset = 59;
 VAR_3.tbl_width = 32;
 FUNC_1(VAR_1, &VAR_3);

 if (VAR_4[0] > 63)
  VAR_4[0] -= 128;
 VAR_5->lcnphy_tr_R_gain_val = VAR_4[0];

 if (VAR_4[1] > 63)
  VAR_4[1] -= 128;
 VAR_5->lcnphy_tr_T_gain_val = VAR_4[1];

 VAR_2 = (s16) (FUNC_0(VAR_1, 0x434) & (0xff << 0));
 if (VAR_2 > 127)
  VAR_2 -= 256;
 VAR_5->lcnphy_input_pwr_offset_db = (s8) VAR_2;

 VAR_5->lcnphy_Med_Low_Gain_db =
  (FUNC_0(VAR_1, 0x424) & (0xff << 8)) >> 8;
 VAR_5->lcnphy_Very_Low_Gain_db =
  (FUNC_0(VAR_1, 0x425) & (0xff << 0)) >> 0;

 VAR_3.tbl_ptr = VAR_4;
 VAR_3.tbl_len = 2;
 VAR_3.tbl_id = VAR_0;
 VAR_3.tbl_offset = 28;
 VAR_3.tbl_width = 32;
 FUNC_1(VAR_1, &VAR_3);

 VAR_5->lcnphy_gain_idx_14_lowword = VAR_4[0];
 VAR_5->lcnphy_gain_idx_14_hiword = VAR_4[1];

}
