
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct scsi_target {int channel; int id; TYPE_2__ dev; struct MPT3SAS_TARGET* hostdata; } ;
struct TYPE_3__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {scalar_t__ fast_path; int handle; int channel; int id; struct scsi_target* starget; int sas_address; } ;
struct _raid_device {struct scsi_target* starget; int wwid; int handle; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_TARGET {int flags; int sas_address; int handle; struct scsi_target* starget; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; int pd_handles; int raid_device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct _raid_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (TYPE_2__*) ;
 struct MPT3SAS_TARGET* FUNC_3 (int,int ) ;
 struct _sas_device* FUNC_4 (struct MPT3SAS_ADAPTER*,int ) ;
 struct MPT3SAS_ADAPTER* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct scsi_target *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_2(&VAR_7->dev);
 struct MPT3SAS_ADAPTER *VAR_9 = FUNC_5(VAR_8);
 struct MPT3SAS_TARGET *VAR_10;
 struct _sas_device *VAR_11;
 struct _raid_device *VAR_12;
 unsigned long VAR_13;
 struct sas_rphy *VAR_14;

 VAR_10 = FUNC_3(sizeof(struct scsi_target), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->hostdata = VAR_10;
 VAR_10->starget = VAR_7;
 VAR_10->handle = VAR_2;


 if (VAR_7->channel == VAR_6) {
  FUNC_6(&VAR_9->raid_device_lock, VAR_13);
  VAR_12 = FUNC_0(VAR_9, VAR_7->id,
      VAR_7->channel);
  if (VAR_12) {
   VAR_10->handle = VAR_12->handle;
   VAR_10->sas_address = VAR_12->wwid;
   VAR_10->flags |= VAR_5;
   VAR_12->starget = VAR_7;
  }
  FUNC_7(&VAR_9->raid_device_lock, VAR_13);
  return 0;
 }


 FUNC_6(&VAR_9->sas_device_lock, VAR_13);
 VAR_14 = FUNC_1(VAR_7->dev.parent);
 VAR_11 = FUNC_4(VAR_9,
    VAR_14->identify.sas_address);

 if (VAR_11) {
  VAR_10->handle = VAR_11->handle;
  VAR_10->sas_address = VAR_11->sas_address;
  VAR_11->starget = VAR_7;
  VAR_11->id = VAR_7->id;
  VAR_11->channel = VAR_7->channel;
  if (FUNC_8(VAR_11->handle, VAR_9->pd_handles))
   VAR_10->flags |=
       VAR_4;
  if (VAR_11->fast_path)
   VAR_10->flags |= VAR_3;
 }
 FUNC_7(&VAR_9->sas_device_lock, VAR_13);

 return 0;
}
