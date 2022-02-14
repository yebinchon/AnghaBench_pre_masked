
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; int rx_csum; TYPE_1__* pdev; } ;
struct net_device {int features; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, u32 VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_1(VAR_7);

 if ((VAR_9->flags & VAR_3 &&
     FUNC_2(VAR_9)))
  return -VAR_1;
 if (!!VAR_8) {
  VAR_9->rx_csum = !!VAR_8;
  if (VAR_9->flags & VAR_6) {
   if (FUNC_3(VAR_9, VAR_5))
    return -VAR_0;
   VAR_7->features |= VAR_2;
   FUNC_0(&VAR_9->pdev->dev,
     "Enabling LRO as Rx checksum is on\n");
  }
  return 0;
 }

 if (VAR_7->features & VAR_2) {
  if (FUNC_3(VAR_9, VAR_4))
   return -VAR_0;

  VAR_7->features &= ~VAR_2;
  FUNC_4(VAR_9);
  FUNC_0(&VAR_9->pdev->dev,
    "Disabling LRO as rx_csum is off\n");
  VAR_9->flags |= VAR_6;
 }
 VAR_9->rx_csum = !!VAR_8;
 return 0;
}
