
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_adapter {struct pci_dev* pdev; } ;
struct pci_dev {int devfn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_3, int VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->pdev;
 int VAR_6;
 u16 VAR_7, VAR_8;

 if (FUNC_2(VAR_3))
  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_6 + VAR_1, &VAR_8);
 FUNC_1(VAR_5, VAR_6 + VAR_2, &VAR_7);

 return (VAR_5->devfn + VAR_8 + VAR_7 * VAR_4) & 0xff;
}
