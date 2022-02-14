
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int kobj; } ;
struct scsi_device {TYPE_2__ sdev_gendev; } ;
struct i2o_scsi_host {struct Scsi_Host* scsi_host; struct i2o_device** channel; int lun; } ;
struct TYPE_6__ {int class_id; int tid; int parent_tid; } ;
struct TYPE_4__ {int kobj; } ;
struct i2o_device {TYPE_3__ lct_data; TYPE_1__ device; struct i2o_controller* iop; } ;
struct i2o_controller {int adaptec; } ;
struct device {int dummy; } ;
struct Scsi_Host {int max_channel; scalar_t__ max_id; scalar_t__ max_lun; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*) ;
 struct scsi_device* FUNC_2 (struct Scsi_Host*,int,scalar_t__,scalar_t__,struct i2o_device*) ;
 int FUNC_3 (int ) ;
 struct i2o_device* FUNC_4 (struct i2o_controller*,int ) ;
 int FUNC_5 (struct i2o_device*,int,int,int*,int) ;
 struct i2o_scsi_host* FUNC_6 (struct i2o_controller*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,int ,int,scalar_t__,unsigned long) ;
 int FUNC_10 (char*,scalar_t__,...) ;
 int FUNC_11 (struct scsi_device*) ;
 int FUNC_12 (int *,int *,char*) ;
 struct i2o_device* FUNC_13 (struct device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_1)
{
 struct i2o_device *VAR_2 = FUNC_13(VAR_1);
 struct i2o_controller *VAR_3 = VAR_2->iop;
 struct i2o_scsi_host *VAR_4;
 struct Scsi_Host *VAR_5;
 struct i2o_device *VAR_6;
 struct scsi_device *VAR_7;
 u32 VAR_8 = -1;
 u64 VAR_9 = -1;
 int VAR_10 = -1;
 int VAR_11, VAR_12;

 VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_4->scsi_host;

 switch (VAR_2->lct_data.class_id) {
 case 129:
 case 130:
  break;

 case 128:
  if (FUNC_5(VAR_2, 0x0000, 3, &VAR_8, 4))
   return -VAR_0;

  if (FUNC_5(VAR_2, 0x0000, 4, &VAR_9, 8))
   return -VAR_0;

  VAR_6 = FUNC_4(VAR_3, VAR_2->lct_data.parent_tid);
  if (!VAR_6) {
   FUNC_10("can not find parent of device %03x\n",
     VAR_2->lct_data.tid);
   return -VAR_0;
  }

  for (VAR_11 = 0; VAR_11 <= VAR_4->scsi_host->max_channel; VAR_11++)
   if (VAR_4->channel[VAR_11] == VAR_6)
    VAR_10 = VAR_11;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_10 == -1) {
  FUNC_10("can not find channel of device %03x\n",
    VAR_2->lct_data.tid);
  return -VAR_0;
 }

 if (FUNC_7(VAR_8) >= VAR_5->max_id) {
  FUNC_10("SCSI device id (%d) >= max_id of I2O host (%d)",
    FUNC_7(VAR_8), VAR_5->max_id);
  return -VAR_0;
 }

 if (FUNC_8(VAR_9) >= VAR_5->max_lun) {
  FUNC_10("SCSI device lun (%lu) >= max_lun of I2O host (%d)",
    (long unsigned int)FUNC_8(VAR_9),
    VAR_5->max_lun);
  return -VAR_0;
 }

 VAR_7 =
     FUNC_2(VAR_4->scsi_host, VAR_10, FUNC_7(VAR_8),
         FUNC_8(VAR_9), VAR_2);

 if (FUNC_0(VAR_7)) {
  FUNC_10("can not add SCSI device %03x\n",
    VAR_2->lct_data.tid);
  return FUNC_1(VAR_7);
 }

 VAR_12 = FUNC_12(&VAR_2->device.kobj,
          &VAR_7->sdev_gendev.kobj, "scsi");
 if (VAR_12)
  goto err;

 FUNC_9("device added (TID: %03x) channel: %d, id: %d, lun: %ld\n",
   VAR_2->lct_data.tid, VAR_10, FUNC_7(VAR_8),
   (long unsigned int)FUNC_8(VAR_9));

 return 0;

err:
 FUNC_11(VAR_7);
 return VAR_12;
}
