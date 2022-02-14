
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int mta_reg_count; TYPE_1__ ops; int rar_entry_count; } ;
struct TYPE_5__ {int mdic_wa_enable; } ;
struct TYPE_6__ {TYPE_2__ e80003es2lan; } ;
struct e1000_hw {TYPE_3__ dev_spec; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


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
 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct e1000_hw*,int ,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int,int*) ;
 int FUNC_6 (struct e1000_hw*,int,int) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_19)
{
 struct e1000_mac_info *VAR_20 = &VAR_19->mac;
 u32 VAR_21;
 s32 VAR_22;
 u16 VAR_23;
 u16 VAR_24;

 FUNC_4(VAR_19);


 VAR_22 = VAR_20->ops.id_led_init(VAR_19);

 if (VAR_22)
  FUNC_8("Error initializing identification LED\n");


 FUNC_8("Initializing the IEEE VLAN\n");
 VAR_20->ops.clear_vfta(VAR_19);


 FUNC_7(VAR_19, VAR_20->rar_entry_count);


 FUNC_8("Zeroing the MTA\n");
 for (VAR_24 = 0; VAR_24 < VAR_20->mta_reg_count; VAR_24++)
  FUNC_1(VAR_19, VAR_9, VAR_24, 0);


 VAR_22 = VAR_20->ops.setup_link(VAR_19);
 if (VAR_22)
  return VAR_22;


 FUNC_5(VAR_19, VAR_4,
     &VAR_23);
 VAR_23 |= VAR_3;
 FUNC_6(VAR_19, VAR_4,
      VAR_23);


 VAR_21 = FUNC_9(FUNC_2(0));
 VAR_21 = ((VAR_21 & ~VAR_15) |
      VAR_14 | VAR_13);
 FUNC_10(FUNC_2(0), VAR_21);


 VAR_21 = FUNC_9(FUNC_2(1));
 VAR_21 = ((VAR_21 & ~VAR_15) |
      VAR_14 | VAR_13);
 FUNC_10(FUNC_2(1), VAR_21);


 VAR_21 = FUNC_9(VAR_16);
 VAR_21 |= VAR_11;
 FUNC_10(VAR_16, VAR_21);


 VAR_21 = FUNC_9(VAR_17);
 VAR_21 &= ~VAR_10;
 VAR_21 |= VAR_0;
 FUNC_10(VAR_17, VAR_21);


 VAR_21 = FUNC_9(VAR_18);
 VAR_21 &= ~VAR_12;
 VAR_21 |= VAR_1;
 FUNC_10(VAR_18, VAR_21);

 VAR_21 = FUNC_0(VAR_19, VAR_2, 0x0001);
 VAR_21 &= ~0x00100000;
 FUNC_1(VAR_19, VAR_2, 0x0001, VAR_21);


 VAR_19->dev_spec.e80003es2lan.mdic_wa_enable = 1;

 VAR_22 =
     FUNC_5(VAR_19, VAR_5 >>
         VAR_6, &VAR_24);
 if (!VAR_22) {
  if ((VAR_24 & VAR_8) ==
       VAR_7)
   VAR_19->dev_spec.e80003es2lan.mdic_wa_enable = 0;
 }






 FUNC_3(VAR_19);

 return VAR_22;
}
