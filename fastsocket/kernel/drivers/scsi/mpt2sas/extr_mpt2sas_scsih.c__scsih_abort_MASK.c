
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {int result; TYPE_2__* device; int serial_number; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct MPT2SAS_DEVICE {TYPE_1__* sas_target; } ;
struct MPT2SAS_ADAPTER {int dummy; } ;
struct TYPE_4__ {int lun; int id; int channel; struct MPT2SAS_DEVICE* hostdata; int host; } ;
struct TYPE_3__ {int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,struct scsi_cmnd*) ;
 int FUNC_1 (struct MPT2SAS_ADAPTER*,struct scsi_cmnd*) ;
 int FUNC_2 (struct MPT2SAS_ADAPTER*) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*,char*,...) ;
 struct MPT2SAS_ADAPTER* FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_7(struct scsi_cmnd *VAR_9)
{
 struct MPT2SAS_ADAPTER *VAR_10 = FUNC_5(VAR_9->device->host);
 struct MPT2SAS_DEVICE *VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;

 FUNC_4(VAR_3, VAR_9->device, "attempting task abort! "
     "scmd(%p)\n", VAR_9);
 FUNC_1(VAR_10, VAR_9);

 VAR_11 = VAR_9->device->hostdata;
 if (!VAR_11 || !VAR_11->sas_target) {
  FUNC_4(VAR_3, VAR_9->device, "device been deleted! "
      "scmd(%p)\n", VAR_9);
  VAR_9->result = VAR_0 << 16;
  VAR_9->scsi_done(VAR_9);
  VAR_14 = VAR_7;
  goto out;
 }


 VAR_12 = FUNC_0(VAR_10, VAR_9);
 if (!VAR_12) {
  VAR_9->result = VAR_1 << 16;
  VAR_14 = VAR_7;
  goto out;
 }


 if (VAR_11->sas_target->flags &
     VAR_5 ||
     VAR_11->sas_target->flags & VAR_6) {
  VAR_9->result = VAR_1 << 16;
  VAR_14 = VAR_2;
  goto out;
 }

 FUNC_2(VAR_10);

 VAR_13 = VAR_11->sas_target->handle;
 VAR_14 = FUNC_3(VAR_10, VAR_13, VAR_9->device->channel,
     VAR_9->device->id, VAR_9->device->lun,
     VAR_4, VAR_12, 30,
     VAR_9->serial_number, VAR_8);

 out:
 FUNC_4(VAR_3, VAR_9->device, "task abort: %s scmd(%p)\n",
     ((VAR_14 == VAR_7) ? "SUCCESS" : "FAILED"), VAR_9);
 return VAR_14;
}
