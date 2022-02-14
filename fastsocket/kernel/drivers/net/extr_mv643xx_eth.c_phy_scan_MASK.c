
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct mv643xx_eth_private {TYPE_1__* shared; } ;
struct mii_bus {struct phy_device** phy_map; } ;
struct TYPE_4__ {struct mii_bus* smi_bus; } ;
struct TYPE_3__ {TYPE_2__* smi; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_bus*,int) ;
 int FUNC_1 (struct mv643xx_eth_private*) ;
 int FUNC_2 (struct mv643xx_eth_private*,int) ;

__attribute__((used)) static struct phy_device *FUNC_3(struct mv643xx_eth_private *VAR_1,
       int VAR_2)
{
 struct mii_bus *VAR_3 = VAR_1->shared->smi->smi_bus;
 struct phy_device *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2 == VAR_0) {
  VAR_5 = FUNC_1(VAR_1) & 0x1f;
  VAR_6 = 32;
 } else {
  VAR_5 = VAR_2 & 0x1f;
  VAR_6 = 1;
 }

 VAR_4 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  int VAR_8 = (VAR_5 + VAR_7) & 0x1f;

  if (VAR_3->phy_map[VAR_8] == ((void*)0))
   FUNC_0(VAR_3, VAR_8);

  if (VAR_4 == ((void*)0)) {
   VAR_4 = VAR_3->phy_map[VAR_8];
   if (VAR_4 != ((void*)0))
    FUNC_2(VAR_1, VAR_8);
  }
 }

 return VAR_4;
}
