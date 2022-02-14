
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct domain_device {int dummy; } ;
struct Scsi_Host {scalar_t__ ehandler; int transportt; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;
struct TYPE_3__ {int (* lldd_I_T_nexus_reset ) (struct domain_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct domain_device* FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct domain_device*,int ,int ,int ) ;
 int FUNC_2 (struct domain_device*) ;
 struct sas_internal* FUNC_3 (int ) ;

int FUNC_4(struct scsi_cmnd *VAR_7)
{
 int VAR_8;
 struct Scsi_Host *VAR_9 = VAR_7->device->host;
 struct domain_device *VAR_10 = FUNC_0(VAR_7);
 struct sas_internal *VAR_11 = FUNC_3(VAR_9->transportt);

 if (VAR_6 != VAR_9->ehandler)
  return FUNC_1(VAR_10, VAR_2, 0, 0);

 if (!VAR_11->dft->lldd_I_T_nexus_reset)
  return VAR_1;

 VAR_8 = VAR_11->dft->lldd_I_T_nexus_reset(VAR_10);
 if (VAR_8 == VAR_5 || VAR_8 == VAR_4 ||
     VAR_8 == -VAR_0)
  return VAR_3;

 return VAR_1;
}
