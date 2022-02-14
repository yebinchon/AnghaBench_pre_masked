
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int dummy; } ;
struct net_device {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_local*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct net_local *VAR_1 = (struct net_local *) FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_3(VAR_1);
 FUNC_0(VAR_0->irq, VAR_0);

 return 0;
}
