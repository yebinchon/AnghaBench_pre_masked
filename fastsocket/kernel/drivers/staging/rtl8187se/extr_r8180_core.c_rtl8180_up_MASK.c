
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int up; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->up == 1) return -1;

 return FUNC_0(VAR_0);
}
