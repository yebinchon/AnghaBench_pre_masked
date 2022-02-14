
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
struct TYPE_4__ {int phyrxchain; void* phytxchain; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct brcms_phy_pub*,void*) ;

void FUNC_3(struct brcms_phy_pub *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 VAR_3->sh->phytxchain = VAR_1;

 if (FUNC_0(VAR_3))
  FUNC_2(VAR_0, VAR_2);

 VAR_3->pubpi.phy_corenum = (u8)FUNC_1(VAR_3->sh->phyrxchain);
}
