
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct iohidmanager_hid_adapter {size_t slot; int data; } ;
struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
typedef int IOReturn ;
typedef int IOHIDReportType ;
typedef scalar_t__ CFIndex ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      IOReturn VAR_1, void *VAR_2,
      IOHIDReportType VAR_3, uint32_t VAR_4, uint8_t *VAR_5,
      CFIndex VAR_6)
{
   struct iohidmanager_hid_adapter *VAR_7 =
      (struct iohidmanager_hid_adapter*)VAR_0;
   iohidmanager_hid_t *VAR_8 = (iohidmanager_hid_t*)FUNC_0();

   if (VAR_8 && VAR_7)
      FUNC_1(&VAR_8->slots[VAR_7->slot], VAR_7->slot,
            VAR_7->data, (uint32_t)(VAR_6 + 1));
}
