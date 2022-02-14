
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
typedef int u32 ;


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




 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1 (u32 *VAR_31, vme_address_t VAR_32,
 vme_cycle_t VAR_33, vme_width_t VAR_34)
{

 switch (VAR_33 & (141 | 140 | 139)) {
 case 141:
  *VAR_31 |= VAR_1;
  break;
 case 140:
  *VAR_31 |= VAR_2;
  break;
 case 139:
  *VAR_31 |= VAR_3;
  break;
 }


 if (VAR_33 & VAR_29) {
  *VAR_31 |= VAR_22;
 }
 if (VAR_33 & VAR_26) {
  *VAR_31 |= VAR_20;
 }
 if (VAR_33 & VAR_27) {
  *VAR_31 |= VAR_21;
 }
 if (VAR_33 & VAR_25) {
  *VAR_31 |= VAR_19;
 }
 if (VAR_33 & VAR_23) {
  *VAR_31 |= VAR_17;
 }
 if (VAR_33 & VAR_24) {
  FUNC_0("Currently not setting Broadcast Select Registers\n");
  *VAR_31 |= VAR_18;
 }


 switch (VAR_34) {
 case 133:
  *VAR_31 |= VAR_13;
  break;
 case 132:
  *VAR_31 |= VAR_14;
  break;
 default:
  FUNC_0("Invalid data width\n");
  return -VAR_0;
 }


 switch (VAR_32) {
 case 138:
  *VAR_31 |= VAR_4;
  break;
 case 137:
  *VAR_31 |= VAR_5;
  break;
 case 136:
  *VAR_31 |= VAR_6;
  break;
 case 135:
  *VAR_31 |= VAR_7;
  break;
 case 134:
  *VAR_31 |= VAR_8;
  break;
 case 131:
  *VAR_31 |= VAR_9;
  break;
 case 130:
  *VAR_31 |= VAR_10;
  break;
 case 129:
  *VAR_31 |= VAR_11;
  break;
 case 128:
  *VAR_31 |= VAR_12;
  break;
 default:
  FUNC_0("Invalid address space\n");
  return -VAR_0;
  break;
 }

 if (VAR_33 & VAR_30)
  *VAR_31 |= VAR_16;
 if (VAR_33 & VAR_28)
  *VAR_31 |= VAR_15;

 return 0;
}
