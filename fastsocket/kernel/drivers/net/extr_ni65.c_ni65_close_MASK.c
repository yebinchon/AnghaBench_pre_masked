
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int ** tmd_skb; } ;
struct net_device {int irq; struct priv* ml_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct priv *VAR_4 = VAR_3->ml_priv;

 FUNC_3(VAR_3);

 FUNC_4(FUNC_2(VAR_1+VAR_0),VAR_1+VAR_0);
 FUNC_1(VAR_3->irq,VAR_3);
 return 0;
}
