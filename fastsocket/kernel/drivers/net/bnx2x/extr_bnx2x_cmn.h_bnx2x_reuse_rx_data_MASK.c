
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sw_rx_bd {int data; } ;
struct eth_rx_bd {int dummy; } ;
struct bnx2x_fastpath {struct eth_rx_bd* rx_desc_ring; struct sw_rx_bd* rx_buf_ring; } ;


 int FUNC_0 (struct sw_rx_bd*,int ) ;
 int FUNC_1 (struct sw_rx_bd*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x_fastpath *VAR_1,
          u16 VAR_2, u16 VAR_3)
{
 struct sw_rx_bd *VAR_4 = &VAR_1->rx_buf_ring[VAR_2];
 struct sw_rx_bd *VAR_5 = &VAR_1->rx_buf_ring[VAR_3];
 struct eth_rx_bd *VAR_6 = &VAR_1->rx_desc_ring[VAR_2];
 struct eth_rx_bd *VAR_7 = &VAR_1->rx_desc_ring[VAR_3];

 FUNC_1(VAR_5, VAR_0,
      FUNC_0(VAR_4, VAR_0));
 VAR_5->data = VAR_4->data;
 *VAR_7 = *VAR_6;
}
