
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct domain_device {int dummy; } ;
struct Scsi_Host {scalar_t__ ehandler; int transportt; } ;
struct TYPE_4__ {int lun; struct Scsi_Host* host; } ;
struct TYPE_3__ {int (* lldd_lu_reset ) (struct domain_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct domain_device* FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct scsi_lun*) ;
 int FUNC_2 (struct domain_device*,int ,int ,int ) ;
 int FUNC_3 (struct domain_device*,int ) ;
 struct sas_internal* FUNC_4 (int ) ;

int FUNC_5(struct scsi_cmnd *VAR_6)
{
 int VAR_7;
 struct scsi_lun VAR_8;
 struct Scsi_Host *VAR_9 = VAR_6->device->host;
 struct domain_device *VAR_10 = FUNC_0(VAR_6);
 struct sas_internal *VAR_11 = FUNC_4(VAR_9->transportt);

 if (VAR_5 != VAR_9->ehandler)
  return FUNC_2(VAR_10, VAR_1, VAR_6->device->lun, 0);

 FUNC_1(VAR_6->device->lun, &VAR_8);

 if (!VAR_11->dft->lldd_lu_reset)
  return VAR_0;

 VAR_7 = VAR_11->dft->lldd_lu_reset(VAR_10, VAR_8.scsi_lun);
 if (VAR_7 == VAR_4 || VAR_7 == VAR_3)
  return VAR_2;

 return VAR_0;
}
