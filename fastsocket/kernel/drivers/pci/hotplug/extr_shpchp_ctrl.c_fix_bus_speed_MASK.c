
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slot {int dummy; } ;
struct controller {int dummy; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,struct slot*,int) ;
 int FUNC_1 (struct controller*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct controller *VAR_1, struct slot *VAR_2,
  u8 VAR_3, enum pci_bus_speed VAR_4, enum pci_bus_speed VAR_5,
  enum pci_bus_speed VAR_6)
{
 int VAR_7 = 0;





 if (VAR_3) {
  if (VAR_4 < VAR_5) {
   FUNC_1(VAR_1, "Speed of bus %x and adapter %x "
     "mismatch\n", VAR_5, VAR_4);
   VAR_7 = VAR_0;
  }
  return VAR_7;
 }

 if (VAR_4 < VAR_6) {
  if (VAR_5 != VAR_4)
   VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
 } else {
  if (VAR_5 != VAR_6)
   VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6);
 }
 return VAR_7;
}
