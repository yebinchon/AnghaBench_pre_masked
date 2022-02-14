
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; int dev; } ;
struct evergreen_mc_save {int dummy; } ;


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
 int FUNC_0 (int) ;
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_5 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_44, u32 VAR_45)
{
 struct evergreen_mc_save VAR_46;
 u32 VAR_47 = 0, VAR_48 = 0;
 u32 VAR_49;

 if (VAR_45 == 0)
  return;

 FUNC_2(VAR_44->dev, "GPU softreset: 0x%08X\n", VAR_45);

 FUNC_7(VAR_44);
 FUNC_2(VAR_44->dev, "  VM_CONTEXT0_PROTECTION_FAULT_ADDR   0x%08X\n",
   FUNC_0(0x14F8));
 FUNC_2(VAR_44->dev, "  VM_CONTEXT0_PROTECTION_FAULT_STATUS 0x%08X\n",
   FUNC_0(0x14D8));
 FUNC_2(VAR_44->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
   FUNC_0(0x14FC));
 FUNC_2(VAR_44->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
   FUNC_0(0x14DC));


 FUNC_1(VAR_0, VAR_1 | VAR_2);

 if (VAR_45 & VAR_12) {

  VAR_49 = FUNC_0(VAR_5 + VAR_3);
  VAR_49 &= ~VAR_6;
  FUNC_1(VAR_5 + VAR_3, VAR_49);
 }

 if (VAR_45 & VAR_13) {

  VAR_49 = FUNC_0(VAR_5 + VAR_4);
  VAR_49 &= ~VAR_6;
  FUNC_1(VAR_5 + VAR_4, VAR_49);
 }

 FUNC_8(50);

 FUNC_5(VAR_44, &VAR_46);
 if (FUNC_6(VAR_44)) {
  FUNC_3(VAR_44->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_45 & (VAR_14 | VAR_9)) {
  VAR_47 = VAR_21 |
   VAR_23 |
   VAR_27 |
   VAR_32 |
   VAR_34 |
   VAR_37 |
   VAR_36 |
   VAR_38 |
   VAR_40 |
   VAR_39 |
   VAR_41 |
   VAR_29;
 }

 if (VAR_45 & VAR_10) {
  VAR_47 |= VAR_22 | VAR_41;

  VAR_48 |= VAR_28;
 }

 if (VAR_45 & VAR_12)
  VAR_48 |= VAR_25;

 if (VAR_45 & VAR_13)
  VAR_48 |= VAR_26;

 if (VAR_45 & VAR_11)
  VAR_48 |= VAR_24;

 if (VAR_45 & VAR_18)
  VAR_48 |= VAR_33;

 if (VAR_45 & VAR_19)
  VAR_48 |= VAR_35;

 if (VAR_45 & VAR_16)
  VAR_48 |= VAR_30;

 if (VAR_45 & VAR_15)
  VAR_48 |= VAR_28;

 if (VAR_45 & VAR_20)
  VAR_48 |= VAR_42;

 if (!(VAR_44->flags & VAR_8)) {
  if (VAR_45 & VAR_17)
   VAR_48 |= VAR_31;
 }

 if (VAR_47) {
  VAR_49 = FUNC_0(VAR_7);
  VAR_49 |= VAR_47;
  FUNC_2(VAR_44->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_49);
  FUNC_1(VAR_7, VAR_49);
  VAR_49 = FUNC_0(VAR_7);

  FUNC_8(50);

  VAR_49 &= ~VAR_47;
  FUNC_1(VAR_7, VAR_49);
  VAR_49 = FUNC_0(VAR_7);
 }

 if (VAR_48) {
  VAR_49 = FUNC_0(VAR_43);
  VAR_49 |= VAR_48;
  FUNC_2(VAR_44->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_49);
  FUNC_1(VAR_43, VAR_49);
  VAR_49 = FUNC_0(VAR_43);

  FUNC_8(50);

  VAR_49 &= ~VAR_48;
  FUNC_1(VAR_43, VAR_49);
  VAR_49 = FUNC_0(VAR_43);
 }


 FUNC_8(50);

 FUNC_4(VAR_44, &VAR_46);
 FUNC_8(50);

 FUNC_7(VAR_44);
}
