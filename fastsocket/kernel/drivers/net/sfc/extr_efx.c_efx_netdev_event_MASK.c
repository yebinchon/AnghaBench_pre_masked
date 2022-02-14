
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int * netdev_ops; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;

 if (VAR_6->netdev_ops == &VAR_2 &&
     VAR_4 == VAR_0)
  FUNC_0(FUNC_1(VAR_6));

 return VAR_1;
}
