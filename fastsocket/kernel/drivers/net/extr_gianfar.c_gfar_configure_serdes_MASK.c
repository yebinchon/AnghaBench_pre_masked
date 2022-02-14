
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dev; } ;
struct gfar_private {int tbi_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 struct phy_device* FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_13)
{
 struct gfar_private *VAR_14 = FUNC_2(VAR_13);
 struct phy_device *VAR_15;

 if (!VAR_14->tbi_node) {
  FUNC_1(&VAR_13->dev, "error: SGMII mode requires that the "
        "device tree specify a tbi-handle\n");
  return;
 }

 VAR_15 = FUNC_3(VAR_14->tbi_node);
 if (!VAR_15) {
  FUNC_0(&VAR_13->dev, "error: Could not get TBI device\n");
  return;
 }







 if (FUNC_4(VAR_15, VAR_10) & VAR_7)
  return;


 FUNC_5(VAR_15, VAR_11, VAR_12);

 FUNC_5(VAR_15, VAR_8,
   VAR_0 | VAR_1 |
   VAR_2);

 FUNC_5(VAR_15, VAR_9, VAR_3 |
   VAR_4 | VAR_5 | VAR_6);
}
