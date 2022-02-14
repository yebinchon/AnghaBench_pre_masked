
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int tx_queue_len; int features; int flags; scalar_t__ addr_len; scalar_t__ hard_header_len; int type; } ;
struct can_frame {int dummy; } ;


 int ARPHRD_CAN ;
 int IFF_NOARP ;
 int NETIF_F_NO_CSUM ;

__attribute__((used)) static void can_setup(struct net_device *dev)
{
 dev->type = ARPHRD_CAN;
 dev->mtu = sizeof(struct can_frame);
 dev->hard_header_len = 0;
 dev->addr_len = 0;
 dev->tx_queue_len = 10;


 dev->flags = IFF_NOARP;
 dev->features = NETIF_F_NO_CSUM;
}
