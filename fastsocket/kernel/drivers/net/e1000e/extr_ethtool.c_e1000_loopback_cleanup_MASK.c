
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* commit ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; int type; int media_type; } ;
struct TYPE_4__ {int type; int autoneg; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {int tx_fifo_head; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct e1000_adapter *VAR_12)
{
 struct e1000_hw *VAR_13 = &VAR_12->hw;
 u32 VAR_14;
 u16 VAR_15;

 VAR_14 = FUNC_3(VAR_7);
 VAR_14 &= ~(VAR_3 | VAR_2);
 FUNC_4(VAR_7, VAR_14);

 switch (VAR_13->mac.type) {
 case 130:
  if (VAR_13->phy.media_type == VAR_9 ||
      VAR_13->phy.media_type == VAR_10) {

   FUNC_4(VAR_1, VAR_12->tx_fifo_head);
   VAR_12->tx_fifo_head = 0;
  }

 case 129:
 case 128:
  if (VAR_13->phy.media_type == VAR_9 ||
      VAR_13->phy.media_type == VAR_10) {
   FUNC_4(VAR_8, VAR_4);
   FUNC_0();
   FUNC_6(10000, 20000);
   break;
  }

 default:
  VAR_13->mac.autoneg = 1;
  if (VAR_13->phy.type == VAR_11)
   FUNC_2(VAR_13, VAR_5, 0x180);
  FUNC_1(VAR_13, VAR_6, &VAR_15);
  if (VAR_15 & VAR_0) {
   VAR_15 &= ~VAR_0;
   FUNC_2(VAR_13, VAR_6, VAR_15);
   if (VAR_13->phy.ops.commit)
    VAR_13->phy.ops.commit(VAR_13);
  }
  break;
 }
}
