
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_counter {int rx_frames; int tx_frames; int rx_bytes; int tx_bytes; } ;
struct ib_pma_portcounters {void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_counter *VAR_0,
     struct ib_pma_portcounters *VAR_1)
{
 VAR_1->port_xmit_data = FUNC_1((FUNC_0(VAR_0->tx_bytes)>>2));
 VAR_1->port_rcv_data = FUNC_1((FUNC_0(VAR_0->rx_bytes)>>2));
 VAR_1->port_xmit_packets = FUNC_1(FUNC_0(VAR_0->tx_frames));
 VAR_1->port_rcv_packets = FUNC_1(FUNC_0(VAR_0->rx_frames));
}
