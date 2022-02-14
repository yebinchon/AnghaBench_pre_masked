
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_3__ {void* phy_corenum; } ;
struct brcms_phy {TYPE_2__* sh; TYPE_1__ pubpi; } ;
struct TYPE_4__ {void* phyrxchain; void* phytxchain; void* hw_phyrxchain; void* hw_phytxchain; } ;


 scalar_t__ FUNC_0 (void*) ;

void FUNC_1(struct brcms_phy_pub *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 VAR_3->sh->hw_phytxchain = VAR_1;
 VAR_3->sh->hw_phyrxchain = VAR_2;
 VAR_3->sh->phytxchain = VAR_1;
 VAR_3->sh->phyrxchain = VAR_2;
 VAR_3->pubpi.phy_corenum = (u8)FUNC_0(VAR_3->sh->phyrxchain);
}
