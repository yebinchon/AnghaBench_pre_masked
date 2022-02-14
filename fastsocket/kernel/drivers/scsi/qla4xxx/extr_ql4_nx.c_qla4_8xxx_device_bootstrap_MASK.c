
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; int flags; } ;
struct TYPE_2__ {int (* need_reset ) (struct scsi_qla_host*) ;int (* restart_firmware ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;int (* idc_unlock ) (struct scsi_qla_host*) ;int (* rom_lock_recovery ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,char*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*,int ) ;
 int FUNC_5 (struct scsi_qla_host*,int ,scalar_t__) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_8 (struct scsi_qla_host*,int ) ;
 int FUNC_9 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct scsi_qla_host*) ;
 int FUNC_12 (struct scsi_qla_host*) ;
 int FUNC_13 (struct scsi_qla_host*) ;
 int FUNC_14 (struct scsi_qla_host*) ;
 int FUNC_15 (struct scsi_qla_host*) ;
 int FUNC_16 (struct scsi_qla_host*) ;

int FUNC_17(struct scsi_qla_host *VAR_11)
{
 int VAR_12 = VAR_9;
 int VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 1;

 VAR_18 = VAR_11->isp_ops->need_reset(VAR_11);
 VAR_15 = FUNC_8(VAR_11, VAR_8);

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_14 = FUNC_2(200);
  if (VAR_14) {
   FUNC_9(VAR_11, VAR_4,
         VAR_5);
   return VAR_12;
  }

  VAR_16 = FUNC_8(VAR_11, VAR_8);
  if (VAR_16 != VAR_15)
   VAR_19 = 0;
 }

 if (VAR_18) {

  if (VAR_19)
   VAR_11->isp_ops->rom_lock_recovery(VAR_11);
  goto dev_initialize;
 } else {

  if (VAR_19) {

   VAR_11->isp_ops->rom_lock_recovery(VAR_11);
   goto dev_initialize;
  } else {

   VAR_12 = VAR_10;
   goto dev_ready;
  }
 }

dev_initialize:

 FUNC_3(VAR_2, VAR_11, "HW State: INITIALIZING\n");
 FUNC_9(VAR_11, VAR_4,
       VAR_6);





 if (FUNC_1(VAR_11)) {
  VAR_17 = FUNC_4(VAR_11, VAR_3);
  if (VAR_17 & VAR_1) {
   FUNC_5(VAR_11, VAR_3,
      (VAR_17 & ~VAR_1));
   FUNC_10(VAR_0, &VAR_11->flags);
  }
 }

 VAR_11->isp_ops->idc_unlock(VAR_11);

 if (FUNC_0(VAR_11))
  FUNC_7(VAR_11);

 VAR_12 = VAR_11->isp_ops->restart_firmware(VAR_11);
 VAR_11->isp_ops->idc_lock(VAR_11);

 if (VAR_12 != VAR_10) {
  FUNC_3(VAR_2, VAR_11, "HW State: FAILED\n");
  FUNC_6(VAR_11);
  FUNC_9(VAR_11, VAR_4,
        VAR_5);
  return VAR_12;
 }

dev_ready:
 FUNC_3(VAR_2, VAR_11, "HW State: READY\n");
 FUNC_9(VAR_11, VAR_4, VAR_7);

 return VAR_12;
}
