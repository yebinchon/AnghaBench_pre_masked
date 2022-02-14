
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmComResHWDescr {int dummy; } ;
struct TYPE_2__ {int dwHostHibernatMemRegionSize; int dwHostHibernatMemRegion; int dwHostMemoryRegionSize; int dwHostMemoryRegion; int dwDeviceRegistersLocation; int bCapabilities; int dwClockUpdateRes; int dwClockFrequency; int bcdSpecVersion; int bDescriptorSubtype; int bDescriptorType; int bLength; } ;
struct saa7164_dev {TYPE_1__ hwdesc; } ;


 int FUNC_0 (int,char*,TYPE_1__*,...) ;

__attribute__((used)) static void FUNC_1(struct saa7164_dev *VAR_0)
{
 FUNC_0(1, "@0x%p hwdesc sizeof(struct tmComResHWDescr) = %d bytes\n",
  &VAR_0->hwdesc, (u32)sizeof(struct tmComResHWDescr));

 FUNC_0(1, " .bLength = 0x%x\n", VAR_0->hwdesc.bLength);
 FUNC_0(1, " .bDescriptorType = 0x%x\n", VAR_0->hwdesc.bDescriptorType);
 FUNC_0(1, " .bDescriptorSubtype = 0x%x\n",
  VAR_0->hwdesc.bDescriptorSubtype);

 FUNC_0(1, " .bcdSpecVersion = 0x%x\n", VAR_0->hwdesc.bcdSpecVersion);
 FUNC_0(1, " .dwClockFrequency = 0x%x\n", VAR_0->hwdesc.dwClockFrequency);
 FUNC_0(1, " .dwClockUpdateRes = 0x%x\n", VAR_0->hwdesc.dwClockUpdateRes);
 FUNC_0(1, " .bCapabilities = 0x%x\n", VAR_0->hwdesc.bCapabilities);
 FUNC_0(1, " .dwDeviceRegistersLocation = 0x%x\n",
  VAR_0->hwdesc.dwDeviceRegistersLocation);

 FUNC_0(1, " .dwHostMemoryRegion = 0x%x\n",
  VAR_0->hwdesc.dwHostMemoryRegion);

 FUNC_0(1, " .dwHostMemoryRegionSize = 0x%x\n",
  VAR_0->hwdesc.dwHostMemoryRegionSize);

 FUNC_0(1, " .dwHostHibernatMemRegion = 0x%x\n",
  VAR_0->hwdesc.dwHostHibernatMemRegion);

 FUNC_0(1, " .dwHostHibernatMemRegionSize = 0x%x\n",
  VAR_0->hwdesc.dwHostHibernatMemRegionSize);
}
