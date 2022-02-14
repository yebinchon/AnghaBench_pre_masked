
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ max_tx_queues; scalar_t__ max_rx_queues; } ;
struct ixgbe_hw {int adapter_stopped; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (int,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;





 VAR_7->adapter_stopped = 1;


 FUNC_4(VAR_7, VAR_3, 0);


 FUNC_4(VAR_7, VAR_1, VAR_2);


 FUNC_0(VAR_7, VAR_0);


 for (VAR_9 = 0; VAR_9 < VAR_7->mac.max_tx_queues; VAR_9++)
  FUNC_4(VAR_7, FUNC_2(VAR_9), VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_7->mac.max_rx_queues; VAR_9++) {
  VAR_8 = FUNC_0(VAR_7, FUNC_1(VAR_9));
  VAR_8 &= ~VAR_4;
  VAR_8 |= VAR_5;
  FUNC_4(VAR_7, FUNC_1(VAR_9), VAR_8);
 }


 FUNC_3(VAR_7);
 FUNC_6(1000, 2000);





 return FUNC_5(VAR_7);
}
