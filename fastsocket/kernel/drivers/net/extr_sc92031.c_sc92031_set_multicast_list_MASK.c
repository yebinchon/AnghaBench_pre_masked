
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 struct sc92031_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct sc92031_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->lock);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2();

 FUNC_5(&VAR_1->lock);
}
