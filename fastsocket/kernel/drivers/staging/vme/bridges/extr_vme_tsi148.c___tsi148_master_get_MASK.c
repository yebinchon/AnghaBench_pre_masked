
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_master_resource {unsigned int number; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
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
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
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
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long long*) ;
 TYPE_1__* VAR_59 ;

int FUNC_2( struct vme_master_resource *VAR_60, int *VAR_61,
 unsigned long long *VAR_62, unsigned long long *VAR_63,
 vme_address_t *VAR_64, vme_cycle_t *VAR_65, vme_width_t *VAR_66)
{
 unsigned int VAR_67, VAR_68;
 unsigned int VAR_69, VAR_70;
 unsigned int VAR_71, VAR_72;
 unsigned int VAR_73, VAR_74;

 unsigned long long VAR_75, VAR_76, VAR_77;

 VAR_67 = VAR_60->number;

 VAR_68 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_0);

 VAR_70 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_6);
 VAR_69 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_5);
 VAR_72 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_2);
 VAR_71 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_1);
 VAR_74 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_4);
 VAR_73 = FUNC_0(VAR_59->base + VAR_7[VAR_67] +
  VAR_3);


 FUNC_1(VAR_70, VAR_69, &VAR_75);
 FUNC_1(VAR_72, VAR_71, &VAR_76);
 FUNC_1(VAR_74, VAR_73, &VAR_77);

 *VAR_62 = VAR_75 + VAR_77;
 *VAR_63 = (unsigned long long)(VAR_76 - VAR_75) + 0x10000;

 *VAR_61 = 0;
 *VAR_64 = 0;
 *VAR_65 = 0;
 *VAR_66 = 0;

 if (VAR_68 & VAR_25)
  *VAR_61 = 1;


 if ((VAR_68 & VAR_17) == VAR_12)
  *VAR_64 |= VAR_41;
 if ((VAR_68 & VAR_17) == VAR_13)
  *VAR_64 |= VAR_42;
 if ((VAR_68 & VAR_17) == VAR_14)
  *VAR_64 |= VAR_43;
 if ((VAR_68 & VAR_17) == VAR_15)
  *VAR_64 |= VAR_44;
 if ((VAR_68 & VAR_17) == VAR_16)
  *VAR_64 |= VAR_46;
 if ((VAR_68 & VAR_17) == VAR_18)
  *VAR_64 |= VAR_55;
 if ((VAR_68 & VAR_17) == VAR_19)
  *VAR_64 |= VAR_56;
 if ((VAR_68 & VAR_17) == VAR_20)
  *VAR_64 |= VAR_57;
 if ((VAR_68 & VAR_17) == VAR_21)
  *VAR_64 |= VAR_58;


 if ((VAR_68 & VAR_11) == VAR_8)
  *VAR_65 |= VAR_36;
 if ((VAR_68 & VAR_11) == VAR_9)
  *VAR_65 |= VAR_37;
 if ((VAR_68 & VAR_11) == VAR_10)
  *VAR_65 |= VAR_38;


 if ((VAR_68 & VAR_32 ) == VAR_34)
  *VAR_65 |= VAR_52;
 if ((VAR_68 & VAR_32 ) == VAR_31)
  *VAR_65 |= VAR_45;
 if ((VAR_68 & VAR_32 ) == VAR_33)
  *VAR_65 |= VAR_50;
 if ((VAR_68 & VAR_32 ) == VAR_30)
  *VAR_65 |= VAR_40;
 if ((VAR_68 & VAR_32 ) == VAR_28)
  *VAR_65 |= VAR_35;
 if ((VAR_68 & VAR_32 ) == VAR_29)
  *VAR_65 |= VAR_39;

 if (VAR_68 & VAR_27)
  *VAR_65 |= VAR_53;
 else
  *VAR_65 |= VAR_54;

 if (VAR_68 & VAR_26)
  *VAR_65 |= VAR_51;
 else
  *VAR_65 |= VAR_49;


 if ((VAR_68 & VAR_24) == VAR_22)
  *VAR_66 = VAR_47;
 if ((VAR_68 & VAR_24) == VAR_23)
  *VAR_66 = VAR_48;

 return 0;
}
