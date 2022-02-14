
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct net_device {int dummy; } ;
struct mv643xx_eth_stats {scalar_t__ netdev_off; int mp_off; int sizeof_stat; } ;
struct mv643xx_eth_private {scalar_t__ dev; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (struct mv643xx_eth_stats*) ;
 int FUNC_1 (struct mv643xx_eth_private*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mv643xx_eth_private*) ;
 struct mv643xx_eth_stats* VAR_0 ;
 struct mv643xx_eth_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       struct ethtool_stats *VAR_2,
       uint64_t *VAR_3)
{
 struct mv643xx_eth_private *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 FUNC_2(VAR_1);
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  const struct mv643xx_eth_stats *VAR_6;
  void *VAR_7;

  VAR_6 = VAR_0 + VAR_5;

  if (VAR_6->netdev_off >= 0)
   VAR_7 = ((void *)VAR_4->dev) + VAR_6->netdev_off;
  else
   VAR_7 = ((void *)VAR_4) + VAR_6->mp_off;

  VAR_3[VAR_5] = (VAR_6->sizeof_stat == 8) ?
    *(uint64_t *)VAR_7 : *(uint32_t *)VAR_7;
 }
}
