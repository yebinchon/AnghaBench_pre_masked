
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; int type; scalar_t__ tx_queue_len; int destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 VAR_4->netdev_ops = &VAR_3;
 VAR_4->destructor = VAR_2;
 FUNC_0(VAR_4);
 VAR_4->tx_queue_len = 0;
 VAR_4->type = VAR_0;
 FUNC_1(VAR_4->dev_addr, 0, VAR_1);
 VAR_4->dev_addr[0] = 0x12;
}
