
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {int func_num; TYPE_1__* isp_ops; int flags; } ;
struct TYPE_2__ {int (* idc_unlock ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int VAR_4 ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*,int ) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int FUNC_11(struct scsi_qla_host *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7 = VAR_3;

 if (FUNC_10(VAR_0, &VAR_5->flags))
  goto exit_update_idc_reg;

 VAR_5->isp_ops->idc_lock(VAR_5);
 FUNC_7(VAR_5);





 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_6(VAR_5, VAR_1);
  if ((VAR_6 == (1 << VAR_5->func_num)) && !VAR_4)
   FUNC_3(VAR_5);
 }

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
 } else if (FUNC_1(VAR_5)) {
  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7 == VAR_2)
   FUNC_5(VAR_5);
 }

 VAR_5->isp_ops->idc_unlock(VAR_5);

exit_update_idc_reg:
 return VAR_7;
}
