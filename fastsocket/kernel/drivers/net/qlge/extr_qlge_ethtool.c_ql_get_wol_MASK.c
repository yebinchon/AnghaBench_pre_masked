
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_adapter {int wol; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct TYPE_2__ {unsigned short subsystem_device; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct ql_adapter *VAR_5 = FUNC_0(VAR_3);
 unsigned short VAR_6 = VAR_5->pdev->subsystem_device;


 if (VAR_6 == VAR_0 ||
   VAR_6 == VAR_1) {
  VAR_4->supported = VAR_2;
  VAR_4->wolopts = VAR_5->wol;
 }
}
