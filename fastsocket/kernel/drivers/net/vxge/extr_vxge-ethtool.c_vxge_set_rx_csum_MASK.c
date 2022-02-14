
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vxgedev {int rx_csum; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct vxgedev *VAR_2 = (struct vxgedev *)FUNC_0(VAR_0);

 if (VAR_1)
  VAR_2->rx_csum = 1;
 else
  VAR_2->rx_csum = 0;

 return 0;
}
