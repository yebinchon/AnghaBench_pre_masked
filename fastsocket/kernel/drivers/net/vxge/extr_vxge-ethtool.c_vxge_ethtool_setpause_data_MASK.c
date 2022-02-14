
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_pause_enable; int tx_pause_enable; } ;
struct vxgedev {TYPE_1__ config; int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; } ;
struct __vxge_hw_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct __vxge_hw_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
     struct ethtool_pauseparam *VAR_1)
{
 struct vxgedev *VAR_2 = (struct vxgedev *)FUNC_0(VAR_0);
 struct __vxge_hw_device *VAR_3 = (struct __vxge_hw_device *)
   FUNC_1(VAR_2->pdev);

 FUNC_2(VAR_3, 0, VAR_1->tx_pause, VAR_1->rx_pause);

 VAR_2->config.tx_pause_enable = VAR_1->tx_pause;
 VAR_2->config.rx_pause_enable = VAR_1->rx_pause;

 return 0;
}
