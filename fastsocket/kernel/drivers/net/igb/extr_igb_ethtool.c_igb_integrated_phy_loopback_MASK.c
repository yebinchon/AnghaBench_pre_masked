
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ id; } ;
struct TYPE_3__ {int autoneg; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct igb_adapter *VAR_13)
{
 struct e1000_hw *VAR_14 = &VAR_13->hw;
 u32 VAR_15 = 0;

 VAR_14->mac.autoneg = 0;

 if (VAR_14->phy.type == VAR_12) {
  if (VAR_14->phy.id != VAR_8) {

   FUNC_1(VAR_14, VAR_10, 0x0808);

   FUNC_1(VAR_14, VAR_11, 0x9140);

   FUNC_1(VAR_14, VAR_11, 0x8140);
  } else {

   FUNC_1(VAR_14, VAR_9, 0);
   FUNC_1(VAR_14, VAR_11, 0x4140);
  }
 }


 FUNC_3(50);


 FUNC_1(VAR_14, VAR_11, 0x4140);


 VAR_15 = FUNC_4(VAR_0);
 VAR_15 &= ~VAR_7;
 VAR_15 |= (VAR_3 |
       VAR_2 |
       VAR_6 |
       VAR_1 |
       VAR_5);

 if (VAR_14->phy.type == VAR_12)
  VAR_15 |= VAR_4;

 FUNC_5(VAR_0, VAR_15);




 if (VAR_14->phy.type == VAR_12)
  FUNC_0(VAR_13);

 FUNC_2(500);
 return 0;
}
