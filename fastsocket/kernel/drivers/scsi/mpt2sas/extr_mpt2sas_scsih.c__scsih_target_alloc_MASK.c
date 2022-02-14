
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct scsi_target {int channel; int id; TYPE_2__ dev; struct MPT2SAS_TARGET* hostdata; } ;
struct TYPE_3__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {int handle; int channel; int id; struct scsi_target* starget; int sas_address; } ;
struct _raid_device {struct scsi_target* starget; int wwid; int handle; } ;
struct Scsi_Host {int dummy; } ;
struct MPT2SAS_TARGET {int flags; int sas_address; int handle; struct _raid_device* raid_device; struct scsi_target* starget; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; int pd_handles; int raid_device_lock; scalar_t__ is_warpdrive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct _raid_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ,int ) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (TYPE_2__*) ;
 struct MPT2SAS_TARGET* FUNC_3 (int,int ) ;
 struct _sas_device* FUNC_4 (struct MPT2SAS_ADAPTER*,int ) ;
 struct MPT2SAS_ADAPTER* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct scsi_target *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_2(&VAR_6->dev);
 struct MPT2SAS_ADAPTER *VAR_8 = FUNC_5(VAR_7);
 struct MPT2SAS_TARGET *VAR_9;
 struct _sas_device *VAR_10;
 struct _raid_device *VAR_11;
 unsigned long VAR_12;
 struct sas_rphy *VAR_13;

 VAR_9 = FUNC_3(sizeof(struct scsi_target), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_6->hostdata = VAR_9;
 VAR_9->starget = VAR_6;
 VAR_9->handle = VAR_2;


 if (VAR_6->channel == VAR_5) {
  FUNC_6(&VAR_8->raid_device_lock, VAR_12);
  VAR_11 = FUNC_0(VAR_8, VAR_6->id,
      VAR_6->channel);
  if (VAR_11) {
   VAR_9->handle = VAR_11->handle;
   VAR_9->sas_address = VAR_11->wwid;
   VAR_9->flags |= VAR_4;
   if (VAR_8->is_warpdrive)
    VAR_9->raid_device = VAR_11;
   VAR_11->starget = VAR_6;
  }
  FUNC_7(&VAR_8->raid_device_lock, VAR_12);
  return 0;
 }


 FUNC_6(&VAR_8->sas_device_lock, VAR_12);
 VAR_13 = FUNC_1(VAR_6->dev.parent);
 VAR_10 = FUNC_4(VAR_8,
    VAR_13->identify.sas_address);

 if (VAR_10) {
  VAR_9->handle = VAR_10->handle;
  VAR_9->sas_address = VAR_10->sas_address;
  VAR_10->starget = VAR_6;
  VAR_10->id = VAR_6->id;
  VAR_10->channel = VAR_6->channel;
  if (FUNC_8(VAR_10->handle, VAR_8->pd_handles))
   VAR_9->flags |=
       VAR_3;
 }
 FUNC_7(&VAR_8->sas_device_lock, VAR_12);

 return 0;
}
