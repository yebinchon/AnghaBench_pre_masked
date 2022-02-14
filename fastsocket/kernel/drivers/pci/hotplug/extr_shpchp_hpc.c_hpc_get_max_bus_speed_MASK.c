
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct controller*,char*,int) ;
 int FUNC_1 (struct controller*,int ) ;
 int FUNC_2 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_3 (struct slot *VAR_27, enum pci_bus_speed *VAR_28)
{
 int VAR_29 = 0;
 struct controller *VAR_30 = VAR_27->ctrl;
 enum pci_bus_speed VAR_31 = VAR_12;
 u8 VAR_32 = FUNC_1(VAR_30, VAR_13);
 u32 VAR_33 = FUNC_2(VAR_30, VAR_25);
 u32 VAR_34 = FUNC_2(VAR_30, VAR_26);

 if (VAR_32 == 2) {
  if (VAR_34 & VAR_19)
   VAR_31 = VAR_6;
  else if (VAR_34 & VAR_16)
   VAR_31 = VAR_3;
  else if (VAR_34 & VAR_24)
   VAR_31 = VAR_11;
  else if (VAR_34 & VAR_18)
   VAR_31 = VAR_5;
  else if (VAR_34 & VAR_15)
   VAR_31 = VAR_2;
  else if (VAR_34 & VAR_23)
   VAR_31 = VAR_10;
 }

 if (VAR_31 == VAR_12) {
  if (VAR_33 & VAR_17)
   VAR_31 = VAR_4;
  else if (VAR_33 & VAR_14)
   VAR_31 = VAR_1;
  else if (VAR_33 & VAR_22)
   VAR_31 = VAR_9;
  else if (VAR_34 & VAR_21)
   VAR_31 = VAR_8;
  else if (VAR_33 & VAR_20)
   VAR_31 = VAR_7;
  else
   VAR_29 = -VAR_0;
 }

 *VAR_28 = VAR_31;
 FUNC_0(VAR_30, "Max bus speed = %d\n", VAR_31);

 return VAR_29;
}
