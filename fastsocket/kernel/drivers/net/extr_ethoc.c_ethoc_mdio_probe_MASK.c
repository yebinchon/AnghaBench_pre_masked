
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int addr; int dev; } ;
struct net_device {int dev; } ;
struct ethoc {int phy_id; struct phy_device* phy; TYPE_1__* mdio; } ;
struct TYPE_2__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct ethoc* FUNC_4 (struct net_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct ethoc *VAR_5 = FUNC_4(VAR_4);
 struct phy_device *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = VAR_5->mdio->phy_map[VAR_7];
  if (VAR_6) {
   if (VAR_5->phy_id != -1) {

    if (VAR_5->phy_id == VAR_6->addr)
     break;
   } else {

    if (VAR_6->addr != 0)
     break;
   }
  }
 }

 if (!VAR_6) {
  FUNC_2(&VAR_4->dev, "no PHY found\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_4, FUNC_3(&VAR_6->dev), &VAR_3, 0,
   VAR_1);
 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_4->dev, "could not attach to PHY\n");
  return FUNC_1(VAR_6);
 }

 VAR_5->phy = VAR_6;
 return 0;
}
