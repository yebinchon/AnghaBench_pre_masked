
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_rx_bd {void* addr_lo; void* addr_hi; } ;
struct bnx2x_fastpath {scalar_t__ rx_desc_mapping; struct eth_rx_bd* rx_desc_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x_fastpath *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++) {
  struct eth_rx_bd *VAR_5;

  VAR_5 = &VAR_3->rx_desc_ring[VAR_2 * VAR_4 - 2];
  VAR_5->addr_hi =
   FUNC_2(FUNC_0(VAR_3->rx_desc_mapping +
        VAR_0*(VAR_4 % VAR_1)));
  VAR_5->addr_lo =
   FUNC_2(FUNC_1(VAR_3->rx_desc_mapping +
        VAR_0*(VAR_4 % VAR_1)));
 }
}
