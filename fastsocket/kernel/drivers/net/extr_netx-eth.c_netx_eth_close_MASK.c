
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netx_eth_priv {scalar_t__ xpec_base; } ;
struct net_device {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 struct netx_eth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct netx_eth_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 FUNC_3(0,
     VAR_3->xpec_base + VAR_1 + VAR_0);

 FUNC_0(VAR_2->irq, VAR_2);

 return 0;
}
