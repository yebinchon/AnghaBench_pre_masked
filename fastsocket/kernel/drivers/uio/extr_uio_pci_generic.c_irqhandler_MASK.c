
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pci_generic_dev {int pdev; } ;
struct uio_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct uio_pci_generic_dev* FUNC_1 (struct uio_info*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, struct uio_info *VAR_3)
{
 struct uio_pci_generic_dev *VAR_4 = FUNC_1(VAR_3);

 if (!FUNC_0(VAR_4->pdev))
  return VAR_1;


 return VAR_0;
}
