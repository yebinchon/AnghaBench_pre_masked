
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {scalar_t__ priv; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, struct uio_info *VAR_1)
{
 FUNC_0(&VAR_0->dev, "PCI-TC board vendor: %x%x number: %x%x"
  " revision: %c%c\n",
  FUNC_1(VAR_1->priv + 0x01),
  FUNC_1(VAR_1->priv + 0x00),
  FUNC_1(VAR_1->priv + 0x03),
  FUNC_1(VAR_1->priv + 0x02),
  FUNC_1(VAR_1->priv + 0x06),
  FUNC_1(VAR_1->priv + 0x07));
}
