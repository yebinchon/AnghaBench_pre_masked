
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igbvf_ring {int eims_value; scalar_t__ set_itr; scalar_t__ itr_register; int itr_val; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct igbvf_adapter {scalar_t__ total_tx_packets; scalar_t__ total_tx_bytes; struct igbvf_ring* tx_ring; struct e1000_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct igbvf_ring*) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct igbvf_adapter *VAR_6 = FUNC_2(VAR_5);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 struct igbvf_ring *VAR_8 = VAR_6->tx_ring;

 if (VAR_8->set_itr) {
  FUNC_3(VAR_8->itr_val,
         VAR_6->hw.hw_addr + VAR_8->itr_register);
  VAR_6->tx_ring->set_itr = 0;
 }

 VAR_6->total_tx_bytes = 0;
 VAR_6->total_tx_packets = 0;



 if (!FUNC_1(VAR_8))

  FUNC_0(VAR_0, VAR_8->eims_value);
 else
  FUNC_0(VAR_1, VAR_8->eims_value);

 return VAR_2;
}
