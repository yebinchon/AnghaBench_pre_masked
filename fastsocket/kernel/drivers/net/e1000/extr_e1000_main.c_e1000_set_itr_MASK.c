
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int itr; scalar_t__ link_speed; scalar_t__ tx_itr; int itr_setting; scalar_t__ rx_itr; int total_rx_bytes; int total_rx_packets; int total_tx_bytes; int total_tx_packets; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct e1000_adapter*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int) ;


 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 u16 VAR_5;
 u32 VAR_6 = VAR_3->itr;

 if (FUNC_4(VAR_4->mac_type < VAR_2))
  return;


 if (FUNC_4(VAR_3->link_speed != VAR_1)) {
  VAR_5 = 0;
  VAR_6 = 4000;
  goto set_itr_now;
 }

 VAR_3->tx_itr = FUNC_0(VAR_3,
                             VAR_3->tx_itr,
                             VAR_3->total_tx_packets,
                             VAR_3->total_tx_bytes);

 if (VAR_3->itr_setting == 3 && VAR_3->tx_itr == 128)
  VAR_3->tx_itr = 129;

 VAR_3->rx_itr = FUNC_0(VAR_3,
                             VAR_3->rx_itr,
                             VAR_3->total_rx_packets,
                             VAR_3->total_rx_bytes);

 if (VAR_3->itr_setting == 3 && VAR_3->rx_itr == 128)
  VAR_3->rx_itr = 129;

 VAR_5 = FUNC_2(VAR_3->rx_itr, VAR_3->tx_itr);

 switch (VAR_5) {

 case 128:
  VAR_6 = 70000;
  break;
 case 129:
  VAR_6 = 20000;
  break;
 case 130:
  VAR_6 = 4000;
  break;
 default:
  break;
 }

set_itr_now:
 if (VAR_6 != VAR_3->itr) {



  VAR_6 = VAR_6 > VAR_3->itr ?
               FUNC_3(VAR_3->itr + (VAR_6 >> 2), VAR_6) :
               VAR_6;
  VAR_3->itr = VAR_6;
  FUNC_1(VAR_0, 1000000000 / (VAR_6 * 256));
 }
}
