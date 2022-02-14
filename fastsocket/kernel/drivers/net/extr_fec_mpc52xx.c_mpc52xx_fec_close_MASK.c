
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct mpc52xx_fec_priv {int * phydev; int t_irq; int r_irq; int rx_dmatsk; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct mpc52xx_fec_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct mpc52xx_fec_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0);

 FUNC_2(VAR_0);

 FUNC_1(VAR_0, VAR_1->rx_dmatsk);

 FUNC_0(VAR_0->irq, VAR_0);
 FUNC_0(VAR_1->r_irq, VAR_0);
 FUNC_0(VAR_1->t_irq, VAR_0);

 if (VAR_1->phydev) {

  FUNC_6(VAR_1->phydev);
  FUNC_5(VAR_1->phydev);
  VAR_1->phydev = ((void*)0);
 }

 return 0;
}
