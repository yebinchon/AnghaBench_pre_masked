
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netdev_private {scalar_t__ base; } ;
struct net_device {int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct netdev_private *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3;

 VAR_3 = (VAR_1->dev_addr[0] | (VAR_1->dev_addr[1] << 8));
 FUNC_0(VAR_3, VAR_2->base + VAR_0);
 VAR_3 = (VAR_1->dev_addr[2] | (VAR_1->dev_addr[3] << 8));
 FUNC_0(VAR_3, VAR_2->base + VAR_0+2);
 VAR_3 = (VAR_1->dev_addr[4] | (VAR_1->dev_addr[5] << 8));
 FUNC_0(VAR_3, VAR_2->base + VAR_0+4);
 return 0;
}
