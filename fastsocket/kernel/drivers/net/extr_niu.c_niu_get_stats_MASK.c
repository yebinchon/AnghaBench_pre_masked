
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int dummy; } ;
struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;


 struct niu* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct niu *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }
 return &VAR_0->stats;
}
