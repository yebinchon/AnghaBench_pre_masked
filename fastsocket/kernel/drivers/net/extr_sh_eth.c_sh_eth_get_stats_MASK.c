
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device_stats {int tx_carrier_errors; int collisions; int tx_dropped; } ;
struct sh_eth_private {struct net_device_stats stats; } ;
struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_6)
{
 struct sh_eth_private *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8 = VAR_6->base_addr;

 VAR_7->stats.tx_dropped += FUNC_0(VAR_8 + VAR_5);
 FUNC_1(0, VAR_8 + VAR_5);
 VAR_7->stats.collisions += FUNC_0(VAR_8 + VAR_0);
 FUNC_1(0, VAR_8 + VAR_0);
 VAR_7->stats.tx_carrier_errors += FUNC_0(VAR_8 + VAR_4);
 FUNC_1(0, VAR_8 + VAR_4);






 VAR_7->stats.tx_carrier_errors += FUNC_0(VAR_8 + VAR_3);
 FUNC_1(0, VAR_8 + VAR_3);

 return &VAR_7->stats;
}
