
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ phy_corenum; int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct brcms_phy*,scalar_t__) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct brcms_phy *VAR_10, u8 VAR_11, u8 VAR_12)
{
 u16 VAR_13, VAR_14;
 u16 VAR_15, VAR_16, VAR_17,
     VAR_18;
 u16 VAR_19, VAR_20, VAR_21,
     VAR_22;
 u16 VAR_23, VAR_24, VAR_25;
 u16 VAR_26, VAR_27;
 u8 VAR_28;

 if (FUNC_1(VAR_10->pubpi.phy_rev, 3)) {
  if (VAR_11 == VAR_9) {
   FUNC_3(VAR_10, 0x8f, (0x1 << 9), 0);
   FUNC_3(VAR_10, 0xa5, (0x1 << 9), 0);

   FUNC_3(VAR_10, 0xa6, (0x3 << 8), 0);
   FUNC_3(VAR_10, 0xa7, (0x3 << 8), 0);

   FUNC_3(VAR_10, 0xe5, (0x1 << 5), 0);
   FUNC_3(VAR_10, 0xe6, (0x1 << 5), 0);

   VAR_13 = (0x1 << 2) |
          (0x1 << 3) | (0x1 << 4) | (0x1 << 5);
   FUNC_3(VAR_10, 0xf9, VAR_13, 0);
   FUNC_3(VAR_10, 0xfb, VAR_13, 0);

  } else {
   for (VAR_28 = 0; VAR_28 < VAR_10->pubpi.phy_corenum; VAR_28++) {
    if (VAR_11 == VAR_7
        && VAR_28 == VAR_6)
     continue;
    else if (VAR_11 == VAR_8
      && VAR_28 == VAR_5)
     continue;

    FUNC_3(VAR_10, (VAR_28 == VAR_5) ?
         0x8f : 0xa5, (0x1 << 9), 1 << 9);

    if (VAR_12 == VAR_3 ||
        VAR_12 == VAR_4 ||
        VAR_12 == VAR_1) {
     FUNC_3(VAR_10,
          (VAR_28 ==
           VAR_5) ? 0xa6 : 0xa7,
          (0x3 << 8), 0);

     VAR_13 = (0x1 << 2) |
            (0x1 << 3) |
            (0x1 << 4) | (0x1 << 5);
     FUNC_3(VAR_10,
          (VAR_28 ==
           VAR_5) ? 0xf9 : 0xfb,
          VAR_13, 0);

     if (VAR_12 == VAR_3) {
      if (FUNC_0(
         VAR_10->radio_chanspec)) {
       VAR_13 = (0x1 << 2);
       VAR_14 = 1 << 2;
      } else {
       VAR_13 = (0x1 << 3);
       VAR_14 = 1 << 3;
      }
     } else if (VAR_12 ==
         VAR_4) {
      VAR_13 = (0x1 << 4);
      VAR_14 = 1 << 4;
     } else {
      VAR_13 = (0x1 << 5);
      VAR_14 = 1 << 5;
     }
     FUNC_3(VAR_10,
          (VAR_28 ==
           VAR_5) ? 0xf9 : 0xfb,
          VAR_13, VAR_14);

     VAR_13 = (0x1 << 5);
     VAR_14 = 1 << 5;
     FUNC_3(VAR_10, (VAR_28 == VAR_5) ?
          0xe5 : 0xe6, VAR_13, VAR_14);
    } else {
     if (VAR_12 == VAR_2) {
      VAR_13 = (0x3 << 8);
      VAR_14 = 1 << 8;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
      VAR_13 = (0x3 << 10);
      VAR_14 = 1 << 10;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
     } else if (VAR_12 ==
         VAR_0) {
      VAR_13 = (0x3 << 8);
      VAR_14 = 2 << 8;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
      VAR_13 = (0x3 << 10);
      VAR_14 = 2 << 10;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
     } else {
      VAR_13 = (0x3 << 8);
      VAR_14 = 3 << 8;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
      VAR_13 = (0x3 << 10);
      VAR_14 = 3 << 10;
      FUNC_3(VAR_10,
           (VAR_28 ==
            VAR_5) ? 0xa6
           : 0xa7, VAR_13, VAR_14);
      FUNC_2(VAR_10, VAR_28);
      VAR_15 = 1 << 9;
      FUNC_3(VAR_10,
          (VAR_28 ==
           VAR_5) ? 0x8f
          : 0xa5, (0x1 << 9),
          VAR_15);
     }
    }
   }
  }
 } else {

  if ((VAR_12 == VAR_3) ||
      (VAR_12 == VAR_4) ||
      (VAR_12 == VAR_1))
   VAR_14 = 0x0;
  else if (VAR_12 == VAR_2)
   VAR_14 = 0x1;
  else if (VAR_12 == VAR_0)
   VAR_14 = 0x2;
  else
   VAR_14 = 0x3;

  VAR_13 = ((0x3 << 12) | (0x3 << 14));
  VAR_14 = (VAR_14 << 12) | (VAR_14 << 14);
  FUNC_3(VAR_10, 0xa6, VAR_13, VAR_14);
  FUNC_3(VAR_10, 0xa7, VAR_13, VAR_14);

  if ((VAR_12 == VAR_3) ||
      (VAR_12 == VAR_4) ||
      (VAR_12 == VAR_1)) {
   if (VAR_12 == VAR_3)
    VAR_14 = 0x1;
   if (VAR_12 == VAR_4)
    VAR_14 = 0x2;
   if (VAR_12 == VAR_1)
    VAR_14 = 0x3;

   VAR_13 = (0x3 << 4);
   VAR_14 = (VAR_14 << 4);
   FUNC_3(VAR_10, 0x7a, VAR_13, VAR_14);
   FUNC_3(VAR_10, 0x7d, VAR_13, VAR_14);
  }

  if (VAR_11 == VAR_9) {
   VAR_15 = 0;
   VAR_16 = 0;
   VAR_17 = 0;
   VAR_19 = 0;
   VAR_20 = 0;
   VAR_21 = 0;
   VAR_22 = 0;
   VAR_18 = 0;
  } else {
   VAR_15 = 1;
   VAR_16 = 1;
   VAR_17 = VAR_11;
   VAR_19 = 1;
   VAR_20 = 1;
   VAR_21 = 1;
   VAR_22 = 1;
   VAR_18 = 1;
  }

  VAR_23 = ((0x1 << 12) | (0x1 << 13));
  VAR_15 = (VAR_15 <<
           12) | (VAR_15 << 13);
  FUNC_3(VAR_10, 0xa5, VAR_23,
       VAR_15);

  if ((VAR_12 == VAR_3) ||
      (VAR_12 == VAR_4) ||
      (VAR_12 == VAR_1)) {
   VAR_24 = ((0x1 << 8) | (0x7 << 3));
   VAR_26 = (VAR_16 << 8) |
     (VAR_17 << 3);

   VAR_25 = ((0x1 << 5) |
       (0x1 << 12) |
       (0x1 << 1) | (0x1 << 0));
   VAR_27 = (VAR_19 <<
      5) |
     (VAR_20 << 12) |
     (VAR_21 << 1) |
     (VAR_22 << 0);

   FUNC_3(VAR_10, 0x78, VAR_24, VAR_26);
   FUNC_3(VAR_10, 0xec, VAR_25, VAR_27);

   FUNC_3(VAR_10, 0x78, (0x1 << 0), (VAR_18 << 0));
   FUNC_4(20);

   FUNC_3(VAR_10, 0xec, (0x1 << 0), 0);
  }
 }
}
