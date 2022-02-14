
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_3)
{
 if (VAR_3->subsystem_vendor == VAR_2 &&
  (VAR_3->subsystem_device == VAR_0 ||
   VAR_3->subsystem_device == VAR_1)) {
  return 1;
 }
 return 0;
}
