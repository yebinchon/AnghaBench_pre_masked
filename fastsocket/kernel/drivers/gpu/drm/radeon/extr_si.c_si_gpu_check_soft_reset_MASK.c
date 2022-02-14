
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
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
 int FUNC_1 (scalar_t__) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_3(struct radeon_device *VAR_50)
{
 u32 VAR_51 = 0;
 u32 VAR_52;


 VAR_52 = FUNC_1(VAR_15);
 if (VAR_52 & (VAR_25 | VAR_40 |
     VAR_0 | VAR_45 |
     VAR_46 | VAR_47 |
     VAR_5 | VAR_1 |
     VAR_12 | VAR_42 |
     VAR_17 | VAR_18))
  VAR_51 |= VAR_31;

 if (VAR_52 & (VAR_2 | VAR_26 |
     VAR_3 | VAR_4))
  VAR_51 |= VAR_27;

 if (VAR_52 & VAR_13)
  VAR_51 |= VAR_32 | VAR_31 | VAR_27;


 VAR_52 = FUNC_1(VAR_16);
 if (VAR_52 & (VAR_39 | VAR_38))
  VAR_51 |= VAR_35;


 VAR_52 = FUNC_1(VAR_11 + VAR_6);
 if (!(VAR_52 & VAR_10))
  VAR_51 |= VAR_29;


 VAR_52 = FUNC_1(VAR_11 + VAR_8);
 if (!(VAR_52 & VAR_10))
  VAR_51 |= VAR_30;


 VAR_52 = FUNC_1(VAR_44);
 if (VAR_52 & VAR_9)
  VAR_51 |= VAR_29;

 if (VAR_52 & VAR_7)
  VAR_51 |= VAR_30;


 VAR_52 = FUNC_1(VAR_43);

 if (VAR_52 & VAR_19)
  VAR_51 |= VAR_33;

 if (VAR_52 & VAR_41)
  VAR_51 |= VAR_36;

 if (VAR_52 & VAR_14)
  VAR_51 |= VAR_32;

 if (VAR_52 & VAR_48)
  VAR_51 |= VAR_37;

 if (VAR_52 & (VAR_21 | VAR_22 |
     VAR_23 | VAR_24))
  VAR_51 |= VAR_34;

 if (FUNC_2(VAR_50))
  VAR_51 |= VAR_28;


 VAR_52 = FUNC_1(VAR_49);
 if (VAR_52 & VAR_20)
  VAR_51 |= VAR_37;


 if (VAR_51 & VAR_34) {
  FUNC_0("MC busy: 0x%08X, clearing.\n", VAR_51);
  VAR_51 &= ~VAR_34;
 }

 return VAR_51;
}
