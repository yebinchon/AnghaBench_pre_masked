
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int txpwr_percent; } ;



void FUNC_0(struct brcms_phy_pub *VAR_0, u8 VAR_1)
{
 struct brcms_phy *VAR_2 = (struct brcms_phy *) VAR_0;

 VAR_2->txpwr_percent = VAR_1;
}
