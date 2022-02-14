
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_npar_info {int dest_npar; scalar_t__ enable_pm; int max_bw; int min_bw; int pci_func; } ;
struct qlcnic_info {int max_tx_bw; int min_tx_bw; } ;
struct qlcnic_adapter {struct qlcnic_npar_info* npars; TYPE_1__* ahw; int need_fw_reset; } ;
struct TYPE_2__ {int act_pci_func; } ;


 int FUNC_0 (struct qlcnic_info*,int ,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_npar_info*,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_info*) ;

int FUNC_6(struct qlcnic_adapter *VAR_0)
{
 int VAR_1, VAR_2;
 struct qlcnic_npar_info *VAR_3;
 struct qlcnic_info VAR_4;
 u8 VAR_5;

 if (FUNC_1(VAR_0))
  if (!VAR_0->need_fw_reset)
   return 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->ahw->act_pci_func; VAR_1++) {
  VAR_3 = &VAR_0->npars[VAR_1];
  VAR_5 = VAR_3->pci_func;
  FUNC_0(&VAR_4, 0, sizeof(struct qlcnic_info));
  VAR_2 = FUNC_3(VAR_0, &VAR_4, VAR_5);
  if (VAR_2)
   return VAR_2;
  VAR_4.min_tx_bw = VAR_3->min_bw;
  VAR_4.max_tx_bw = VAR_3->max_bw;
  VAR_2 = FUNC_5(VAR_0, &VAR_4);
  if (VAR_2)
   return VAR_2;

  if (VAR_3->enable_pm) {
   VAR_2 = FUNC_2(VAR_0,
          VAR_3->dest_npar, 1,
          VAR_5);
   if (VAR_2)
    return VAR_2;
  }
  VAR_2 = FUNC_4(VAR_0, VAR_3, VAR_5);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
