
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int lock; int hands_off; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct netdev_private *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->lock);
 if (!VAR_1->hands_off)
  FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
}
