
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmfe_board_info {scalar_t__ rx_avail_cnt; TYPE_1__* rx_ready_ptr; } ;
struct TYPE_2__ {struct TYPE_2__* next_rx_desc; int rx_skb_ptr; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dmfe_board_info * VAR_0)
{
 FUNC_0(0, "dmfe_free_rxbuffer()", 0);


 while (VAR_0->rx_avail_cnt) {
  FUNC_1(VAR_0->rx_ready_ptr->rx_skb_ptr);
  VAR_0->rx_ready_ptr = VAR_0->rx_ready_ptr->next_rx_desc;
  VAR_0->rx_avail_cnt--;
 }
}
