
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_asy {int flags; int lock; struct net_device* dev; int magic; } ;
struct net_device {int watchdog_timeo; int tx_queue_len; int flags; int type; scalar_t__ addr_len; scalar_t__ hard_header_len; int * netdev_ops; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct x25_asy* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
 struct x25_asy *VAR_8 = FUNC_0(VAR_7);

 VAR_8->magic = VAR_5;
 VAR_8->dev = VAR_7;
 FUNC_2(&VAR_8->lock);
 FUNC_1(VAR_3, &VAR_8->flags);





 VAR_7->mtu = VAR_4;
 VAR_7->netdev_ops = &VAR_6;
 VAR_7->watchdog_timeo = VAR_1*20;
 VAR_7->hard_header_len = 0;
 VAR_7->addr_len = 0;
 VAR_7->type = VAR_0;
 VAR_7->tx_queue_len = 10;


 VAR_7->flags = VAR_2;
}
