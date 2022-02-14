
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; int rx_csum; TYPE_2__* ahw; } ;
struct net_device {int features; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, u32 VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;

 if (VAR_7 & VAR_2) {
  if (VAR_6->features & VAR_3)
   return 0;

  if (!(VAR_8->ahw->capabilities & VAR_4))
   return -VAR_0;

  if (!VAR_8->rx_csum) {
   FUNC_0(&VAR_8->pdev->dev, "rx csum is off, "
    "cannot toggle lro\n");
   return -VAR_0;
  }

  VAR_9 = VAR_5;
  VAR_6->features |= VAR_3;
 } else {

  if (!(VAR_6->features & VAR_3))
   return 0;

  VAR_9 = 0;
  VAR_6->features &= ~VAR_3;
 }

 if (FUNC_3(VAR_8, VAR_9))
  return -VAR_1;

 if (!VAR_9 && FUNC_2(VAR_8)) {
  if (FUNC_4(VAR_8))
   return -VAR_1;
 }

 return 0;
}
