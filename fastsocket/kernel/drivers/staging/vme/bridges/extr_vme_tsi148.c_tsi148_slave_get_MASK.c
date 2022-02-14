
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_slave_resource {unsigned int number; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
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
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long long*) ;
 TYPE_1__* VAR_43 ;

int FUNC_2(struct vme_slave_resource *VAR_44, int *VAR_45,
 unsigned long long *VAR_46, unsigned long long *VAR_47,
 dma_addr_t *VAR_48, vme_address_t *VAR_49, vme_cycle_t *VAR_50)
{
 unsigned int VAR_51, VAR_52 = 0, VAR_53 = 0;
 unsigned int VAR_54, VAR_55;
 unsigned int VAR_56, VAR_57;
 unsigned int VAR_58, VAR_59;
 unsigned long long VAR_60, VAR_61;


 VAR_51 = VAR_44->number;


 VAR_53 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_20);

 VAR_55 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_26);
 VAR_54 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_25);
 VAR_57 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_22);
 VAR_56 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_21);
 VAR_59 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_24);
 VAR_58 = FUNC_0(VAR_43->base + VAR_0[VAR_51] +
  VAR_23);


 FUNC_1(VAR_55, VAR_54, VAR_46);
 FUNC_1(VAR_57, VAR_56, &VAR_60);
 FUNC_1(VAR_59, VAR_58, &VAR_61);

 *VAR_48 = (dma_addr_t)VAR_46 + VAR_61;

 *VAR_45 = 0;
 *VAR_49 = 0;
 *VAR_50 = 0;

 if (VAR_53 & VAR_15)
  *VAR_45 = 1;

 if ((VAR_53 & VAR_12) == VAR_8) {
  VAR_52 = 0x10;
  *VAR_49 |= VAR_33;
 }
 if ((VAR_53 & VAR_12) == VAR_9) {
  VAR_52 = 0x1000;
  *VAR_49 |= VAR_34;
 }
 if ((VAR_53 & VAR_12) == VAR_10) {
  VAR_52 = 0x10000;
  *VAR_49 |= VAR_35;
 }
 if ((VAR_53 & VAR_12) == VAR_11) {
  VAR_52 = 0x10000;
  *VAR_49 |= VAR_36;
 }


 *VAR_47 = (unsigned long long)((VAR_60 - *VAR_46) + VAR_52);


 if ((VAR_53 & VAR_6) == VAR_3)
  *VAR_50 |= VAR_28;
 if ((VAR_53 & VAR_6) == VAR_4)
  *VAR_50 |= VAR_29;
 if ((VAR_53 & VAR_6) == VAR_5)
  *VAR_50 |= VAR_30;

 if (VAR_53 & VAR_13)
  *VAR_50 |= VAR_37;
 if (VAR_53 & VAR_16)
  *VAR_50 |= VAR_39;
 if (VAR_53 & VAR_7)
  *VAR_50 |= VAR_32;
 if (VAR_53 & VAR_1)
  *VAR_50 |= VAR_27;
 if (VAR_53 & VAR_2)
  *VAR_50 |= VAR_31;

 if (VAR_53 & VAR_19)
  *VAR_50 |= VAR_41;
 if (VAR_53 & VAR_17)
  *VAR_50 |= VAR_42;
 if (VAR_53 & VAR_18)
  *VAR_50 |= VAR_40;
 if (VAR_53 & VAR_14)
  *VAR_50 |= VAR_38;

 return 0;
}
