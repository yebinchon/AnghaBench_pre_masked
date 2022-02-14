
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int collisions; } ;
struct net_device {int dummy; } ;
struct ioc3_private {struct net_device_stats stats; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct ioc3_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_1)
{
 struct ioc3_private *VAR_2 = FUNC_1(VAR_1);
 struct ioc3 *VAR_3 = VAR_2->regs;

 VAR_2->stats.collisions += (FUNC_0() & VAR_0);
 return &VAR_2->stats;
}
