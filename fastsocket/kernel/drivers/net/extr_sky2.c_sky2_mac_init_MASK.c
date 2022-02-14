
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sky2_port {int phy_lock; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; TYPE_1__** dev; } ;
struct TYPE_2__ {scalar_t__ mtu; int * dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int ) ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_4 (int ) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_5 (int ) ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_6 (int ) ;
 int VAR_59 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sky2_hw*,int,int ) ;
 int FUNC_9 (struct sky2_hw*,unsigned int,int) ;
 int FUNC_10 (struct sky2_hw*,unsigned int,int ,int const*) ;
 int FUNC_11 (struct sky2_hw*,unsigned int,int,int) ;
 struct sky2_port* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct sky2_hw*,unsigned int) ;
 int FUNC_14 (struct sky2_hw*,unsigned int) ;
 int FUNC_15 (struct sky2_hw*,int ) ;
 int FUNC_16 (struct sky2_hw*,unsigned int) ;
 int FUNC_17 (struct sky2_hw*,int ,int) ;
 int FUNC_18 (struct sky2_hw*,int ,int) ;
 int FUNC_19 (struct sky2_hw*,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(struct sky2_hw *VAR_60, unsigned VAR_61)
{
 struct sky2_port *VAR_62 = FUNC_12(VAR_60->dev[VAR_61]);
 u16 VAR_63;
 u32 VAR_64;
 int VAR_65;
 const u8 *VAR_66 = VAR_60->dev[VAR_61]->dev_addr;

 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_38), VAR_37);
 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_38), VAR_36);

 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_6), VAR_10);

 if (VAR_60->chip_id == VAR_2 && VAR_60->chip_rev == 0 && VAR_61 == 1) {


  FUNC_19(VAR_60, FUNC_2(0, VAR_6), VAR_10);
  do {
   FUNC_19(VAR_60, FUNC_2(1, VAR_6), VAR_11);
   FUNC_19(VAR_60, FUNC_2(1, VAR_6), VAR_10);
  } while (FUNC_8(VAR_60, 1, VAR_40) != VAR_41 ||
    FUNC_8(VAR_60, 1, VAR_42) != VAR_43 ||
    FUNC_8(VAR_60, 1, VAR_44) != 0);
 }

 FUNC_15(VAR_60, FUNC_2(VAR_61, VAR_9));


 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_8), VAR_7);

 FUNC_20(&VAR_62->phy_lock);
 FUNC_14(VAR_60, VAR_61);
 FUNC_13(VAR_60, VAR_61);
 FUNC_21(&VAR_62->phy_lock);


 VAR_63 = FUNC_9(VAR_60, VAR_61, VAR_20);
 FUNC_11(VAR_60, VAR_61, VAR_20, VAR_63 | VAR_19);

 for (VAR_65 = VAR_17; VAR_65 <= VAR_18; VAR_65 += 4)
  FUNC_9(VAR_60, VAR_61, VAR_65);
 FUNC_11(VAR_60, VAR_61, VAR_20, VAR_63);


 FUNC_11(VAR_60, VAR_61, VAR_32, FUNC_4(VAR_53));


 FUNC_11(VAR_60, VAR_61, VAR_24,
      VAR_23 | VAR_21 | VAR_22);


 FUNC_11(VAR_60, VAR_61, VAR_33, 0xffff);


 FUNC_11(VAR_60, VAR_61, VAR_35,
      FUNC_7(VAR_59) |
      FUNC_6(VAR_58) |
      FUNC_5(VAR_57) |
      FUNC_3(VAR_52));


 VAR_63 = FUNC_0(VAR_4) |
  VAR_28 | FUNC_1(VAR_39);

 if (VAR_60->dev[VAR_61]->mtu > VAR_5)
  VAR_63 |= VAR_27;

 FUNC_11(VAR_60, VAR_61, VAR_26, VAR_63);


 FUNC_10(VAR_60, VAR_61, VAR_30, VAR_66);


 FUNC_10(VAR_60, VAR_61, VAR_29, VAR_66);


 FUNC_11(VAR_60, VAR_61, VAR_34, 0);
 FUNC_11(VAR_60, VAR_61, VAR_25, 0);
 FUNC_11(VAR_60, VAR_61, VAR_31, 0);


 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_45), VAR_13);
 VAR_64 = VAR_12 | VAR_14;
 if (VAR_60->chip_id == VAR_0 ||
     VAR_60->chip_id == VAR_1)
  VAR_64 |= VAR_15;

 FUNC_18(VAR_60, FUNC_2(VAR_61, VAR_45), VAR_64);

 if (VAR_60->chip_id == VAR_2) {

  FUNC_17(VAR_60, FUNC_2(VAR_61, VAR_46), 0);
 } else {

  FUNC_17(VAR_60, FUNC_2(VAR_61, VAR_46), VAR_16);
 }


 VAR_63 = VAR_48 + 1;

 if (VAR_60->chip_id == VAR_1 &&
     VAR_60->chip_rev == VAR_3)
  VAR_63 = 0x178;
 FUNC_17(VAR_60, FUNC_2(VAR_61, VAR_47), VAR_63);


 FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_55), VAR_13);
 FUNC_17(VAR_60, FUNC_2(VAR_61, VAR_55), VAR_12);


 if (!(VAR_60->flags & VAR_51)) {
  FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_49), 768/8);
  FUNC_19(VAR_60, FUNC_2(VAR_61, VAR_50), 1024/8);

  FUNC_16(VAR_60, VAR_61);
 }

 if (VAR_60->chip_id == VAR_1 &&
     VAR_60->chip_rev == VAR_3) {

  VAR_63 = FUNC_15(VAR_60, FUNC_2(VAR_61, VAR_56));
  VAR_63 &= ~VAR_54;
  FUNC_17(VAR_60, FUNC_2(VAR_61, VAR_56), VAR_63);
 }
}
