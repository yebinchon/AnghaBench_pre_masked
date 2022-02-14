
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct igbvf_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 struct igbvf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct igbvf_adapter *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3) {
  VAR_2->features |= VAR_0;
  VAR_2->features |= VAR_1;
 } else {
  VAR_2->features &= ~VAR_0;
  VAR_2->features &= ~VAR_1;
 }

 FUNC_0(&VAR_4->pdev->dev, "TSO is %s\n",
          VAR_3 ? "Enabled" : "Disabled");
 return 0;
}
