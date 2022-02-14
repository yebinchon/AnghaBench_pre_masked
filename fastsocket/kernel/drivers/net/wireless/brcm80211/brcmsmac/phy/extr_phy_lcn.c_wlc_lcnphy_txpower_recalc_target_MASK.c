
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u32 ;
struct phytbl_info {int tbl_width; int tbl_len; int tbl_offset; scalar_t__* tbl_ptr; int tbl_id; } ;
struct brcms_phy {scalar_t__ tx_power_min; scalar_t__* tx_power_offset; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,struct phytbl_info*) ;

void FUNC_6(struct brcms_phy *VAR_6)
{
 struct phytbl_info VAR_7;
 u32 VAR_8[VAR_0 + VAR_2 +
         VAR_1];
 uint VAR_9, VAR_10;
 if (FUNC_3(VAR_6))
  return;

 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++, VAR_10++) {

  if (VAR_9 == VAR_0 + VAR_2)
   VAR_10 = VAR_5;

  VAR_8[VAR_9] = (u32) ((s32) (-VAR_6->tx_power_offset[VAR_10]));
 }

 VAR_7.tbl_id = VAR_3;
 VAR_7.tbl_width = 32;
 VAR_7.tbl_len = FUNC_0(VAR_8);
 VAR_7.tbl_ptr = VAR_8;
 VAR_7.tbl_offset = VAR_4;
 FUNC_5(VAR_6, &VAR_7);

 if (FUNC_1(VAR_6) != VAR_6->tx_power_min) {
  FUNC_2(VAR_6, VAR_6->tx_power_min);

  FUNC_4(VAR_6);
 }
}
