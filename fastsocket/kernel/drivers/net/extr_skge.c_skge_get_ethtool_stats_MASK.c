
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skge_port {TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skge_port*,int *) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
       struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->hw->chip_id == VAR_0)
  FUNC_0(VAR_4, VAR_3);
 else
  FUNC_2(VAR_4, VAR_3);
}
