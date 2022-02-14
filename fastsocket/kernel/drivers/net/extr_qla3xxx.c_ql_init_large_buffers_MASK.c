
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_rcv_buf_cb {int buf_phy_addr_low; int buf_phy_addr_high; } ;
struct ql3_adapter {int num_large_buffers; scalar_t__ lrg_buf_skb_check; scalar_t__ lrg_buf_index; struct ql_rcv_buf_cb* lrg_buf; struct bufq_addr_element* lrg_buf_q_virt_addr; } ;
struct bufq_addr_element {int addr_low; int addr_high; } ;



__attribute__((used)) static void FUNC_0(struct ql3_adapter *VAR_0)
{
 int VAR_1;
 struct ql_rcv_buf_cb *VAR_2;
 struct bufq_addr_element *VAR_3 = VAR_0->lrg_buf_q_virt_addr;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_large_buffers; VAR_1++) {
  VAR_2 = &VAR_0->lrg_buf[VAR_1];
  VAR_3->addr_high = VAR_2->buf_phy_addr_high;
  VAR_3->addr_low = VAR_2->buf_phy_addr_low;
  VAR_3++;
 }
 VAR_0->lrg_buf_index = 0;
 VAR_0->lrg_buf_skb_check = 0;
}
