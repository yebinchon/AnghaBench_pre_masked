
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct device {int dummy; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->irq, VAR_1);
 return 0;
}
