
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int subordinate; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int (*) (int ,int ,void*,void**),int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static acpi_status
FUNC_9(acpi_handle VAR_2, u32 VAR_3, void *VAR_4, void **VAR_5)
{
 acpi_status VAR_6;
 struct pci_dev *VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 if (!VAR_7 || !VAR_7->subordinate)
  goto out;


 if ((FUNC_5(VAR_2) > 0)) {
  FUNC_4("found PCI-to-PCI bridge at PCI %s\n", FUNC_7(VAR_7));
  FUNC_3(VAR_2);
 }


 VAR_6 = FUNC_2(VAR_0, VAR_2, (u32)1,
         FUNC_9, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_6))
  FUNC_8("find_p2p_bridge failed (error code = 0x%x)\n", VAR_6);

 out:
 FUNC_6(VAR_7);
 return VAR_1;
}
