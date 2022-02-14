
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {struct MPT2SAS_TARGET* hostdata; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct _sas_device {unsigned long long volume_handle; unsigned long long slot; scalar_t__ enclosure_logical_id; int phy; scalar_t__ sas_address; int handle; scalar_t__ volume_wwid; } ;
struct MPT2SAS_TARGET {int flags; scalar_t__ sas_address; int handle; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; scalar_t__ hide_ir_msg; } ;
struct TYPE_2__ {struct scsi_target* sdev_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _sas_device* FUNC_0 (struct MPT2SAS_ADAPTER*,scalar_t__) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,struct scsi_target*,char*,...) ;

__attribute__((used)) static void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_3, struct scsi_cmnd *VAR_4)
{
 struct scsi_target *VAR_5 = VAR_4->device->sdev_target;
 struct MPT2SAS_TARGET *VAR_6 = VAR_5->hostdata;
 struct _sas_device *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 char *VAR_9 = ((void*)0);

 if (!VAR_6)
  return;
 if (VAR_3->hide_ir_msg)
  VAR_9 = "WarpDrive";
 else
  VAR_9 = "volume";

 FUNC_1(VAR_4);
 if (VAR_6->flags & VAR_2) {
  FUNC_4(VAR_0, VAR_5, "%s handle(0x%04x), "
      "%s wwid(0x%016llx)\n", VAR_9, VAR_6->handle,
      VAR_9, (unsigned long long)VAR_6->sas_address);
 } else {
  FUNC_2(&VAR_3->sas_device_lock, VAR_8);
  VAR_7 = FUNC_0(VAR_3,
      VAR_6->sas_address);
  if (VAR_7) {
   if (VAR_6->flags &
       VAR_1) {
    FUNC_4(VAR_0, VAR_5,
        "volume handle(0x%04x), "
        "volume wwid(0x%016llx)\n",
        VAR_7->volume_handle,
       (unsigned long long)VAR_7->volume_wwid);
   }
   FUNC_4(VAR_0, VAR_5,
       "handle(0x%04x), sas_address(0x%016llx), phy(%d)\n",
       VAR_7->handle,
       (unsigned long long)VAR_7->sas_address,
       VAR_7->phy);
   FUNC_4(VAR_0, VAR_5,
       "enclosure_logical_id(0x%016llx), slot(%d)\n",
      (unsigned long long)VAR_7->enclosure_logical_id,
       VAR_7->slot);
  }
  FUNC_3(&VAR_3->sas_device_lock, VAR_8);
 }
}
