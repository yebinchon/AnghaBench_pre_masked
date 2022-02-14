
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netiucv_priv {int tbusy; } ;
struct net_device {int dummy; } ;


 struct netiucv_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_0)
{
 struct netiucv_priv *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 return FUNC_2(0, &VAR_1->tbusy);
}
