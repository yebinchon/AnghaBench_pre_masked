
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct brcms_phy*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;

void FUNC_4(struct brcms_phy *VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_2, VAR_1, 1 << 3, 1 << 3);
 VAR_3 = (u8) FUNC_1(VAR_2, VAR_0) & 0xf8;
 FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_2(1);
 FUNC_3(VAR_2, VAR_0, VAR_3 | 0x03);
 FUNC_2(1);
 FUNC_3(VAR_2, VAR_0, VAR_3 | 0x07);
 FUNC_2(300);
 FUNC_0(VAR_2, VAR_1, 1 << 3, 0);
}
