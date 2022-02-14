
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int lock; TYPE_2__* mac_type; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_filter ) (struct net_device*) ;} ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct stmmac_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 VAR_1->mac_type->ops->set_filter(VAR_0);
 FUNC_2(&VAR_1->lock);
 return;
}
