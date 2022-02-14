
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ class_mask; scalar_t__ subvendor; scalar_t__ vendor; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct pci_dev* FUNC_2 (struct pci_device_id const*,int *) ;

int FUNC_3(const struct pci_device_id *VAR_0)
{
 struct pci_dev *VAR_1 = ((void*)0);

 FUNC_0(FUNC_1());
 while (VAR_0->vendor || VAR_0->subvendor || VAR_0->class_mask) {
  VAR_1 = FUNC_2(VAR_0, ((void*)0));
  if (VAR_1)
   goto exit;
  VAR_0++;
 }
exit:
 if (VAR_1)
  return 1;
 return 0;
}
