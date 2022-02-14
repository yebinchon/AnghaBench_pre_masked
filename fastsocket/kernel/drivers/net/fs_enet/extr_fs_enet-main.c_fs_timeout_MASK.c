
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_3__ {int tx_errors; } ;
struct fs_enet_private {int lock; int cur_tx; scalar_t__ tx_free; int phydev; TYPE_2__* ops; TYPE_1__ stats; } ;
struct TYPE_4__ {int (* restart ) (struct net_device*) ;int (* stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2)
{
 struct fs_enet_private *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;
 int VAR_5 = 0;

 VAR_3->stats.tx_errors++;

 FUNC_5(&VAR_3->lock, VAR_4);

 if (VAR_2->flags & VAR_1) {
  FUNC_4(VAR_3->phydev);
  (*VAR_3->ops->stop)(VAR_2);
  (*VAR_3->ops->restart)(VAR_2);
  FUNC_3(VAR_3->phydev);
 }

 FUNC_3(VAR_3->phydev);
 VAR_5 = VAR_3->tx_free && !(FUNC_0(VAR_3->cur_tx) & VAR_0);
 FUNC_6(&VAR_3->lock, VAR_4);

 if (VAR_5)
  FUNC_2(VAR_2);
}
