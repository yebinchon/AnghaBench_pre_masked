
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ channel; int id; int dev; struct MPT2SAS_TARGET* hostdata; } ;
struct scsi_device {int no_uld_attach; struct MPT2SAS_DEVICE* hostdata; int lun; } ;
struct _raid_device {struct scsi_device* sdev; } ;
struct Scsi_Host {int dummy; } ;
struct MPT2SAS_TARGET {int flags; int num_luns; } ;
struct MPT2SAS_DEVICE {struct MPT2SAS_TARGET* sas_target; int flags; int lun; } ;
struct MPT2SAS_ADAPTER {int raid_device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct _raid_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ,scalar_t__) ;
 struct Scsi_Host* FUNC_1 (int *) ;
 struct MPT2SAS_DEVICE* FUNC_2 (int,int ) ;
 struct scsi_target* FUNC_3 (struct scsi_device*) ;
 struct MPT2SAS_ADAPTER* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct scsi_device *VAR_5)
{
 struct Scsi_Host *VAR_6;
 struct MPT2SAS_ADAPTER *VAR_7;
 struct MPT2SAS_TARGET *VAR_8;
 struct MPT2SAS_DEVICE *VAR_9;
 struct scsi_target *VAR_10;
 struct _raid_device *VAR_11;
 unsigned long VAR_12;

 VAR_9 = FUNC_2(sizeof(struct scsi_device), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->lun = VAR_5->lun;
 VAR_9->flags = VAR_2;

 VAR_10 = FUNC_3(VAR_5);
 VAR_8 = VAR_10->hostdata;
 VAR_8->num_luns++;
 VAR_9->sas_target = VAR_8;
 VAR_5->hostdata = VAR_9;
 if ((VAR_8->flags & VAR_3))
  VAR_5->no_uld_attach = 1;

 VAR_6 = FUNC_1(&VAR_10->dev);
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_10->channel == VAR_4) {
  FUNC_5(&VAR_7->raid_device_lock, VAR_12);
  VAR_11 = FUNC_0(VAR_7,
      VAR_10->id, VAR_10->channel);
  if (VAR_11)
   VAR_11->sdev = VAR_5;
  FUNC_6(&VAR_7->raid_device_lock, VAR_12);
 }

 return 0;
}
