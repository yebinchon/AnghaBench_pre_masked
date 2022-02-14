
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
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ) ;
 int FUNC_10 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void
FUNC_11(struct brcms_phy *VAR_10, u8 VAR_11, u16 VAR_12,
     u8 VAR_13)
{
 u16 VAR_14;
 u16 VAR_15;
 u8 VAR_16;

 if (FUNC_1(VAR_10->pubpi.phy_rev, 3)) {
  for (VAR_16 = 0; VAR_16 < VAR_10->pubpi.phy_corenum; VAR_16++) {
   if (VAR_13 == VAR_8
       && VAR_16 == VAR_7)
    continue;
   else if (VAR_13 == VAR_9
     && VAR_16 == VAR_6)
    continue;

   if (FUNC_2(VAR_10->pubpi.phy_rev, 7)) {

    VAR_14 = (0x1 << 10);
    VAR_15 = 1 << 10;
    FUNC_6(VAR_10, (VAR_16 == VAR_6) ? 0x91 :
         0x92, VAR_14, VAR_15);
   }

   if (VAR_11 == VAR_3) {

    FUNC_10(VAR_10, (VAR_16 == VAR_6) ? 0x91 :
           0x92, 0);

    FUNC_9(VAR_10,
        VAR_0);
   } else if (VAR_11 == VAR_5) {

    if (FUNC_1(VAR_10->pubpi.phy_rev, 7)) {

     VAR_14 = (0x1 << 6) | (0x1 << 7);

     VAR_15 = VAR_12 << 6;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);

     FUNC_7(VAR_10,
         (VAR_16 ==
          VAR_6) ? 0x91 : 0x92,
         (0x1 << 10));

     FUNC_5(VAR_10, 0x2ff, (u16)
          ~(0x3 << 14));
     FUNC_7(VAR_10, 0x2ff, (0x1 << 13));
     FUNC_7(VAR_10, 0x2ff, (0x1 << 0));
    } else {

     VAR_14 = (0x1 << 6) |
            (0x1 << 7) |
            (0x1 << 8) | (0x1 << 9);
     VAR_15 = VAR_12 << 6;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);

     VAR_14 = (0x1 << 0);
     VAR_15 = 1 << 0;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0xe7 : 0xec,
          VAR_14, VAR_15);

     VAR_14 = (VAR_16 == VAR_6) ?
            (0x1 << 0) : (0x1 << 1);
     VAR_15 = 1 << ((VAR_16 == VAR_6) ?
          0 : 1);
     FUNC_6(VAR_10, 0x78, VAR_14, VAR_15);

     FUNC_3(((FUNC_8(VAR_10, 0x78) & VAR_15)
        != 0), 10000);
     if (FUNC_4(FUNC_8(VAR_10, 0x78) & VAR_15,
       "HW error: override failed"))
      return;

     VAR_14 = (0x1 << 0);
     VAR_15 = 0 << 0;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0xe7 : 0xec,
          VAR_14, VAR_15);
    }
   } else if (VAR_11 == VAR_4) {
    if (FUNC_1(VAR_10->pubpi.phy_rev, 7)) {

     VAR_14 = (0x1 << 4) | (0x1 << 5);

     if (FUNC_0(VAR_10->radio_chanspec))
      VAR_15 = VAR_12 << 5;
     else
      VAR_15 = VAR_12 << 4;

     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);

     FUNC_7(VAR_10,
         (VAR_16 ==
          VAR_6) ? 0x91 : 0x92,
         (0x1 << 12));
    } else {

     if (FUNC_0(VAR_10->radio_chanspec)) {
      VAR_14 = (0x1 << 5);
      VAR_15 = VAR_12 << 5;
     } else {
      VAR_14 = (0x1 << 4);
      VAR_15 = VAR_12 << 4;
     }
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);
    }
   } else if (VAR_11 ==
       VAR_2) {
    if (FUNC_1(VAR_10->pubpi.phy_rev, 7)) {
     if (FUNC_0(VAR_10->radio_chanspec)) {

      VAR_14 = (0x1 << 0);
      VAR_15 = VAR_12 << 0;
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, VAR_15);

      VAR_14 = (0x1 << 2);
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, 0);
     } else {

      VAR_14 = (0x1 << 2);
      VAR_15 = VAR_12 << 2;
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, VAR_15);

      VAR_14 = (0x1 << 0);
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, 0);
     }

     VAR_14 = (0x1 << 11);
     VAR_15 = 1 << 11;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);
    } else {

     if (FUNC_0(VAR_10->radio_chanspec)) {
      VAR_14 = (0x1 << 0);
      VAR_15 = VAR_12 << 0;
     } else {
      VAR_14 = (0x1 << 2);
      VAR_15 = VAR_12 << 2;
     }
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);
    }
   } else if (VAR_11 ==
       VAR_1) {
    if (FUNC_1(VAR_10->pubpi.phy_rev, 7)) {
     if (FUNC_0(VAR_10->radio_chanspec)) {

      VAR_14 = (0x1 << 1);
      VAR_15 = VAR_12 << 1;
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, VAR_15);

      VAR_14 = (0x1 << 3);
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, 0);
     } else {

      VAR_14 = (0x1 << 3);
      VAR_15 = VAR_12 << 3;
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, VAR_15);

      VAR_14 = (0x1 << 1);
      FUNC_6(VAR_10,
           (VAR_16 ==
            VAR_6) ? 0x91
           : 0x92, VAR_14, 0);
     }

     VAR_14 = (0x1 << 11);
     VAR_15 = 1 << 11;
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);
    } else {

     if (FUNC_0(VAR_10->radio_chanspec)) {
      VAR_14 = (0x1 << 1);
      VAR_15 = VAR_12 << 1;
     } else {
      VAR_14 = (0x1 << 3);
      VAR_15 = VAR_12 << 3;
     }
     FUNC_6(VAR_10,
          (VAR_16 ==
           VAR_6) ? 0x91 : 0x92,
          VAR_14, VAR_15);
    }
   }
  }
 }
}
