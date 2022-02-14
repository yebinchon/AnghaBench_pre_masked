
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; } ;
struct TYPE_2__ {scalar_t__ device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static struct pci_dev *FUNC_2(struct pci_dev *VAR_4, int *VAR_5)
{
 int VAR_6;

 for (VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_4);
      VAR_4 != ((void*)0);
      VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_4)) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   if (VAR_4->device == VAR_2[VAR_6].device_id) {
    *VAR_5 = VAR_6;
    return VAR_4;
   }
  }
  FUNC_1
      ("unknown Data Translation PCI device found with device_id=0x%04x\n",
       VAR_4->device);
 }
 *VAR_5 = -1;
 return VAR_4;
}
