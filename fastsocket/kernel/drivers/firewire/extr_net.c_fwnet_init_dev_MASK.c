
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int flags; int tx_queue_len; int type; int hard_header_len; int addr_len; int features; int * netdev_ops; int * header_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_10)
{
 VAR_10->header_ops = &VAR_8;
 VAR_10->netdev_ops = &VAR_9;
 VAR_10->watchdog_timeo = 2 * VAR_3;
 VAR_10->flags = VAR_4 | VAR_5;
 VAR_10->features = VAR_6;
 VAR_10->addr_len = VAR_1;
 VAR_10->hard_header_len = VAR_2;
 VAR_10->type = VAR_0;
 VAR_10->tx_queue_len = 10;
 FUNC_0(VAR_10, &VAR_7);
}
