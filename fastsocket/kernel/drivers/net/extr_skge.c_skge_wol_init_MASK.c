
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skge_port {int port; int wol; TYPE_1__* netdev; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ chip_rev; scalar_t__ regs; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct skge_hw*,int,int ,int) ;
 int FUNC_3 (struct skge_hw*,int,int ,int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct skge_hw*,scalar_t__) ;
 int FUNC_6 (struct skge_hw*,scalar_t__,int) ;
 int FUNC_7 (struct skge_hw*,scalar_t__,int) ;
 int FUNC_8 (struct skge_hw*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct skge_port *VAR_63)
{
 struct skge_hw *VAR_64 = VAR_63->hw;
 int VAR_65 = VAR_63->port;
 u16 VAR_66;

 FUNC_6(VAR_64, VAR_0, VAR_5);
 FUNC_6(VAR_64, FUNC_0(VAR_65, VAR_8), VAR_11);


 FUNC_8(VAR_64, VAR_1,
      VAR_30 | VAR_32 | VAR_31 | VAR_33);


 if (VAR_64->chip_id == VAR_3 &&
     VAR_64->chip_rev >= VAR_4) {
  u32 VAR_67 = FUNC_5(VAR_64, VAR_2);
  VAR_67 |= VAR_28;
  VAR_67 &= ~VAR_29;
  FUNC_7(VAR_64, VAR_2, VAR_67);
 }

 FUNC_7(VAR_64, FUNC_0(VAR_65, VAR_27),
       VAR_20 |
       VAR_24 | VAR_23 | VAR_22 | VAR_21 |
       VAR_19 | VAR_26);

 FUNC_7(VAR_64, FUNC_0(VAR_65, VAR_27),
       VAR_20 |
       VAR_24 | VAR_23 | VAR_22 | VAR_21 |
       VAR_19 | VAR_25);

 FUNC_7(VAR_64, FUNC_0(VAR_65, VAR_7), VAR_9);


 FUNC_2(VAR_64, VAR_65, VAR_45,
       VAR_34 | VAR_35 |
       VAR_36 | VAR_37| VAR_38);

 FUNC_2(VAR_64, VAR_65, VAR_44, 0);
 FUNC_2(VAR_64, VAR_65, VAR_46,
       VAR_41 | VAR_43 | VAR_39 |
       VAR_42 | VAR_40);



 FUNC_3(VAR_64, VAR_65, VAR_18,
      VAR_15|VAR_17|VAR_16|
      VAR_13|VAR_14|VAR_12);


 FUNC_4(VAR_64->regs + FUNC_1(VAR_65, VAR_62),
      VAR_63->netdev->dev_addr, VAR_6);


 FUNC_6(VAR_64, FUNC_1(VAR_65, VAR_61), VAR_50);
 VAR_66 = 0;
 if (VAR_63->wol & VAR_49)
  VAR_66 |= VAR_59|VAR_57;
 else
  VAR_66 |= VAR_54|VAR_51;

 if (VAR_63->wol & VAR_48)
  VAR_66 |= VAR_60|VAR_58;
 else
  VAR_66 |= VAR_55|VAR_52;

 VAR_66 |= VAR_56|VAR_53;
 FUNC_6(VAR_64, FUNC_1(VAR_65, VAR_61), VAR_66);


 FUNC_8(VAR_64, FUNC_0(VAR_65, VAR_47), VAR_10);
}
