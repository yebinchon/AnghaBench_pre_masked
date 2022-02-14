
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int tx_packets; } ;
struct orinoco_private {struct net_device_stats stats; } ;
struct net_device {int dummy; } ;
struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hermes*,int ,int ) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, struct hermes *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_1(VAR_2);
 struct net_device_stats *VAR_5 = &VAR_4->stats;

 VAR_5->tx_packets++;

 FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_1, VAR_0);
}
