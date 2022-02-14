
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct acpi_device_info {int valid; scalar_t__ address; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_integer ;
typedef scalar_t__ acpi_handle ;
struct TYPE_2__ {unsigned int number; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,struct acpi_device_info**) ;
 int FUNC_6 (struct acpi_device_info*) ;
 struct pci_dev* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2, acpi_handle *VAR_3,
          acpi_integer *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_7(VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8;
 acpi_integer VAR_9;
 acpi_handle VAR_10;
 acpi_status VAR_11;
 struct acpi_device_info *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_1;

 VAR_6 = VAR_5->bus->number;
 VAR_7 = FUNC_4(VAR_5->devfn);
 VAR_8 = FUNC_3(VAR_5->devfn);

 VAR_9 = (acpi_integer)(VAR_7 << 16 | VAR_8);

 FUNC_1("ENTER: pci %02x:%02x.%01x\n", VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_2(VAR_2);
 if (!VAR_10) {
  FUNC_1("no acpi handle for device\n");
  goto err;
 }

 VAR_11 = FUNC_5(VAR_10, &VAR_12);
 if (FUNC_0(VAR_11)) {
  FUNC_1("get_object_info for device failed\n");
  goto err;
 }
 if (VAR_12 && (VAR_12->valid & VAR_0) &&
     VAR_12->address == VAR_9) {
  *VAR_4 = VAR_9;
  *VAR_3 = VAR_10;
 } else {
  FUNC_1("get_object_info for device has wrong "
   " address: %llu, should be %u\n",
   VAR_12 ? (unsigned long long)VAR_12->address : -1ULL,
   (unsigned int)VAR_9);
  goto err;
 }

 FUNC_1("for dev=0x%x.%x, addr=0x%llx, *handle=0x%p\n",
   VAR_7, VAR_8, (unsigned long long)VAR_9, *VAR_3);
 VAR_13 = 0;
err:
 FUNC_6(VAR_12);
 return VAR_13;
}
