
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igb_ring {unsigned long last_rx_timestamp; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {unsigned long last_rx_ptp_check; int num_rx_queues; TYPE_2__* pdev; int rx_hwtstamp_cleared; struct igb_ring** rx_ring; struct e1000_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;

void FUNC_4(struct igb_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 struct igb_ring *VAR_8;
 u32 VAR_9 = FUNC_1(VAR_1);
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_7->mac.type != VAR_4)
  return;




 if (!(VAR_9 & VAR_2)) {
  VAR_6->last_rx_ptp_check = VAR_5;
  return;
 }


 VAR_10 = VAR_6->last_rx_ptp_check;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_rx_queues; VAR_11++) {
  VAR_8 = VAR_6->rx_ring[VAR_11];
  if (FUNC_2(VAR_8->last_rx_timestamp, VAR_10))
   VAR_10 = VAR_8->last_rx_timestamp;
 }


 if (FUNC_3(VAR_10 + 5 * VAR_3)) {
  FUNC_1(VAR_0);
  VAR_6->last_rx_ptp_check = VAR_5;
  VAR_6->rx_hwtstamp_cleared++;
  FUNC_0(&VAR_6->pdev->dev, "clearing Rx timestamp hang");
 }
}
