
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needed_tailroom; int mtu; int tx_queue_len; int flags; int destructor; scalar_t__ watchdog_timeo; int type; int features; int broadcast; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{
 VAR_6->addr_len = VAR_1;
 FUNC_0(VAR_6->broadcast, 0xff, VAR_1);
 VAR_6->features = VAR_4;
 VAR_6->needed_tailroom = 2;
 VAR_6->mtu = 127;
 VAR_6->tx_queue_len = 10;
 VAR_6->type = VAR_0;
 VAR_6->flags = VAR_3 | VAR_2;
 VAR_6->watchdog_timeo = 0;
 VAR_6->destructor = VAR_5;
}
