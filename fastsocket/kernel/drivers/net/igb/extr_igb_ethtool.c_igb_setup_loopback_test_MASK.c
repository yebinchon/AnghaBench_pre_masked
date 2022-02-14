
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct igb_adapter *VAR_33)
{
 struct e1000_hw *VAR_34 = &VAR_33->hw;
 u32 VAR_35;

 VAR_35 = FUNC_1(VAR_3);


 if (VAR_35 & VAR_4) {
  if ((VAR_34->device_id == VAR_13) ||
  (VAR_34->device_id == VAR_11) ||
  (VAR_34->device_id == VAR_10) ||
  (VAR_34->device_id == VAR_12)) {


   VAR_35 = FUNC_1(VAR_15);
   VAR_35 = (VAR_35 & VAR_16) |
   VAR_19;
   FUNC_2(VAR_15, VAR_35);

   VAR_35 = FUNC_1(VAR_17);
   VAR_35 |= VAR_18;
   FUNC_2(VAR_17, VAR_35);
  }

  VAR_35 = FUNC_1(VAR_29);
  VAR_35 |= VAR_30;
  FUNC_2(VAR_29, VAR_35);

  FUNC_2(VAR_31, VAR_14);

  VAR_35 = FUNC_1(VAR_2);
  VAR_35 &= ~(VAR_7 |
    VAR_9 |
    VAR_6);
  VAR_35 |= VAR_8 |
         VAR_5;
  FUNC_2(VAR_2, VAR_35);


  VAR_35 = FUNC_1(VAR_0);
  VAR_35 &= ~VAR_1;
  FUNC_2(VAR_0, VAR_35);




  if (VAR_34->mac.type >= VAR_32) {
   VAR_35 = FUNC_1(VAR_20);
   VAR_35 |= VAR_21;
   FUNC_2(VAR_20, VAR_35);
  }


  VAR_35 = FUNC_1(VAR_22);
  VAR_35 &= ~VAR_23;
  VAR_35 |= VAR_25 |
         VAR_28 |
         VAR_24 |
         VAR_27 |
         VAR_26;
  FUNC_2(VAR_22, VAR_35);

  return 0;
 }

 return FUNC_0(VAR_33);
}
