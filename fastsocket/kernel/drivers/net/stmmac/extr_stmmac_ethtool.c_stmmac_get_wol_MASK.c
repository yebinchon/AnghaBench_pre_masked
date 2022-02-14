
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {scalar_t__ wolenabled; int lock; int wolopts; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(&VAR_4->lock);
 if (VAR_4->wolenabled == VAR_0) {
  VAR_3->supported = VAR_1;
  VAR_3->wolopts = VAR_4->wolopts;
 }
 FUNC_2(&VAR_4->lock);
}
