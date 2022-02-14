
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_hardware_context {scalar_t__ diag_cnt; int pci_func; } ;
struct TYPE_2__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int max_sds_rings; int state; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct qlcnic_cmd_args*) ;
 int FUNC_8 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_4);
 struct qlcnic_hardware_context *VAR_6 = VAR_5->ahw;
 int VAR_7, VAR_8 = VAR_5->max_sds_rings;
 struct qlcnic_cmd_args VAR_9;

 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_4);

 if (FUNC_9(VAR_3, &VAR_5->state))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_4, VAR_2);
 if (VAR_7)
  goto clear_diag_irq;

 VAR_6->diag_cnt = 0;
 FUNC_4(&VAR_9, VAR_5, VAR_1);
 VAR_9.req.arg[1] = VAR_5->ahw->pci_func;

 VAR_7 = FUNC_8(VAR_5, &VAR_9);
 if (VAR_7)
  goto done;

 FUNC_10(1000, 12000);
 VAR_7 = !VAR_6->diag_cnt;

done:
 FUNC_7(&VAR_9);
 FUNC_6(VAR_4, VAR_8);

clear_diag_irq:
 VAR_5->max_sds_rings = VAR_8;
 FUNC_0(VAR_3, &VAR_5->state);
 return VAR_7;
}
