
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; TYPE_2__* ring_feature; int netdev; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int indices; scalar_t__ mask; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int const) ;
 size_t VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_21)
{
 struct ixgbe_hw *VAR_22 = &VAR_21->hw;
 static const u32 VAR_23[10] = { 0xE291D73D, 0x1805EC6C, 0x2A94B30D,
     0xA54F2BEC, 0xEA49AF7C, 0xE214AD3D, 0xB855AABE,
     0x6A3E67EA, 0x14364D17, 0x3BED200D};
 u32 VAR_24 = 0, VAR_25 = 0;
 u32 VAR_26;
 int VAR_27, VAR_28;
 u16 VAR_29 = VAR_21->ring_feature[VAR_19].indices;






 if ((VAR_21->flags & VAR_2) && (VAR_29 < 2))
  VAR_29 = 2;


 for (VAR_27 = 0; VAR_27 < 10; VAR_27++)
  FUNC_3(VAR_22, FUNC_2(VAR_27), VAR_23[VAR_27]);


 for (VAR_27 = 0, VAR_28 = 0; VAR_27 < 128; VAR_27++, VAR_28++) {
  if (VAR_28 == VAR_29)
   VAR_28 = 0;


  VAR_25 = (VAR_25 << 8) | (VAR_28 * 0x11);
  if ((VAR_27 & 3) == 3)
   FUNC_3(VAR_22, FUNC_1(VAR_27 >> 2), VAR_25);
 }


 VAR_26 = FUNC_0(VAR_22, VAR_17);
 VAR_26 |= VAR_18;
 FUNC_3(VAR_22, VAR_17, VAR_26);

 if (VAR_21->hw.mac.type == VAR_20) {
  if (VAR_21->ring_feature[VAR_19].mask)
   VAR_24 = VAR_4;
 } else {
  u8 VAR_30 = FUNC_4(VAR_21->netdev);

  if (VAR_21->flags & VAR_2) {
   if (VAR_30 > 4)
    VAR_24 = VAR_16;
   else if (VAR_30 > 1)
    VAR_24 = VAR_15;
   else if (VAR_21->ring_feature[VAR_19].indices == 4)
    VAR_24 = VAR_13;
   else
    VAR_24 = VAR_14;
  } else {
   if (VAR_30 > 4)
    VAR_24 = VAR_12;
   else if (VAR_30 > 1)
    VAR_24 = VAR_11;
   else
    VAR_24 = VAR_4;
  }
 }


 VAR_24 |= VAR_5 |
  VAR_6 |
  VAR_8 |
  VAR_9;

 if (VAR_21->flags2 & VAR_0)
  VAR_24 |= VAR_7;
 if (VAR_21->flags2 & VAR_1)
  VAR_24 |= VAR_10;

 FUNC_3(VAR_22, VAR_3, VAR_24);
}
