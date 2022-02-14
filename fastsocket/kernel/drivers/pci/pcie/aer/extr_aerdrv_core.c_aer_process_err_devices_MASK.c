
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct aer_err_info {int error_dev_num; scalar_t__* dev; } ;


 int FUNC_0 (scalar_t__,struct aer_err_info*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct aer_err_info*) ;
 int FUNC_2 (struct pcie_device*,scalar_t__,struct aer_err_info*) ;

__attribute__((used)) static inline void FUNC_3(struct pcie_device *VAR_0,
   struct aer_err_info *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->error_dev_num && VAR_1->dev[VAR_2]; VAR_2++) {
  if (FUNC_1(VAR_1->dev[VAR_2], VAR_1))
   FUNC_0(VAR_1->dev[VAR_2], VAR_1);
 }
 for (VAR_2 = 0; VAR_2 < VAR_1->error_dev_num && VAR_1->dev[VAR_2]; VAR_2++) {
  if (FUNC_1(VAR_1->dev[VAR_2], VAR_1))
   FUNC_2(VAR_0, VAR_1->dev[VAR_2], VAR_1);
 }
}
