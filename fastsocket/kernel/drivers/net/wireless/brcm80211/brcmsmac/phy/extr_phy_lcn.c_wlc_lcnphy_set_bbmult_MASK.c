
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct phytbl_info {int* tbl_ptr; int tbl_len; int tbl_offset; int tbl_width; int tbl_id; } ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_1, u8 VAR_2)
{
 u16 VAR_3 = (u16) VAR_2 << 8;
 struct phytbl_info VAR_4;

 VAR_4.tbl_ptr = &VAR_3;
 VAR_4.tbl_len = 1;
 VAR_4.tbl_id = VAR_0;
 VAR_4.tbl_offset = 87;
 VAR_4.tbl_width = 16;
 FUNC_0(VAR_1, &VAR_4);
}
