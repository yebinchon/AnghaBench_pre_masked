
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ irq_enabled; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_1(VAR_1);

 FUNC_2(VAR_1,VAR_0,0);
 FUNC_0(VAR_1);
 VAR_2->irq_enabled = 0;
}
