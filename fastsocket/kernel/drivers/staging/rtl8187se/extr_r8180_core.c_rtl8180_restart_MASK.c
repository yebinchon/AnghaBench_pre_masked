
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int reset_wq; } ;
struct net_device {int dummy; } ;


 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->reset_wq);
}
