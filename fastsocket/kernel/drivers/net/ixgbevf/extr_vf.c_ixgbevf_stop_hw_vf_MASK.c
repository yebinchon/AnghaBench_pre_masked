
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ max_rx_queues; scalar_t__ max_tx_queues; } ;
struct ixgbe_hw {int adapter_stopped; TYPE_1__ mac; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u16 VAR_8;





 VAR_5->adapter_stopped = 1;


 VAR_6 = VAR_5->mac.max_rx_queues;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, FUNC_1(VAR_8));
  if (VAR_7 & VAR_0) {
   VAR_7 &= ~VAR_0;
   FUNC_4(VAR_5, FUNC_1(VAR_8), VAR_7);
  }
 }

 FUNC_3(VAR_5);


 FUNC_4(VAR_5, VAR_4, VAR_2);


 FUNC_0(VAR_5, VAR_3);


 VAR_6 = VAR_5->mac.max_tx_queues;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, FUNC_2(VAR_8));
  if (VAR_7 & VAR_1) {
   VAR_7 &= ~VAR_1;
   FUNC_4(VAR_5, FUNC_2(VAR_8), VAR_7);
  }
 }

 return 0;
}
