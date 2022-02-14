
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct TYPE_3__ {int shift; } ;
struct ixgbe_adapter {int flags2; int tc; TYPE_1__ cc; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_14 ;
 int FUNC_3 (int,int,int*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_16)
{
 struct ixgbe_hw *VAR_17 = &VAR_16->hw;
 int VAR_18 = VAR_16->cc.shift;
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u64 VAR_26 = 0, VAR_27 = 0;

 if ((VAR_16->flags2 & VAR_5) &&
     (VAR_17->mac.type == VAR_15)) {


  FUNC_2(VAR_17, VAR_10, 0x0);
  FUNC_1(VAR_17);

  VAR_19 = FUNC_0(VAR_17, VAR_2);





  VAR_19 |= (VAR_3 |
    VAR_4);





  VAR_20 = (VAR_11 |
     VAR_13 |
     VAR_12);


  VAR_21 = (u32)(VAR_14 << VAR_18);
  VAR_22 = (u32)((VAR_14 << VAR_18) >> 32);






  VAR_27 |= (u64)FUNC_0(VAR_17, VAR_7);
  VAR_27 |= (u64)FUNC_0(VAR_17, VAR_6) << 32;
  VAR_26 = FUNC_4(&VAR_16->tc, VAR_27);

  FUNC_3(VAR_26, VAR_14, &VAR_25);
  VAR_27 += ((VAR_14 - (u64)VAR_25) << VAR_18);


  VAR_23 = (u32)VAR_27;
  VAR_24 = (u32)(VAR_27 >> 32);

  FUNC_2(VAR_17, VAR_1, VAR_21);
  FUNC_2(VAR_17, VAR_0, VAR_22);
  FUNC_2(VAR_17, VAR_9, VAR_23);
  FUNC_2(VAR_17, VAR_8, VAR_24);

  FUNC_2(VAR_17, VAR_2, VAR_19);
  FUNC_2(VAR_17, VAR_10, VAR_20);
 } else {
  FUNC_2(VAR_17, VAR_10, 0x0);
 }

 FUNC_1(VAR_17);
}
