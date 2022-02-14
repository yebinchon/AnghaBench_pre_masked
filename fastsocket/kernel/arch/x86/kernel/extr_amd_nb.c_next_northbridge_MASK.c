
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;
 int FUNC_1 (struct pci_device_id*,struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_2(struct pci_dev *VAR_1,
     struct pci_device_id *VAR_2)
{
 do {
  VAR_1 = FUNC_0(VAR_0, VAR_0, VAR_1);
  if (!VAR_1)
   break;
 } while (!FUNC_1(VAR_2, VAR_1));
 return VAR_1;
}
