
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int lock; scalar_t__ wolenabled; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;


 void* VAR_0 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct fe_priv *VAR_3 = FUNC_0(VAR_1);
 VAR_2->supported = VAR_0;

 FUNC_1(&VAR_3->lock);
 if (VAR_3->wolenabled)
  VAR_2->wolopts = VAR_0;
 FUNC_2(&VAR_3->lock);
}
