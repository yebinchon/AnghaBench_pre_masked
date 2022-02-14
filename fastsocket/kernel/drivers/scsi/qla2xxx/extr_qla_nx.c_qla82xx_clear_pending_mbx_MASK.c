
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mbox_int; scalar_t__ mbox_busy; } ;
struct qla_hw_data {int mbx_intr_comp; int mbx_cmd_flags; TYPE_1__ flags; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 if (VAR_3->flags.mbox_busy) {
  VAR_3->flags.mbox_int = 1;
  VAR_3->flags.mbox_busy = 0;
  FUNC_1(VAR_1, VAR_2, 0x6010,
      "Doing premature completion of mbx command.\n");
  if (FUNC_2(VAR_0, &VAR_3->mbx_cmd_flags))
   FUNC_0(&VAR_3->mbx_intr_comp);
 }
}
