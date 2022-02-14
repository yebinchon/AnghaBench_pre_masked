
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scsi_target {int dummy; } ;
struct scsi_cmnd {int result; TYPE_2__* device; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct _sas_device {scalar_t__ volume_handle; } ;
struct MPT2SAS_DEVICE {TYPE_1__* sas_target; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; } ;
struct TYPE_4__ {int lun; int id; int channel; struct MPT2SAS_DEVICE* hostdata; struct scsi_target* sdev_target; int host; } ;
struct TYPE_3__ {int flags; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct _sas_device* FUNC_0 (struct MPT2SAS_ADAPTER*,scalar_t__) ;
 int FUNC_1 (struct MPT2SAS_ADAPTER*,struct scsi_cmnd*) ;
 int FUNC_2 (struct MPT2SAS_ADAPTER*,scalar_t__,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*,char*,char*,struct scsi_cmnd*) ;
 struct MPT2SAS_ADAPTER* FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct scsi_target*,char*,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_9(struct scsi_cmnd *VAR_8)
{
 struct MPT2SAS_ADAPTER *VAR_9 = FUNC_4(VAR_8->device->host);
 struct MPT2SAS_DEVICE *VAR_10;
 struct _sas_device *VAR_11;
 unsigned long VAR_12;
 u16 VAR_13;
 int VAR_14;

 struct scsi_target *VAR_15 = VAR_8->device->sdev_target;

 FUNC_7(VAR_3, VAR_15, "attempting device reset! "
     "scmd(%p)\n", VAR_8);
 FUNC_1(VAR_9, VAR_8);

 VAR_10 = VAR_8->device->hostdata;
 if (!VAR_10 || !VAR_10->sas_target) {
  FUNC_7(VAR_3, VAR_15, "device been deleted! "
      "scmd(%p)\n", VAR_8);
  VAR_8->result = VAR_0 << 16;
  VAR_8->scsi_done(VAR_8);
  VAR_14 = VAR_6;
  goto out;
 }


 VAR_13 = 0;
 if (VAR_10->sas_target->flags &
     VAR_5) {
  FUNC_5(&VAR_9->sas_device_lock, VAR_12);
  VAR_11 = FUNC_0(VAR_9,
     VAR_10->sas_target->handle);
  if (VAR_11)
   VAR_13 = VAR_11->volume_handle;
  FUNC_6(&VAR_9->sas_device_lock, VAR_12);
 } else
  VAR_13 = VAR_10->sas_target->handle;

 if (!VAR_13) {
  VAR_8->result = VAR_1 << 16;
  VAR_14 = VAR_2;
  goto out;
 }

 VAR_14 = FUNC_2(VAR_9, VAR_13, VAR_8->device->channel,
     VAR_8->device->id, VAR_8->device->lun,
     VAR_4, 0, 30, 0,
     VAR_7);

 out:
 FUNC_3(VAR_3, VAR_8->device, "device reset: %s scmd(%p)\n",
     ((VAR_14 == VAR_6) ? "SUCCESS" : "FAILED"), VAR_8);
 return VAR_14;
}
