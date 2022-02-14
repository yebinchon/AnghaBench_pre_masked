
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {unsigned long nx_dev_init_timeout; TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* idc_unlock ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 unsigned long VAR_8 ;
 int FUNC_3 (int) ;
 char** VAR_9 ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*,size_t,...) ;
 int VAR_10 ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 size_t FUNC_9 (struct scsi_qla_host*,int ) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 (struct scsi_qla_host*,int ,int) ;
 int FUNC_12 (struct scsi_qla_host*) ;
 int FUNC_13 (struct scsi_qla_host*) ;
 int FUNC_14 (struct scsi_qla_host*) ;
 int FUNC_15 (struct scsi_qla_host*) ;
 int FUNC_16 (struct scsi_qla_host*) ;
 int FUNC_17 (struct scsi_qla_host*) ;
 int FUNC_18 (struct scsi_qla_host*) ;
 int FUNC_19 (struct scsi_qla_host*) ;
 int FUNC_20 (struct scsi_qla_host*) ;
 int FUNC_21 (struct scsi_qla_host*) ;
 int FUNC_22 (struct scsi_qla_host*) ;
 int FUNC_23 (struct scsi_qla_host*) ;
 int FUNC_24 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_25 (unsigned long,unsigned long) ;

int FUNC_26(struct scsi_qla_host *VAR_11)
{
 uint32_t VAR_12;
 int VAR_13 = VAR_7;
 unsigned long VAR_14;

 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13 == VAR_6)
  goto exit_state_handler;

 VAR_12 = FUNC_9(VAR_11, VAR_5);
 FUNC_0(FUNC_4(VAR_2, VAR_11, "Device state is 0x%x = %s\n",
     VAR_12, VAR_12 < VAR_4 ?
     VAR_9[VAR_12] : "Unknown"));


 VAR_14 = VAR_8 + (VAR_11->nx_dev_init_timeout * VAR_1);

 VAR_11->isp_ops->idc_lock(VAR_11);
 while (1) {

  if (FUNC_25(VAR_8, VAR_14)) {
   FUNC_4(VAR_3, VAR_11,
       "%s: Device Init Failed 0x%x = %s\n",
       VAR_0,
       VAR_12, VAR_12 < VAR_4 ?
       VAR_9[VAR_12] : "Unknown");
   FUNC_11(VAR_11, VAR_5,
         133);
  }

  VAR_12 = FUNC_9(VAR_11, VAR_5);
  FUNC_4(VAR_2, VAR_11, "Device state is 0x%x = %s\n",
      VAR_12, VAR_12 < VAR_4 ?
      VAR_9[VAR_12] : "Unknown");


  switch (VAR_12) {
  case 128:
   goto exit;
  case 134:
   VAR_13 = FUNC_7(VAR_11);
   goto exit;
  case 132:
   VAR_11->isp_ops->idc_unlock(VAR_11);
   FUNC_3(1000);
   VAR_11->isp_ops->idc_lock(VAR_11);
   break;
  case 130:





   if (FUNC_2(VAR_11)) {
    FUNC_6(VAR_11);
   } else if (FUNC_1(VAR_11)) {
    if (!VAR_10) {
     FUNC_5(VAR_11);


     VAR_14 = VAR_8 +
      (VAR_11->nx_dev_init_timeout * VAR_1);
    } else {
     VAR_11->isp_ops->idc_unlock(VAR_11);
     FUNC_3(1000);
     VAR_11->isp_ops->idc_lock(VAR_11);
    }
   }
   break;
  case 131:

   FUNC_8(VAR_11);
   break;
  case 129:
   VAR_11->isp_ops->idc_unlock(VAR_11);
   FUNC_3(1000);
   VAR_11->isp_ops->idc_lock(VAR_11);
   break;
  case 133:
   VAR_11->isp_ops->idc_unlock(VAR_11);
   FUNC_12(VAR_11);
   VAR_13 = VAR_6;
   VAR_11->isp_ops->idc_lock(VAR_11);
   goto exit;
  default:
   VAR_11->isp_ops->idc_unlock(VAR_11);
   FUNC_12(VAR_11);
   VAR_13 = VAR_6;
   VAR_11->isp_ops->idc_lock(VAR_11);
   goto exit;
  }
 }
exit:
 VAR_11->isp_ops->idc_unlock(VAR_11);
exit_state_handler:
 return VAR_13;
}
