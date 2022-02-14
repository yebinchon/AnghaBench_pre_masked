
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_struct {int flags; } ;
struct net_device {int mtu; int flags; void* tx_queue_len; int dev_addr; int * netdev_ops; int type; int addr_len; int hard_header_len; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct tun_struct* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9)
{
 struct tun_struct *VAR_10 = FUNC_2(VAR_9);

 switch (VAR_10->flags & VAR_6) {
 case 128:
  VAR_9->netdev_ops = &VAR_8;


  VAR_9->hard_header_len = 0;
  VAR_9->addr_len = 0;
  VAR_9->mtu = 1500;


  VAR_9->type = VAR_0;
  VAR_9->flags = VAR_3 | VAR_2 | VAR_1;
  VAR_9->tx_queue_len = VAR_5;
  break;

 case 129:
  VAR_9->netdev_ops = &VAR_7;

  FUNC_0(VAR_9);
  FUNC_1(VAR_9)->ext_priv_flags &= ~VAR_4;

  FUNC_3(VAR_9->dev_addr);

  VAR_9->tx_queue_len = VAR_5;
  break;
 }
}
