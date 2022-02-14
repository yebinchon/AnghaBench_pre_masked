
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int rx_recycle; int napi; int * tm; int * phydev; } ;
struct net_device {int base_addr; int irq; } ;


 int FUNC_0 (struct stmmac_priv*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct stmmac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_0)
{
 struct stmmac_priv *VAR_1 = FUNC_4(VAR_0);


 if (VAR_1->phydev) {
  FUNC_8(VAR_1->phydev);
  FUNC_7(VAR_1->phydev);
  VAR_1->phydev = ((void*)0);
 }

 FUNC_6(VAR_0);







 FUNC_3(&VAR_1->napi);
 FUNC_9(&VAR_1->rx_recycle);


 FUNC_1(VAR_0->irq, VAR_0);


 FUNC_12(VAR_0->base_addr);
 FUNC_11(VAR_0->base_addr);


 FUNC_0(VAR_1);


 FUNC_14(VAR_0->base_addr);
 FUNC_13(VAR_0->base_addr);

 FUNC_5(VAR_0);

 return 0;
}
