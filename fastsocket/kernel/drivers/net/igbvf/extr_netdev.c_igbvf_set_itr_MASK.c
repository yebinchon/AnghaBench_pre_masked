
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct igbvf_adapter {int requested_itr; TYPE_2__* rx_ring; int total_rx_bytes; int total_rx_packets; TYPE_1__* tx_ring; int total_tx_bytes; int total_tx_packets; } ;
struct TYPE_4__ {scalar_t__ itr_range; scalar_t__ itr_val; int set_itr; } ;
struct TYPE_3__ {scalar_t__ itr_range; scalar_t__ itr_val; int set_itr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (struct igbvf_adapter*,scalar_t__,int ,int ) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct igbvf_adapter *VAR_2)
{
 u32 VAR_3;

 VAR_2->tx_ring->itr_range =
   FUNC_1(VAR_2,
      VAR_2->tx_ring->itr_val,
      VAR_2->total_tx_packets,
      VAR_2->total_tx_bytes);


 if (VAR_2->requested_itr == 3 &&
     VAR_2->tx_ring->itr_range == VAR_1)
  VAR_2->tx_ring->itr_range = VAR_0;

 VAR_3 = FUNC_0(VAR_2->tx_ring->itr_range);


 if (VAR_3 != VAR_2->tx_ring->itr_val) {
  u32 VAR_4 = VAR_2->tx_ring->itr_val;





  VAR_3 = VAR_3 > VAR_4 ?
        FUNC_2(VAR_4 + (VAR_3 >> 2), VAR_3) :
        VAR_3;
  VAR_2->tx_ring->itr_val = VAR_3;

  VAR_2->tx_ring->set_itr = 1;
 }

 VAR_2->rx_ring->itr_range =
   FUNC_1(VAR_2, VAR_2->rx_ring->itr_val,
      VAR_2->total_rx_packets,
      VAR_2->total_rx_bytes);
 if (VAR_2->requested_itr == 3 &&
     VAR_2->rx_ring->itr_range == VAR_1)
  VAR_2->rx_ring->itr_range = VAR_0;

 VAR_3 = FUNC_0(VAR_2->rx_ring->itr_range);

 if (VAR_3 != VAR_2->rx_ring->itr_val) {
  u32 VAR_5 = VAR_2->rx_ring->itr_val;
  VAR_3 = VAR_3 > VAR_5 ?
        FUNC_2(VAR_5 + (VAR_3 >> 2), VAR_3) :
        VAR_3;
  VAR_2->rx_ring->itr_val = VAR_3;

  VAR_2->rx_ring->set_itr = 1;
 }
}
