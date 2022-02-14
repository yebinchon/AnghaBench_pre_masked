
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_adapter {TYPE_2__* scsi_host; TYPE_5__* ccw_device; } ;
struct ccw_dev_id {int devno; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int max_id; int max_lun; int max_cmd_len; unsigned long* hostdata; int transportt; int unique_id; scalar_t__ max_channel; } ;
struct TYPE_6__ {int scsi_transport_template; int scsi_host_template; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,struct ccw_dev_id*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__ VAR_1 ;

int FUNC_5(struct zfcp_adapter *VAR_2)
{
 struct ccw_dev_id VAR_3;

 if (VAR_2->scsi_host)
  return 0;

 FUNC_0(VAR_2->ccw_device, &VAR_3);

 VAR_2->scsi_host = FUNC_3(&VAR_1.scsi_host_template,
          sizeof (struct zfcp_adapter *));
 if (!VAR_2->scsi_host) {
  FUNC_1(&VAR_2->ccw_device->dev,
   "Registering the FCP device with the "
   "SCSI stack failed\n");
  return -VAR_0;
 }


 VAR_2->scsi_host->max_id = 1;
 VAR_2->scsi_host->max_lun = 1;
 VAR_2->scsi_host->max_channel = 0;
 VAR_2->scsi_host->unique_id = VAR_3.devno;
 VAR_2->scsi_host->max_cmd_len = 16;
 VAR_2->scsi_host->transportt = VAR_1.scsi_transport_template;

 VAR_2->scsi_host->hostdata[0] = (unsigned long) VAR_2;

 if (FUNC_2(VAR_2->scsi_host, &VAR_2->ccw_device->dev)) {
  FUNC_4(VAR_2->scsi_host);
  return -VAR_0;
 }

 return 0;
}
