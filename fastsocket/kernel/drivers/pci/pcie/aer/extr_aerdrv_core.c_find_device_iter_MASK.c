
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aer_err_info {int multi_error_valid; } ;


 scalar_t__ FUNC_0 (struct aer_err_info*,struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,struct aer_err_info*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0, void *VAR_1)
{
 struct aer_err_info *VAR_2 = (struct aer_err_info *)VAR_1;

 if (FUNC_1(VAR_0, VAR_2)) {

  if (FUNC_0(VAR_2, VAR_0)) {


   return 1;
  }


  if (!VAR_2->multi_error_valid)
   return 1;
 }
 return 0;
}
