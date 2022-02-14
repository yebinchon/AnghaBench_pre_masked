
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct aer_err_info {scalar_t__ severity; int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct pcie_device *VAR_3,
 struct pci_dev *VAR_4,
 struct aer_err_info *VAR_5)
{
 int VAR_6;

 if (VAR_5->severity == VAR_0) {




  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (VAR_6)
   FUNC_2(VAR_4, VAR_6 + VAR_1,
     VAR_5->status);
 } else
  FUNC_0(VAR_4, VAR_5->severity);
}
