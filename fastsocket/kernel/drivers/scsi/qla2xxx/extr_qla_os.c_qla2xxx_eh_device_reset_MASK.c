
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qla_hw_data {TYPE_2__* isp_ops; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_6__ {int lun_reset; } ;
struct TYPE_5__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct scsi_cmnd*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_cmnd *VAR_1)
{
 scsi_qla_host_t *VAR_2 = FUNC_1(VAR_1->device->host);
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 return FUNC_0("DEVICE", VAR_0, VAR_1,
     VAR_3->isp_ops->lun_reset);
}
