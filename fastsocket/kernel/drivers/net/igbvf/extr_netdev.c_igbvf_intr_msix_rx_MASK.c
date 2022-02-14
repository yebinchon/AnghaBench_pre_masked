
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;
struct igbvf_adapter {TYPE_2__* rx_ring; scalar_t__ total_rx_packets; scalar_t__ total_rx_bytes; TYPE_1__ hw; int int_counter0; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int napi; scalar_t__ set_itr; scalar_t__ itr_register; int itr_val; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct igbvf_adapter *VAR_4 = FUNC_2(VAR_3);

 VAR_4->int_counter0++;




 if (VAR_4->rx_ring->set_itr) {
  FUNC_3(VAR_4->rx_ring->itr_val,
         VAR_4->hw.hw_addr + VAR_4->rx_ring->itr_register);
  VAR_4->rx_ring->set_itr = 0;
 }

 if (FUNC_1(&VAR_4->rx_ring->napi)) {
  VAR_4->total_rx_bytes = 0;
  VAR_4->total_rx_packets = 0;
  FUNC_0(&VAR_4->rx_ring->napi);
 }

 return VAR_0;
}
