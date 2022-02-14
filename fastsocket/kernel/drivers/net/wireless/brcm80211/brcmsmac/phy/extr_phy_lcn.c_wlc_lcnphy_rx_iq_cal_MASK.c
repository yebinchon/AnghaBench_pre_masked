
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lcnphy_txgains {int dummy; } ;
struct lcnphy_rx_iqcomp {scalar_t__ chan; scalar_t__ b; scalar_t__ a; } ;
struct brcms_phy_lcnphy {int lcnphy_current_index; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ u; } ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int * VAR_12 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct brcms_phy*,int) ;
 int FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_13 (struct brcms_phy*) ;
 int FUNC_14 (struct brcms_phy*,int) ;
 int FUNC_15 (struct brcms_phy*,int) ;
 int FUNC_16 (struct brcms_phy*,int ,int ,int,int,int,int,int ) ;
 int FUNC_17 (struct brcms_phy*,int,int) ;
 int FUNC_18 (struct brcms_phy*,int,int) ;
 int FUNC_19 (struct brcms_phy*,int) ;
 int FUNC_20 (struct brcms_phy*,int) ;
 int FUNC_21 (struct brcms_phy*,int,int,int ) ;
 int FUNC_22 (struct brcms_phy*) ;
 int FUNC_23 (struct brcms_phy*) ;
 int FUNC_24 (struct brcms_phy*,int,int) ;
 int FUNC_25 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static bool
FUNC_26(struct brcms_phy *VAR_13,
       const struct lcnphy_rx_iqcomp *VAR_14,
       int VAR_15, bool VAR_16, bool VAR_17, int VAR_18,
       int VAR_19)
{
 struct lcnphy_txgains VAR_20;
 u16 VAR_21;
 u8 VAR_22 = 0;
 bool VAR_23 = 0, VAR_24 = 0;
 u16 VAR_25, VAR_26, VAR_27,
     VAR_28, VAR_29, VAR_30,
     VAR_31, VAR_32, VAR_33,
     VAR_34, VAR_35, VAR_36;
 int VAR_37;
 u32 VAR_38, VAR_39;
 u16 VAR_40, VAR_41;
 u16 VAR_42[11];
 s16 *VAR_43;
 struct brcms_phy_lcnphy *VAR_44 = VAR_13->u.pi_lcnphy;

 VAR_43 = FUNC_2(sizeof(s16) * 131, VAR_0);
 if (((void*)0) == VAR_43)
  return 0;
 if (VAR_18 == 2) {
  while (VAR_15--) {
   if (VAR_14[VAR_15].chan ==
       FUNC_0(VAR_13->radio_chanspec)) {
    FUNC_17(VAR_13,
         (u16)
         VAR_14[VAR_15].a,
         (u16)
         VAR_14[VAR_15].b);
    VAR_23 = 1;
    break;
   }
  }
  goto cal_done;
 }

 if (VAR_18 == 1) {

  VAR_21 = FUNC_13(VAR_13);
  FUNC_20(VAR_13, VAR_1);

  for (VAR_25 = 0; VAR_25 < 11; VAR_25++)
   VAR_42[VAR_25] =
    FUNC_7(VAR_13, VAR_12[VAR_25]);
  VAR_26 = FUNC_6(VAR_13, 0x631);

  FUNC_5(VAR_13, 0x631, 0x0015);

  VAR_27 = FUNC_6(VAR_13, 0x44c);
  VAR_28 = FUNC_6(VAR_13, 0x44d);
  VAR_29 = FUNC_6(VAR_13, 0x4b0);
  VAR_30 = FUNC_6(VAR_13, 0x4b1);
  VAR_31 = FUNC_6(VAR_13, 0x4f9);
  VAR_32 = FUNC_6(VAR_13, 0x4fa);
  VAR_33 = FUNC_6(VAR_13, 0x938);
  VAR_34 = FUNC_6(VAR_13, 0x939);
  VAR_35 = FUNC_6(VAR_13, 0x43b);
  VAR_36 = FUNC_6(VAR_13, 0x43c);
  VAR_40 = FUNC_6(VAR_13, 0x6da);
  VAR_41 = FUNC_6(VAR_13, 0x6db);

  VAR_24 = FUNC_23(VAR_13);
  if (VAR_24) {
   FUNC_12(VAR_13, &VAR_20);
   VAR_22 = VAR_44->lcnphy_current_index;
  }

  FUNC_19(VAR_13, VAR_19);

  FUNC_3(VAR_13, 0x4f9, (0x1 << 0), 1 << 0);
  FUNC_3(VAR_13, 0x4fa, (0x1 << 0), 0 << 0);

  FUNC_3(VAR_13, 0x43b, (0x1 << 1), 1 << 1);
  FUNC_3(VAR_13, 0x43c, (0x1 << 1), 0 << 1);

  FUNC_25(VAR_13, VAR_9, 0x06);
  FUNC_25(VAR_13, VAR_11, 0x07);
  FUNC_25(VAR_13, VAR_5, 0xd3);
  FUNC_25(VAR_13, VAR_6, 0x03);
  FUNC_25(VAR_13, VAR_2, 0x7);
  FUNC_4(VAR_13, VAR_7, 1 << 4, 1 << 4);
  FUNC_25(VAR_13, VAR_3, 0x01);
  FUNC_25(VAR_13, VAR_8, 0x01);
  FUNC_25(VAR_13, VAR_4, 0x10);
  FUNC_25(VAR_13, VAR_10, 0x08);

  FUNC_3(VAR_13, 0x938, (0x1 << 0), 1 << 0);
  FUNC_3(VAR_13, 0x939, (0x1 << 0), 0 << 0);
  FUNC_3(VAR_13, 0x938, (0x1 << 1), 1 << 1);
  FUNC_3(VAR_13, 0x939, (0x1 << 1), 1 << 1);
  FUNC_3(VAR_13, 0x938, (0x1 << 2), 1 << 2);
  FUNC_3(VAR_13, 0x939, (0x1 << 2), 1 << 2);
  FUNC_3(VAR_13, 0x938, (0x1 << 3), 1 << 3);
  FUNC_3(VAR_13, 0x939, (0x1 << 3), 1 << 3);
  FUNC_3(VAR_13, 0x938, (0x1 << 5), 1 << 5);
  FUNC_3(VAR_13, 0x939, (0x1 << 5), 0 << 5);

  FUNC_3(VAR_13, 0x43b, (0x1 << 0), 1 << 0);
  FUNC_3(VAR_13, 0x43c, (0x1 << 0), 0 << 0);

  FUNC_21(VAR_13, 2000, 120, 0);
  FUNC_24(VAR_13, 0x6da, 0xffff);
  FUNC_5(VAR_13, 0x6db, 0x3);
  FUNC_18(VAR_13, VAR_16, VAR_17);
  FUNC_15(VAR_13, 1);

  VAR_37 = 8;
  VAR_39 = 950;
  while (VAR_37 > 0) {
   VAR_37 -= 1;
   FUNC_16(VAR_13,
              0, 0, 2, 2,
              (u16)
              VAR_37, 1, 0);
   FUNC_8(500);

   VAR_38 =
    FUNC_14(VAR_13, 2000);
   if (VAR_38 < VAR_39)
    break;
  }
  VAR_23 = FUNC_9(VAR_13, 0xffff);

  FUNC_22(VAR_13);

  FUNC_24(VAR_13, 0x631, VAR_26);

  FUNC_24(VAR_13, 0x44c, VAR_28);
  FUNC_24(VAR_13, 0x44d, VAR_28);
  FUNC_24(VAR_13, 0x4b0, VAR_29);
  FUNC_24(VAR_13, 0x4b1, VAR_30);
  FUNC_24(VAR_13, 0x4f9, VAR_31);
  FUNC_24(VAR_13, 0x4fa, VAR_32);
  FUNC_24(VAR_13, 0x938, VAR_33);
  FUNC_24(VAR_13, 0x939, VAR_34);
  FUNC_24(VAR_13, 0x43b, VAR_35);
  FUNC_24(VAR_13, 0x43c, VAR_36);
  FUNC_24(VAR_13, 0x6da, VAR_40);
  FUNC_24(VAR_13, 0x6db, VAR_41);

  FUNC_10(VAR_13);

  FUNC_3(VAR_13, 0x44c, (0x1 << 2), 0 << 2);

  for (VAR_25 = 0; VAR_25 < 11; VAR_25++)
   FUNC_25(VAR_13, VAR_12[VAR_25],
     VAR_42[VAR_25]);

  if (VAR_24)
   FUNC_19(VAR_13, VAR_22);
  else
   FUNC_11(VAR_13);

  FUNC_20(VAR_13, VAR_21);
  FUNC_15(VAR_13, 0);
 }

cal_done:
 FUNC_1(VAR_43);
 return VAR_23;
}
