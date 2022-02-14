
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; int priv_flags; int flags; int tx_queue_len; int * netdev_ops; int destructor; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{

 VAR_7->destructor = VAR_5;
 VAR_7->netdev_ops = &VAR_6;


 FUNC_0(VAR_7);
 VAR_7->tx_queue_len = VAR_4;

 VAR_7->flags |= VAR_1;
 VAR_7->flags &= ~VAR_0;
 VAR_7->priv_flags &= ~VAR_3;
 FUNC_1(VAR_7)->ext_priv_flags &= ~VAR_2;
 FUNC_2(VAR_7->dev_addr);
}
