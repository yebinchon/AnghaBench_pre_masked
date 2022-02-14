
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,struct pci_device_id const*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1,
       const struct pci_device_id *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_2, &VAR_0);
}
