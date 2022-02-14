
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_adapter {int itr; scalar_t__ link_speed; int flags2; scalar_t__ tx_itr; int itr_setting; scalar_t__ rx_itr; TYPE_1__* rx_ring; scalar_t__ msix_entries; int total_rx_bytes; int total_rx_packets; int total_tx_bytes; int total_tx_packets; } ;
struct TYPE_2__ {int itr_val; int set_itr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 void* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct e1000_adapter*,int) ;


 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_2)
{
 u16 VAR_3;
 u32 VAR_4 = VAR_2->itr;


 if (VAR_2->link_speed != VAR_1) {
  VAR_3 = 0;
  VAR_4 = 4000;
  goto set_itr_now;
 }

 if (VAR_2->flags2 & VAR_0) {
  VAR_4 = 0;
  goto set_itr_now;
 }

 VAR_2->tx_itr = FUNC_0(VAR_2->tx_itr,
        VAR_2->total_tx_packets,
        VAR_2->total_tx_bytes);

 if (VAR_2->itr_setting == 3 && VAR_2->tx_itr == 128)
  VAR_2->tx_itr = 129;

 VAR_2->rx_itr = FUNC_0(VAR_2->rx_itr,
        VAR_2->total_rx_packets,
        VAR_2->total_rx_bytes);

 if (VAR_2->itr_setting == 3 && VAR_2->rx_itr == 128)
  VAR_2->rx_itr = 129;

 VAR_3 = FUNC_2(VAR_2->rx_itr, VAR_2->tx_itr);


 switch (VAR_3) {
 case 128:
  VAR_4 = 70000;
  break;
 case 129:
  VAR_4 = 20000;
  break;
 case 130:
  VAR_4 = 4000;
  break;
 default:
  break;
 }

set_itr_now:
 if (VAR_4 != VAR_2->itr) {




  VAR_4 = VAR_4 > VAR_2->itr ?
      FUNC_3(VAR_2->itr + (VAR_4 >> 2), VAR_4) : VAR_4;
  VAR_2->itr = VAR_4;
  VAR_2->rx_ring->itr_val = VAR_4;
  if (VAR_2->msix_entries)
   VAR_2->rx_ring->set_itr = 1;
  else
   FUNC_1(VAR_2, VAR_4);
 }
}
