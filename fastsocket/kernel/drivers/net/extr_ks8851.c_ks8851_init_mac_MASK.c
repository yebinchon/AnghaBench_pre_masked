
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct ks8851_net {struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ks8851_net *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_1(VAR_1->dev_addr);
 FUNC_0(VAR_1);
}
