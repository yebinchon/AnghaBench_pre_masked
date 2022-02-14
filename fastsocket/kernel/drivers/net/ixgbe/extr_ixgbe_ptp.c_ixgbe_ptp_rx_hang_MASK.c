
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_ring {unsigned long last_rx_timestamp; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {unsigned long last_rx_ptp_check; int num_rx_queues; struct ixgbe_ring** rx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;

void FUNC_4(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 struct ixgbe_ring *VAR_8;
 u32 VAR_9 = FUNC_0(VAR_7, VAR_2);
 unsigned long VAR_10;
 int VAR_11;




 if (!(VAR_9 & VAR_3)) {
  VAR_6->last_rx_ptp_check = VAR_5;
  return;
 }


 VAR_10 = VAR_6->last_rx_ptp_check;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_rx_queues; VAR_11++) {
  VAR_8 = VAR_6->rx_ring[VAR_11];
  if (FUNC_2(VAR_8->last_rx_timestamp, VAR_10))
   VAR_10 = VAR_8->last_rx_timestamp;
 }


 if (FUNC_3(VAR_10 + 5*VAR_0)) {
  FUNC_0(VAR_7, VAR_1);
  VAR_6->last_rx_ptp_check = VAR_5;

  FUNC_1(VAR_4, "clearing RX Timestamp hang");
 }
}
