
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phytbl_info {int tbl_width; int tbl_len; int tbl_offset; int * tbl_ptr; int tbl_id; } ;
struct brcms_phy {int dummy; } ;
typedef int data_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_3)
{
 u32 VAR_4[64];
 struct phytbl_info VAR_5;

 FUNC_0(VAR_4, 0, sizeof(VAR_4));

 VAR_5.tbl_id = VAR_0;
 VAR_5.tbl_width = 32;
 VAR_5.tbl_ptr = VAR_4;

 if (!FUNC_1(VAR_3)) {

  VAR_5.tbl_len = 30;
  VAR_5.tbl_offset = VAR_2;
  FUNC_2(VAR_3, &VAR_5);
 }

 VAR_5.tbl_len = 64;
 VAR_5.tbl_offset = VAR_1;
 FUNC_2(VAR_3, &VAR_5);
}
