
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; scalar_t__ phy_wreg; int d11core; } ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct brcms_phy_pub *VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_2;

 (void)FUNC_1(VAR_3->d11core, FUNC_0(VAR_1));
 VAR_3->phy_wreg = 0;
 FUNC_2(VAR_3->sh->physhim, VAR_0, 0);
}
