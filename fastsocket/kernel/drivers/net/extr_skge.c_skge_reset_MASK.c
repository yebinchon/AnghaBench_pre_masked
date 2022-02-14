
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
typedef int u16 ;
struct skge_hw {int chip_id; int phy_type; int copper; int ports; char chip_rev; int ram_size; int ram_offset; int intr_mask; TYPE_1__* pdev; int phy_addr; } ;
struct TYPE_5__ {int dev; } ;


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
 char VAR_31 ;
 char VAR_32 ;




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

 int FUNC_0 (int,int ) ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct skge_hw*) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (struct skge_hw*,int ) ;
 int FUNC_10 (struct skge_hw*,int ) ;
 int FUNC_11 (struct skge_hw*,int ) ;
 int FUNC_12 (struct skge_hw*,int) ;
 int FUNC_13 (struct skge_hw*,int ,int) ;
 int FUNC_14 (struct skge_hw*,int ,int) ;
 int FUNC_15 (struct skge_hw*,int ,int) ;
 int FUNC_16 (struct skge_hw*,int) ;

__attribute__((used)) static int FUNC_17(struct skge_hw *VAR_71)
{
 u32 VAR_72;
 u16 VAR_73, VAR_74;
 u8 VAR_75, VAR_76, VAR_77;
 int VAR_78;

 VAR_73 = FUNC_9(VAR_71, VAR_0);


 FUNC_15(VAR_71, VAR_0, VAR_38);
 FUNC_15(VAR_71, VAR_0, VAR_37);


 FUNC_15(VAR_71, VAR_16, VAR_68);
 FUNC_15(VAR_71, VAR_17, 0);

 FUNC_6(VAR_71->pdev, VAR_52, &VAR_74);
 FUNC_8(VAR_71->pdev, VAR_52,
         VAR_74 | VAR_53);
 FUNC_15(VAR_71, VAR_16, VAR_67);
 FUNC_15(VAR_71, VAR_0, VAR_36);


 FUNC_13(VAR_71, VAR_0,
       VAR_73 & (VAR_34|VAR_35|VAR_33));

 VAR_71->chip_id = FUNC_11(VAR_71, VAR_7);
 VAR_71->phy_type = FUNC_11(VAR_71, VAR_9) & 0xf;
 VAR_77 = FUNC_11(VAR_71, VAR_14);
 VAR_71->copper = (VAR_77 == 'T' || VAR_77 == '1');

 switch (VAR_71->chip_id) {
 case 133:
  switch (VAR_71->phy_type) {
  case 128:
   VAR_71->phy_addr = VAR_60;
   break;
  case 129:
   VAR_71->phy_addr = VAR_58;
   break;
  default:
   FUNC_1(&VAR_71->pdev->dev, "unsupported phy type 0x%x\n",
          VAR_71->phy_type);
   return -VAR_39;
  }
  break;

 case 132:
 case 131:
 case 130:
  if (VAR_71->phy_type < VAR_62 && VAR_77 != 'S')
   VAR_71->copper = 1;

  VAR_71->phy_addr = VAR_59;
  break;

 default:
  FUNC_1(&VAR_71->pdev->dev, "unsupported chip type 0x%x\n",
         VAR_71->chip_id);
  return -VAR_39;
 }

 VAR_76 = FUNC_11(VAR_71, VAR_13);
 VAR_71->ports = (VAR_76 & VAR_32) ? 1 : 2;
 VAR_71->chip_rev = (VAR_76 & VAR_31) >> 4;


 VAR_75 = FUNC_11(VAR_71, VAR_8);
 if (VAR_71->chip_id == 133) {
  if (VAR_75 == 3) {

   VAR_71->ram_size = 0x100000;
   VAR_71->ram_offset = 0x80000;
  } else
   VAR_71->ram_size = VAR_75 * 512;
 }
 else if (VAR_75 == 0)
  VAR_71->ram_size = 0x20000;
 else
  VAR_71->ram_size = VAR_75 * 4096;

 VAR_71->intr_mask = VAR_45;


 if (!(VAR_71->chip_id == 133 && VAR_71->phy_type == 128))
  VAR_71->intr_mask |= VAR_44;

 if (VAR_71->chip_id == 133)
  FUNC_3(VAR_71);
 else {

  FUNC_15(VAR_71, VAR_6,
       VAR_54 | VAR_56 | VAR_55 | VAR_57);


  if ((FUNC_10(VAR_71, VAR_4) & VAR_45) &&
      (FUNC_10(VAR_71, VAR_2) & VAR_46)) {
   FUNC_2(&VAR_71->pdev->dev, "stuck hardware sensor bit\n");
   VAR_71->intr_mask &= ~VAR_45;
  }


  FUNC_15(VAR_71, VAR_16, VAR_68);
  FUNC_5(VAR_71->pdev, VAR_50, &VAR_72);
  VAR_72 &= ~VAR_51;
  FUNC_7(VAR_71->pdev, VAR_50, VAR_72);
  FUNC_15(VAR_71, VAR_16, VAR_67);


  for (VAR_78 = 0; VAR_78 < VAR_71->ports; VAR_78++) {
   FUNC_13(VAR_71, FUNC_0(VAR_78, VAR_40), VAR_42);
   FUNC_13(VAR_71, FUNC_0(VAR_78, VAR_40), VAR_41);
  }
 }


 FUNC_15(VAR_71, VAR_15, VAR_66);
 FUNC_15(VAR_71, VAR_15, VAR_64);
 FUNC_15(VAR_71, VAR_5, VAR_49);


 for (VAR_78 = 0; VAR_78 < VAR_71->ports; VAR_78++)
  FUNC_15(VAR_71, FUNC_0(VAR_78, VAR_69), VAR_70);


 FUNC_13(VAR_71, VAR_18, VAR_61);

 FUNC_15(VAR_71, VAR_25, VAR_63);
 FUNC_15(VAR_71, VAR_27, VAR_63);
 FUNC_15(VAR_71, VAR_29, VAR_63);
 FUNC_15(VAR_71, VAR_19, VAR_63);
 FUNC_15(VAR_71, VAR_21, VAR_63);
 FUNC_15(VAR_71, VAR_23, VAR_63);
 FUNC_15(VAR_71, VAR_26, VAR_63);
 FUNC_15(VAR_71, VAR_28, VAR_63);
 FUNC_15(VAR_71, VAR_30, VAR_63);
 FUNC_15(VAR_71, VAR_20, VAR_63);
 FUNC_15(VAR_71, VAR_22, VAR_63);
 FUNC_15(VAR_71, VAR_24, VAR_63);

 FUNC_14(VAR_71, VAR_1, VAR_43);




 FUNC_14(VAR_71, VAR_12, VAR_47|VAR_48);
 FUNC_14(VAR_71, VAR_11, FUNC_12(VAR_71, 100));
 FUNC_14(VAR_71, VAR_10, VAR_65);

 FUNC_14(VAR_71, VAR_3, VAR_71->intr_mask);

 for (VAR_78 = 0; VAR_78 < VAR_71->ports; VAR_78++) {
  if (VAR_71->chip_id == 133)
   FUNC_4(VAR_71, VAR_78);
  else
   FUNC_16(VAR_71, VAR_78);
 }

 return 0;
}
