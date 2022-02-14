
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uli526x_board_info {int cr6_data; int link_failed; int init; scalar_t__ wait_reset; scalar_t__ rx_avail_cnt; scalar_t__ tx_packet_cnt; } ;
struct net_device {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct uli526x_board_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct uli526x_board_info*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct uli526x_board_info *VAR_5 = FUNC_1(VAR_4);


 VAR_5->cr6_data &= ~(VAR_0 | VAR_1);
 FUNC_5(VAR_5->cr6_data, VAR_4->base_addr);
 FUNC_3(0, VAR_4->base_addr + VAR_3);
 FUNC_3(FUNC_0(VAR_4->base_addr + VAR_2), VAR_4->base_addr + VAR_2);


 FUNC_2(VAR_4);


 FUNC_4(VAR_5);


 VAR_5->tx_packet_cnt = 0;
 VAR_5->rx_avail_cnt = 0;
 VAR_5->link_failed = 1;
 VAR_5->init=1;
 VAR_5->wait_reset = 0;
}
