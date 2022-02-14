
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


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
 int FUNC_0 (struct controller*,char*,int) ;
 int FUNC_1 (struct controller*,int ) ;
 int FUNC_2 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_3 (struct slot *VAR_18, enum pci_bus_speed *VAR_19)
{
 int VAR_20 = 0;
 struct controller *VAR_21 = VAR_18->ctrl;
 enum pci_bus_speed VAR_22 = VAR_15;
 u16 VAR_23 = FUNC_2(VAR_21, VAR_17);
 u8 VAR_24 = FUNC_1(VAR_21, VAR_16);
 u8 VAR_25 = (VAR_24 == 2) ? (VAR_23 & 0xF) : (VAR_23 & 0x7);

 if ((VAR_24 == 1) && (VAR_25 > 4)) {
  *VAR_19 = VAR_15;
  return -VAR_0;
 }

 switch (VAR_25) {
 case 0x0:
  *VAR_19 = VAR_9;
  break;
 case 0x1:
  *VAR_19 = VAR_10;
  break;
 case 0x2:
  *VAR_19 = VAR_11;
  break;
 case 0x3:
  *VAR_19 = VAR_1;
  break;
 case 0x4:
  *VAR_19 = VAR_5;
  break;
 case 0x5:
  *VAR_19 = VAR_14;
  break;
 case 0x6:
  *VAR_19 = VAR_4;
  break;
 case 0x7:
  *VAR_19 = VAR_8;
  break;
 case 0x8:
  *VAR_19 = VAR_12;
  break;
 case 0x9:
  *VAR_19 = VAR_2;
  break;
 case 0xa:
  *VAR_19 = VAR_6;
  break;
 case 0xb:
  *VAR_19 = VAR_13;
  break;
 case 0xc:
  *VAR_19 = VAR_3;
  break;
 case 0xd:
  *VAR_19 = VAR_7;
  break;
 default:
  *VAR_19 = VAR_15;
  VAR_20 = -VAR_0;
  break;
 }

 FUNC_0(VAR_21, "Current bus speed = %d\n", VAR_22);
 return VAR_20;
}
