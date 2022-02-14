
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmfe_board_info {int cr6_data; scalar_t__ wait_reset; scalar_t__ rx_avail_cnt; scalar_t__ tx_queue_cnt; scalar_t__ tx_packet_cnt; } ;
struct DEVICE {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dmfe_board_info*) ;
 int FUNC_2 (struct DEVICE*) ;
 int FUNC_3 (scalar_t__) ;
 struct dmfe_board_info* FUNC_4 (struct DEVICE*) ;
 int FUNC_5 (struct DEVICE*) ;
 int FUNC_6 (struct DEVICE*) ;
 int FUNC_7 (struct DEVICE*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct DEVICE *VAR_4)
{
 struct dmfe_board_info *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(0, "dmfe_dynamic_reset()", 0);


 VAR_5->cr6_data &= ~(VAR_0 | VAR_1);
 FUNC_9(VAR_5->cr6_data, VAR_4->base_addr);
 FUNC_8(0, VAR_4->base_addr + VAR_3);
 FUNC_8(FUNC_3(VAR_4->base_addr + VAR_2), VAR_4->base_addr + VAR_2);


 FUNC_6(VAR_4);


 FUNC_1(VAR_5);


 VAR_5->tx_packet_cnt = 0;
 VAR_5->tx_queue_cnt = 0;
 VAR_5->rx_avail_cnt = 0;
 FUNC_5(VAR_4);
 VAR_5->wait_reset = 0;


 FUNC_2(VAR_4);


 FUNC_7(VAR_4);
}
