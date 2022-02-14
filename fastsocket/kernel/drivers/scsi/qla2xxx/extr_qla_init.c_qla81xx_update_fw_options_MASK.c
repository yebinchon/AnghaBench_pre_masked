
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {int * fw_options; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

void
FUNC_2(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 if (!VAR_1)
  return;


 FUNC_0(VAR_3->fw_options, 0, sizeof(VAR_3->fw_options));
 VAR_3->fw_options[2] |= VAR_0;
 FUNC_1(VAR_2, VAR_3->fw_options);
}
