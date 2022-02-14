
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int phyrxchain; int phytxchain; } ;



void FUNC_0(struct brcms_phy_pub *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 *VAR_1 = VAR_3->sh->phytxchain;
 *VAR_2 = VAR_3->sh->phyrxchain;
}
