
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int pci_dev_16_1_fsb_addr_map; int pci_dev_16_2_fsb_err_regs; int * pci_dev_2x_0_fbd_branch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_1)
{
 struct i7300_pvt *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->pvt_info;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->pci_dev_2x_0_fbd_branch[VAR_3]);
 FUNC_0(VAR_2->pci_dev_16_2_fsb_err_regs);
 FUNC_0(VAR_2->pci_dev_16_1_fsb_addr_map);
}
