
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {scalar_t__ mac; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nic* FUNC_0 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct nic *VAR_5 = FUNC_0(VAR_3);
 VAR_4->supported = (VAR_5->mac >= VAR_1) ? VAR_0 : 0;
 VAR_4->wolopts = (VAR_5->flags & VAR_2) ? VAR_0 : 0;
}
