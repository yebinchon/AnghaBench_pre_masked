
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int get_link_status; } ;
struct e1000_adapter {int flags; int napi; scalar_t__ total_rx_packets; scalar_t__ total_rx_bytes; scalar_t__ total_tx_packets; scalar_t__ total_tx_bytes; int watchdog_task; struct e1000_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct e1000_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct e1000_adapter *VAR_10 = FUNC_7(VAR_9);
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 u32 VAR_12 = FUNC_3(VAR_2);

 if (FUNC_10((!VAR_12)))
  return VAR_5;






 if (FUNC_10(FUNC_9(VAR_6, &VAR_10->flags)))
  return VAR_4;

 if (FUNC_10(VAR_12 & (VAR_1 | VAR_0))) {
  VAR_11->get_link_status = 1;

  if (!FUNC_9(VAR_6, &VAR_10->flags))
   FUNC_8(&VAR_10->watchdog_task, 1);
 }


 FUNC_4(VAR_3, ~0);
 FUNC_0();

 if (FUNC_5(FUNC_6(&VAR_10->napi))) {
  VAR_10->total_tx_bytes = 0;
  VAR_10->total_tx_packets = 0;
  VAR_10->total_rx_bytes = 0;
  VAR_10->total_rx_packets = 0;
  FUNC_1(&VAR_10->napi);
 } else {


  if (!FUNC_9(VAR_6, &VAR_10->flags))
   FUNC_2(VAR_10);
 }

 return VAR_4;
}
