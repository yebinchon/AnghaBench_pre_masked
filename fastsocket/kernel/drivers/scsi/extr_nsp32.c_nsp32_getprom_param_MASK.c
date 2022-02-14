
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pci_devid; } ;
typedef TYPE_2__ nsp32_hw_data ;
struct TYPE_7__ {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(nsp32_hw_data *VAR_8)
{
 int VAR_9 = VAR_8->pci_devid->vendor;
 int VAR_10 = VAR_8->pci_devid->device;
 int VAR_11, VAR_12, VAR_13;




 VAR_11 = FUNC_4(VAR_8, 0x7e);
 if (VAR_11 != 0x55) {
  FUNC_3(VAR_1, "No EEPROM detected: 0x%x", VAR_11);
  return VAR_0;
 }
 VAR_11 = FUNC_4(VAR_8, 0x7f);
 if (VAR_11 != 0xaa) {
  FUNC_3(VAR_1, "Invalid number: 0x%x", VAR_11);
  return VAR_0;
 }




 if (VAR_9 == VAR_7 &&
     VAR_10 == VAR_6) {
  VAR_11 = FUNC_2(VAR_8);
 } else if (VAR_9 == VAR_7 &&
     VAR_10 == VAR_4) {
  VAR_11 = FUNC_1(VAR_8);
 } else if (VAR_9 == VAR_7 &&
     VAR_10 == VAR_5 ) {
  VAR_11 = FUNC_1(VAR_8);
 } else {
  FUNC_3(VAR_2, "Unknown EEPROM");
  VAR_11 = VAR_0;
 }


 for (VAR_13 = 0; VAR_13 <= 0x1f; VAR_13++) {
  VAR_12 = FUNC_4(VAR_8, VAR_13);
  FUNC_0(VAR_3,
     "rom address 0x%x : 0x%x", VAR_13, VAR_12);
 }

 return VAR_11;
}
