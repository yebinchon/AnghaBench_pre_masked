
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct net_device {int dev; } ;
struct gfar_private {int device_flags; int oldduplex; TYPE_1__* phydev; int phy_node; scalar_t__ oldspeed; scalar_t__ oldlink; } ;
typedef scalar_t__ phy_interface_t ;
struct TYPE_3__ {int supported; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 TYPE_1__* FUNC_4 (struct net_device*,int ,int *,int ,scalar_t__) ;
 TYPE_1__* FUNC_5 (struct net_device*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6)
{
 struct gfar_private *VAR_7 = FUNC_3(VAR_6);
 uint VAR_8 =
  VAR_7->device_flags & VAR_1 ?
  VAR_4 : 0;
 phy_interface_t VAR_9;

 VAR_7->oldlink = 0;
 VAR_7->oldspeed = 0;
 VAR_7->oldduplex = -1;

 VAR_9 = FUNC_2(VAR_6);

 VAR_7->phydev = FUNC_4(VAR_6, VAR_7->phy_node, &VAR_5, 0,
          VAR_9);
 if (!VAR_7->phydev)
  VAR_7->phydev = FUNC_5(VAR_6, &VAR_5,
        VAR_9);
 if (!VAR_7->phydev) {
  FUNC_0(&VAR_6->dev, "could not attach to PHY\n");
  return -VAR_0;
 }

 if (VAR_9 == VAR_3)
  FUNC_1(VAR_6);


 VAR_7->phydev->supported &= (VAR_2 | VAR_8);
 VAR_7->phydev->advertising = VAR_7->phydev->supported;

 return 0;
}
