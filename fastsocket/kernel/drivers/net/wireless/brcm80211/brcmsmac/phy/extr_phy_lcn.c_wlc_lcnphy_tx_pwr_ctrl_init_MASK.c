
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; scalar_t__ tbl_offset; int tbl_id; } ;
struct lcnphy_txgains {int gm_gain; int pga_gain; int pad_gain; scalar_t__ dac_gain; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int* txpa_2g; TYPE_1__* sh; int radio_chanspec; int hwpwrctrl_capable; int d11core; } ;
typedef int s32 ;
struct TYPE_2__ {int physhim; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy_pub*) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ) ;
 int FUNC_10 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_11 (struct brcms_phy*,int ) ;
 int FUNC_12 (int,int,int,int) ;
 int FUNC_13 (struct brcms_phy*,int ) ;
 int FUNC_14 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_15 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_16(struct brcms_phy_pub *VAR_6)
{
 struct lcnphy_txgains VAR_7;
 u8 VAR_8;
 struct phytbl_info VAR_9;
 s32 VAR_10, VAR_11, VAR_12;
 s32 VAR_13, VAR_14, VAR_15, VAR_16;
 bool VAR_17;
 struct brcms_phy *VAR_18 = (struct brcms_phy *) VAR_6;

 VAR_17 = (0 == (FUNC_2(VAR_18->d11core, FUNC_1(VAR_5)) &
    VAR_3));
 if (!VAR_17)
  FUNC_5(VAR_18->sh->physhim);

 if (!VAR_18->hwpwrctrl_capable) {
  if (FUNC_0(VAR_18->radio_chanspec)) {
   VAR_7.gm_gain = 4;
   VAR_7.pga_gain = 12;
   VAR_7.pad_gain = 12;
   VAR_7.dac_gain = 0;

   VAR_8 = 150;
  } else {
   VAR_7.gm_gain = 7;
   VAR_7.pga_gain = 15;
   VAR_7.pad_gain = 14;
   VAR_7.dac_gain = 0;

   VAR_8 = 150;
  }
  FUNC_10(VAR_18, &VAR_7);
  FUNC_8(VAR_18, VAR_8);
  FUNC_13(VAR_18, VAR_4);
 } else {

  FUNC_7(VAR_6);

  FUNC_6(VAR_18);

  VAR_11 = VAR_18->txpa_2g[0];
  VAR_12 = VAR_18->txpa_2g[1];
  VAR_10 = VAR_18->txpa_2g[2];
  VAR_15 = FUNC_12(10, VAR_10, VAR_11, VAR_12);
  VAR_16 = FUNC_12(125, VAR_10, VAR_11, VAR_12);

  VAR_9.tbl_id = VAR_0;
  VAR_9.tbl_width = 32;
  VAR_9.tbl_ptr = &VAR_14;
  VAR_9.tbl_len = 1;
  VAR_9.tbl_offset = 0;
  for (VAR_13 = 0; VAR_13 < 128; VAR_13++) {
   VAR_14 = FUNC_12(VAR_13, VAR_10, VAR_11, VAR_12);

   VAR_14 = (VAR_14 < VAR_16) ? VAR_16 : VAR_14;
   FUNC_14(VAR_18, &VAR_9);
   VAR_9.tbl_offset++;
  }

  FUNC_3(VAR_18, 0x410, (0x1 << 7), (0) << 7);

  FUNC_15(VAR_18, 0x4a8, 10);

  FUNC_9(VAR_18, VAR_2);

  FUNC_11(VAR_18, VAR_1);
 }
 if (!VAR_17)
  FUNC_4(VAR_18->sh->physhim);
}
