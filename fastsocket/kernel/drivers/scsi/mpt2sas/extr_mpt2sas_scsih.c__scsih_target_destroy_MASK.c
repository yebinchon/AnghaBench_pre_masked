
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct scsi_target {scalar_t__ channel; scalar_t__ id; struct MPT2SAS_TARGET* hostdata; TYPE_2__ dev; } ;
struct TYPE_3__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {scalar_t__ id; scalar_t__ channel; struct scsi_target* starget; } ;
struct _raid_device {int * sdev; int * starget; } ;
struct Scsi_Host {int dummy; } ;
struct MPT2SAS_TARGET {int dummy; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; int raid_device_lock; } ;


 scalar_t__ VAR_0 ;
 struct _raid_device* FUNC_0 (struct MPT2SAS_ADAPTER*,scalar_t__,scalar_t__) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct MPT2SAS_TARGET*) ;
 struct _sas_device* FUNC_4 (struct MPT2SAS_ADAPTER*,int ) ;
 struct MPT2SAS_ADAPTER* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct scsi_target *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_2(&VAR_1->dev);
 struct MPT2SAS_ADAPTER *VAR_3 = FUNC_5(VAR_2);
 struct MPT2SAS_TARGET *VAR_4;
 struct _sas_device *VAR_5;
 struct _raid_device *VAR_6;
 unsigned long VAR_7;
 struct sas_rphy *VAR_8;

 VAR_4 = VAR_1->hostdata;
 if (!VAR_4)
  return;

 if (VAR_1->channel == VAR_0) {
  FUNC_6(&VAR_3->raid_device_lock, VAR_7);
  VAR_6 = FUNC_0(VAR_3, VAR_1->id,
      VAR_1->channel);
  if (VAR_6) {
   VAR_6->starget = ((void*)0);
   VAR_6->sdev = ((void*)0);
  }
  FUNC_7(&VAR_3->raid_device_lock, VAR_7);
  goto out;
 }

 FUNC_6(&VAR_3->sas_device_lock, VAR_7);
 VAR_8 = FUNC_1(VAR_1->dev.parent);
 VAR_5 = FUNC_4(VAR_3,
    VAR_8->identify.sas_address);
 if (VAR_5 && (VAR_5->starget == VAR_1) &&
     (VAR_5->id == VAR_1->id) &&
     (VAR_5->channel == VAR_1->channel))
  VAR_5->starget = ((void*)0);

 FUNC_7(&VAR_3->sas_device_lock, VAR_7);

 out:
 FUNC_3(VAR_4);
 VAR_1->hostdata = ((void*)0);
}
