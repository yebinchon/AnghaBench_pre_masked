
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int err_code; int status; } ;
struct qlcnic_hardware_context {TYPE_3__ idc; int mbx_lock; } ;
struct TYPE_5__ {int work; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; TYPE_2__ fw_work; int idc_aen_work; TYPE_1__* nic_ops; } ;
struct TYPE_4__ {scalar_t__ (* init_driver ) (struct qlcnic_adapter*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;

int FUNC_14(struct qlcnic_adapter *VAR_3, int VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_3->ahw;

 if (FUNC_9(VAR_3))
  return FUNC_10(VAR_3, VAR_4);

 if (FUNC_1(VAR_3))
  return -VAR_0;


 FUNC_12(&VAR_5->mbx_lock);

 FUNC_11(VAR_1, &VAR_3->ahw->idc.status);
 FUNC_2(VAR_3);


 FUNC_8(VAR_3, 1);

 if (!FUNC_6(VAR_3))
  FUNC_7(VAR_3);

 if (FUNC_4(VAR_3))
  return -VAR_0;


 if (FUNC_3(VAR_3))
  return -VAR_0;


 if (VAR_3->nic_ops->init_driver(VAR_3))
  return -VAR_0;

 FUNC_0(&VAR_3->idc_aen_work, VAR_2);


 FUNC_5(&VAR_3->fw_work.work);

 return VAR_3->ahw->idc.err_code;
}
