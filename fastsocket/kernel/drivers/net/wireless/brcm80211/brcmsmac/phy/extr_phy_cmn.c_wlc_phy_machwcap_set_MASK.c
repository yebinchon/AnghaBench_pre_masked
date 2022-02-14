
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int machwcap; } ;



void FUNC_0(struct brcms_phy_pub *VAR_0, u32 VAR_1)
{
 struct brcms_phy *VAR_2 = (struct brcms_phy *) VAR_0;

 VAR_2->sh->machwcap = VAR_1;
}
