
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fs_enet_private {int interrupt; int * phydev; int lock; int tx_lock; TYPE_2__* ops; int napi; TYPE_1__* fpi; } ;
struct TYPE_4__ {int (* stop ) (struct net_device*) ;} ;
struct TYPE_3__ {scalar_t__ use_napi; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct fs_enet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 if (VAR_1->fpi->use_napi)
  FUNC_1(&VAR_1->napi);
 FUNC_6(VAR_1->phydev);

 FUNC_8(&VAR_1->lock, VAR_2);
 FUNC_7(&VAR_1->tx_lock);
 (*VAR_1->ops->stop)(VAR_0);
 FUNC_9(&VAR_1->tx_lock);
 FUNC_10(&VAR_1->lock, VAR_2);


 FUNC_5(VAR_1->phydev);
 VAR_1->phydev = ((void*)0);
 FUNC_0(VAR_1->interrupt, VAR_0);

 return 0;
}
