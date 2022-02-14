
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct acpiphp_ioapic {int list; struct pci_dev* dev; int gsi_base; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 struct pci_dev* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct acpiphp_ioapic*) ;
 struct acpiphp_ioapic* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_13 (struct pci_dev*,int ,char*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static acpi_status
FUNC_18(acpi_handle VAR_7, u32 VAR_8, void *VAR_9, void **VAR_10)
{
 acpi_status VAR_11;
 unsigned long long VAR_12;
 acpi_handle VAR_13;
 struct pci_dev *VAR_14;
 u32 VAR_15;
 u64 VAR_16;
 struct acpiphp_ioapic *VAR_17;


 VAR_11 = FUNC_1(VAR_7, "_STA", ((void*)0), &VAR_12);
 if (FUNC_0(VAR_11) && VAR_12 != VAR_0)
  return VAR_1;


 VAR_11 = FUNC_2(VAR_7, "_HID", &VAR_13);
 if (FUNC_0(VAR_11))
  return VAR_1;

 if (FUNC_5(VAR_7, &VAR_15))
  return VAR_3;

 VAR_17 = FUNC_7(sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return VAR_2;

 VAR_14 = FUNC_4(VAR_7);
 if (!VAR_14)
  goto exit_kfree;

 if (FUNC_11(VAR_14))
  goto exit_pci_dev_put;

 FUNC_15(VAR_14);

 if (FUNC_13(VAR_14, 0, "I/O APIC(acpiphp)"))
  goto exit_pci_disable_device;

 VAR_16 = FUNC_14(VAR_14, 0);
 if (FUNC_3(VAR_7, VAR_16, VAR_15))
  goto exit_pci_release_region;

 VAR_17->gsi_base = VAR_15;
 VAR_17->dev = VAR_14;
 FUNC_16(&VAR_6);
 FUNC_8(&VAR_17->list, &VAR_5);
 FUNC_17(&VAR_6);

 return VAR_3;

 exit_pci_release_region:
 FUNC_12(VAR_14, 0);
 exit_pci_disable_device:
 FUNC_10(VAR_14);
 exit_pci_dev_put:
 FUNC_9(VAR_14);
 exit_kfree:
 FUNC_6(VAR_17);

 return VAR_3;
}
