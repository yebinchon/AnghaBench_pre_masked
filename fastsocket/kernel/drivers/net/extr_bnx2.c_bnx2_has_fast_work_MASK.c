
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_tx_ring_info {scalar_t__ hw_tx_cons; } ;
struct bnx2_rx_ring_info {scalar_t__ rx_cons; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; struct bnx2_tx_ring_info tx_ring; } ;


 scalar_t__ FUNC_0 (struct bnx2_napi*) ;
 scalar_t__ FUNC_1 (struct bnx2_napi*) ;

__attribute__((used)) static inline int
FUNC_2(struct bnx2_napi *VAR_0)
{
 struct bnx2_tx_ring_info *VAR_1 = &VAR_0->tx_ring;
 struct bnx2_rx_ring_info *VAR_2 = &VAR_0->rx_ring;

 if ((FUNC_0(VAR_0) != VAR_2->rx_cons) ||
     (FUNC_1(VAR_0) != VAR_1->hw_tx_cons))
  return 1;
 return 0;
}
