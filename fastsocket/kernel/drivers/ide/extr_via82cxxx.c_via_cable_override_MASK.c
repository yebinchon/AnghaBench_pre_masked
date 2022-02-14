
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1)
{

 if (FUNC_0(VAR_0))
  return 1;


 if (VAR_1->subsystem_vendor == 0x161F &&
     VAR_1->subsystem_device == 0x2032)
  return 1;

 return 0;
}
