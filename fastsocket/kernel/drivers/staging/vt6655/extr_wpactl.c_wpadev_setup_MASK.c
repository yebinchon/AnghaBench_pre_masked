
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int tx_queue_len; int flags; int broadcast; int addr_len; int hard_header_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5)
{
 VAR_5->type = VAR_0;
 VAR_5->hard_header_len = VAR_2;
 VAR_5->mtu = 2048;
 VAR_5->addr_len = VAR_1;
 VAR_5->tx_queue_len = 1000;

 FUNC_0(VAR_5->broadcast,0xFF, VAR_1);

 VAR_5->flags = VAR_3|VAR_4;
}
