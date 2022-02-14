
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pci_channel_io_perm_failure; } ;
struct qla_hw_data {TYPE_1__* isp_ops; int fw_major_version; TYPE_2__ flags; } ;
struct TYPE_12__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_10__ {int (* chip_diag ) (TYPE_3__*) ;int (* reset_chip ) (TYPE_3__*) ;} ;


 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_3__*,int,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(scsi_qla_host_t *VAR_4)
{
 int VAR_5, VAR_6;
 struct qla_hw_data *VAR_7 = VAR_4->hw;

 if (VAR_7->flags.pci_channel_io_perm_failure)
  return;
 if (!FUNC_0(VAR_7))
  return;
 if (!VAR_7->fw_major_version)
  return;

 VAR_5 = FUNC_3(VAR_4);
 for (VAR_6 = 5; VAR_5 != VAR_2 && VAR_5 != VAR_0 &&
     VAR_5 != VAR_1 && VAR_6 ; VAR_6--) {
  VAR_7->isp_ops->reset_chip(VAR_4);
  if (VAR_7->isp_ops->chip_diag(VAR_4) != VAR_2)
   continue;
  if (FUNC_2(VAR_4) != VAR_2)
   continue;
  FUNC_1(VAR_3, VAR_4, 0x8015,
      "Attempting retry of stop-firmware command.\n");
  VAR_5 = FUNC_3(VAR_4);
 }
}
