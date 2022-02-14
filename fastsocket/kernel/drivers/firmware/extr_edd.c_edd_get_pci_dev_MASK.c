
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int function; int slot; int bus; } ;
struct TYPE_5__ {TYPE_1__ pci; } ;
struct TYPE_6__ {TYPE_2__ interface_path; } ;
struct edd_info {TYPE_3__ params; } ;
struct edd_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct edd_info* FUNC_1 (struct edd_device*) ;
 scalar_t__ FUNC_2 (struct edd_device*,char*) ;
 struct pci_dev* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct pci_dev *
FUNC_4(struct edd_device *VAR_0)
{
 struct edd_info *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_0, "PCI") || FUNC_2(VAR_0, "XPRS")) {
  return FUNC_3(VAR_1->params.interface_path.pci.bus,
         FUNC_0(VAR_1->params.interface_path.pci.slot,
            VAR_1->params.interface_path.pci.
            function));
 }
 return ((void*)0);
}
