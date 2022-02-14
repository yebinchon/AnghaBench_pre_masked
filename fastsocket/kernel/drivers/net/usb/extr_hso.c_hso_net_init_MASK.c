
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int tx_queue_len; scalar_t__ mtu; int type; int watchdog_timeo; int * netdev_ops; } ;
struct hso_net {int net_lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_6 ;
 struct hso_net* FUNC_2 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8)
{
 struct hso_net *VAR_9 = FUNC_2(VAR_8);

 FUNC_0("sizeof hso_net is %d", (int)sizeof(*VAR_9));


 VAR_8->netdev_ops = &VAR_6;
 VAR_8->watchdog_timeo = VAR_2;
 VAR_8->flags = VAR_5 | VAR_4 | VAR_3;
 VAR_8->type = VAR_0;
 VAR_8->mtu = VAR_1 - 14;
 VAR_8->tx_queue_len = 10;
 FUNC_1(VAR_8, &VAR_7);


 FUNC_3(&VAR_9->net_lock);
}
