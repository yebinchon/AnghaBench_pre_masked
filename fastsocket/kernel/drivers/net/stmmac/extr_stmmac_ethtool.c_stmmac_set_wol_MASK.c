
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_priv {scalar_t__ wolenabled; int wolopts; int lock; int device; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = VAR_2;

 if (VAR_5->wolenabled == VAR_1)
  return -VAR_0;

 if (VAR_4->wolopts & ~VAR_6)
  return -VAR_0;

 if (VAR_4->wolopts == 0)
  FUNC_0(VAR_5->device, 0);
 else
  FUNC_0(VAR_5->device, 1);

 FUNC_2(&VAR_5->lock);
 VAR_5->wolopts = VAR_4->wolopts;
 FUNC_3(&VAR_5->lock);

 return 0;
}
