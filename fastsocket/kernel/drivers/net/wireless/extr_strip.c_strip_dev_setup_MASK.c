
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int hard_header_len; int addr_len; int * netdev_ops; int * header_ops; scalar_t__* dev_addr; scalar_t__ broadcast; int type; int mtu; scalar_t__ flags; scalar_t__ trans_start; } ;
typedef int STRIP_Header ;
typedef int MetricomAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{




 VAR_5->trans_start = 0;
 VAR_5->tx_queue_len = 30;

 VAR_5->flags = 0;
 VAR_5->mtu = VAR_1;
 VAR_5->type = VAR_0;
 VAR_5->hard_header_len = sizeof(STRIP_Header);




 *(MetricomAddress *)VAR_5->broadcast = VAR_2;
 VAR_5->dev_addr[0] = 0;
 VAR_5->addr_len = sizeof(MetricomAddress);

 VAR_5->header_ops = &VAR_3,
 VAR_5->netdev_ops = &VAR_4;
}
