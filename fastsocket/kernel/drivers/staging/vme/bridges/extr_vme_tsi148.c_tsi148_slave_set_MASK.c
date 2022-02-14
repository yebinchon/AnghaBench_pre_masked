
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vme_cycle_t ;
typedef unsigned long long vme_address_t ;
struct vme_slave_resource {unsigned long long number; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_3__ {int prefetchSize; scalar_t__ prefetchThreshold; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
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
 unsigned int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;



 int VAR_29 ;
 int VAR_30 ;




 int VAR_31 ;

 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;




 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned long long,unsigned int*,unsigned int*) ;
 TYPE_2__* VAR_37 ;
 TYPE_1__* VAR_38 ;
 int VAR_39 ;

int FUNC_4(struct vme_slave_resource *VAR_40, int VAR_41,
 unsigned long long VAR_42, unsigned long long VAR_43,
 dma_addr_t VAR_44, vme_address_t VAR_45, vme_cycle_t VAR_46)
{
 unsigned int VAR_47, VAR_48 = 0, VAR_49 = 0;
 unsigned int VAR_50 = 0;
 unsigned int VAR_51, VAR_52;
 unsigned int VAR_53, VAR_54;
 unsigned int VAR_55, VAR_56;
 unsigned long long VAR_57, VAR_58;
 VAR_47 = VAR_40->number;

 switch (VAR_45) {
 case 136:
  VAR_49 = 0x10;
  VAR_48 |= VAR_9;
  break;
 case 135:
  VAR_49 = 0x1000;
  VAR_48 |= VAR_10;
  break;
 case 134:
  VAR_49 = 0x10000;
  VAR_48 |= VAR_11;
  break;
 case 133:
  VAR_49 = 0x10000;
  VAR_48 |= VAR_12;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 default:
  FUNC_2("Invalid address space\n");
  return -VAR_0;
  break;
 }


 FUNC_3(VAR_42, &VAR_52, &VAR_51);





 VAR_57 = VAR_42 + VAR_43 - VAR_49;
 FUNC_3(VAR_57, &VAR_54, &VAR_53);
 VAR_58 = (unsigned long long)VAR_44 - VAR_42;
 FUNC_3(VAR_58, &VAR_56, &VAR_55);

 if (VAR_51 & (VAR_49 - 1)) {
  FUNC_2("Invalid VME base alignment\n");
  return -VAR_0;
 }
 if (VAR_53 & (VAR_49 - 1)) {
  FUNC_2("Invalid VME bound alignment\n");
  return -VAR_0;
 }
 if (VAR_55 & (VAR_49 - 1)) {
  FUNC_2("Invalid PCI Offset alignment\n");
  return -VAR_0;
 }







 VAR_50 = FUNC_0(VAR_37->base + VAR_1[VAR_47] +
  VAR_21);
 VAR_50 &= ~VAR_16;
 FUNC_1(VAR_50, VAR_37->base + VAR_1[VAR_47] +
  VAR_21);


 FUNC_1(VAR_52, VAR_37->base + VAR_1[VAR_47] +
  VAR_27);
 FUNC_1(VAR_51, VAR_37->base + VAR_1[VAR_47] +
  VAR_26);
 FUNC_1(VAR_54, VAR_37->base + VAR_1[VAR_47] +
  VAR_23);
 FUNC_1(VAR_53, VAR_37->base + VAR_1[VAR_47] +
  VAR_22);
 FUNC_1(VAR_56, VAR_37->base + VAR_1[VAR_47] +
  VAR_25);
 FUNC_1(VAR_55, VAR_37->base + VAR_1[VAR_47] +
  VAR_24);
 VAR_50 &= ~VAR_7;
 switch (VAR_46 & (139 | 138 | 137)) {
 case 139:
  VAR_50 |= VAR_4;
  break;
 case 138:
  VAR_50 |= VAR_5;
  break;
 case 137:
  VAR_50 |= VAR_6;
  break;
 }


 VAR_50 &= ~(0x1F << 7);
 if (VAR_46 & VAR_31)
  VAR_50 |= VAR_14;
 if (VAR_46 & VAR_33)
  VAR_50 |= VAR_17;
 if (VAR_46 & VAR_30)
  VAR_50 |= VAR_8;
 if (VAR_46 & VAR_28)
  VAR_50 |= VAR_2;
 if (VAR_46 & VAR_29)
  VAR_50 |= VAR_3;


 VAR_50 &= ~VAR_13;
 VAR_50 |= VAR_48;

 VAR_50 &= ~0xF;
 if (VAR_46 & VAR_35)
  VAR_50 |= VAR_20 ;
 if (VAR_46 & VAR_36)
  VAR_50 |= VAR_18;
 if (VAR_46 & VAR_34)
  VAR_50 |= VAR_19;
 if (VAR_46 & VAR_32)
  VAR_50 |= VAR_15;


 FUNC_1(VAR_50, VAR_37->base + VAR_1[VAR_47] +
  VAR_21);

 if (VAR_41)
  VAR_50 |= VAR_16;

 FUNC_1(VAR_50, VAR_37->base + VAR_1[VAR_47] +
  VAR_21);

 return 0;
}
