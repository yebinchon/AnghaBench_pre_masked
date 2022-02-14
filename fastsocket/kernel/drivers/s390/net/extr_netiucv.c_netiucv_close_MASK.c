
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netiucv_priv {int fsm; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct net_device*) ;
 struct netiucv_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct netiucv_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->fsm, VAR_0, VAR_1);
 return 0;
}
