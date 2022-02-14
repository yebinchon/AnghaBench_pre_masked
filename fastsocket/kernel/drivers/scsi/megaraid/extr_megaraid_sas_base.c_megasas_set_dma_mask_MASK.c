
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_2(struct pci_dev *VAR_1)
{



 if (VAR_0) {
  if (FUNC_1(VAR_1, FUNC_0(64)) != 0) {

   if (FUNC_1(VAR_1, FUNC_0(32)) != 0)
    goto fail_set_dma_mask;
  }
 } else {
  if (FUNC_1(VAR_1, FUNC_0(32)) != 0)
   goto fail_set_dma_mask;
 }
 return 0;

fail_set_dma_mask:
 return 1;
}
