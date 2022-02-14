
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct device {int dummy; } ;
struct net_device {int name; struct device dev; } ;
struct emac_priv {int ndev; int pdev; scalar_t__ phydev; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct emac_priv*,int ) ;
 int FUNC_2 (struct emac_priv*,int ) ;
 int FUNC_3 (struct emac_priv*) ;
 int FUNC_4 (struct emac_priv*,int ) ;
 int FUNC_5 (struct emac_priv*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct emac_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct emac_priv*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (scalar_t__) ;
 struct resource* FUNC_14 (int ,int ,int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6 = 0;
 int VAR_7;
 struct emac_priv *VAR_8 = FUNC_9(VAR_4);
 struct device *VAR_9 = &VAR_4->dev;


 FUNC_12(VAR_4);
 FUNC_8(&VAR_8->napi);

 FUNC_10(VAR_4);
 FUNC_3(VAR_8);
 FUNC_5(VAR_8, VAR_1);
 FUNC_4(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_1);
 FUNC_1(VAR_8, VAR_0);
 FUNC_6(VAR_2, 1);

 if (VAR_8->phydev)
  FUNC_13(VAR_8->phydev);


 while ((VAR_5 = FUNC_14(VAR_8->pdev, VAR_3, VAR_6))) {
  for (VAR_7 = VAR_5->start; VAR_7 <= VAR_5->end; VAR_7++)
   FUNC_7(VAR_7, VAR_8->ndev);
  VAR_6++;
 }

 if (FUNC_11(VAR_8))
  FUNC_0(VAR_9, "DaVinci EMAC: %s stopped\n", VAR_4->name);

 return 0;
}
