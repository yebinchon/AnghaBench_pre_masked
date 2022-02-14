
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct sas_task {int dummy; } ;
struct sas_internal {TYPE_2__* dft; } ;
struct Scsi_Host {scalar_t__ ehandler; int transportt; } ;
struct TYPE_4__ {int (* lldd_abort_task ) (struct sas_task*) ;} ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sas_task* FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sas_task*) ;
 struct sas_internal* FUNC_2 (int ) ;

int FUNC_3(struct scsi_cmnd *VAR_5)
{
 int VAR_6;
 struct sas_task *VAR_7 = FUNC_0(VAR_5);
 struct Scsi_Host *VAR_8 = VAR_5->device->host;
 struct sas_internal *VAR_9 = FUNC_2(VAR_8->transportt);

 if (VAR_4 != VAR_8->ehandler)
  return VAR_0;

 if (!VAR_9->dft->lldd_abort_task)
  return VAR_0;

 VAR_6 = VAR_9->dft->lldd_abort_task(VAR_7);
 if (VAR_6 == VAR_3 || VAR_6 == VAR_2)
  return VAR_1;

 return VAR_0;
}
