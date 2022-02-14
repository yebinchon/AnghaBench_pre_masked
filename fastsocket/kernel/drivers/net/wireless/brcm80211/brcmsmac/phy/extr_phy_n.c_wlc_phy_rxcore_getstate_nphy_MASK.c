
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int) ;

u8 FUNC_1(struct brcms_phy_pub *VAR_0)
{
 u16 VAR_1, VAR_2;
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 VAR_1 = FUNC_0(VAR_3, 0xa2);
 VAR_2 = (VAR_1 >> 4) & 0xf;

 return (u8) VAR_2;
}
