
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ type; TYPE_2__ ops; int mta_reg_count; int rar_entry_count; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
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
 int FUNC_0 (struct e1000_hw*,int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ) ;
 int FUNC_6 (struct e1000_hw*,int) ;
 int FUNC_7 (struct e1000_hw*,int ,int *) ;
 int FUNC_8 (struct e1000_hw*,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_13)
{
 struct e1000_mac_info *VAR_14 = &VAR_13->mac;
 u32 VAR_15, VAR_16, VAR_17;
 s32 VAR_18;
 u16 VAR_19;

 FUNC_3(VAR_13);


 VAR_18 = VAR_14->ops.id_led_init(VAR_13);

 if (VAR_18)
  FUNC_9("Error initializing identification LED\n");


 FUNC_5(VAR_13, VAR_14->rar_entry_count);


 FUNC_9("Zeroing the MTA\n");
 for (VAR_19 = 0; VAR_19 < VAR_14->mta_reg_count; VAR_19++)
  FUNC_0(VAR_13, VAR_4, VAR_19, 0);





 if (VAR_13->phy.type == VAR_12) {
  FUNC_7(VAR_13, VAR_0, &VAR_19);
  VAR_19 &= ~VAR_1;
  FUNC_8(VAR_13, VAR_0, VAR_19);
  VAR_18 = FUNC_4(VAR_13);
  if (VAR_18)
   return VAR_18;
 }


 VAR_18 = VAR_14->ops.setup_link(VAR_13);


 VAR_16 = FUNC_10(FUNC_1(0));
 VAR_16 = ((VAR_16 & ~VAR_8) |
    VAR_5);
 VAR_16 = ((VAR_16 & ~VAR_7) |
    VAR_6);
 FUNC_11(FUNC_1(0), VAR_16);
 VAR_16 = FUNC_10(FUNC_1(1));
 VAR_16 = ((VAR_16 & ~VAR_8) |
    VAR_5);
 VAR_16 = ((VAR_16 & ~VAR_7) |
    VAR_6);
 FUNC_11(FUNC_1(1), VAR_16);




 if (VAR_14->type == VAR_11)
  VAR_17 = VAR_9;
 else
  VAR_17 = (u32)~(VAR_10);
 FUNC_6(VAR_13, VAR_17);

 VAR_15 = FUNC_10(VAR_2);
 VAR_15 |= VAR_3;
 FUNC_11(VAR_2, VAR_15);






 FUNC_2(VAR_13);

 return VAR_18;
}
