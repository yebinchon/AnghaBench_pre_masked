
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int wol; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 struct vmxnet3_adapter *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6->wolopts & (VAR_4 | VAR_3 | VAR_1 |
       VAR_2)) {
  return -VAR_0;
 }

 VAR_7->wol = VAR_6->wolopts;

 FUNC_0(&VAR_7->pdev->dev, VAR_7->wol);

 return 0;
}
