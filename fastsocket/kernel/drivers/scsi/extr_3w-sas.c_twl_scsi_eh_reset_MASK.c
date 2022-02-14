
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int * cmnd; TYPE_4__* device; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {int ioctl_lock; int host; int num_resets; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*,char*,int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_4)
{
 TW_Device_Extension *VAR_5 = ((void*)0);
 int VAR_6 = VAR_0;

 VAR_5 = (TW_Device_Extension *)VAR_4->device->host->hostdata;

 VAR_5->num_resets++;

 FUNC_3(VAR_1, VAR_4->device,
  "WARNING: (0x%02X:0x%04X): Command (0x%x) timed out, resetting card.\n",
  VAR_3, 0x2c, VAR_4->cmnd[0]);


 FUNC_1(&VAR_5->ioctl_lock);


 if (FUNC_4(VAR_5, 0)) {
  FUNC_0(VAR_5->host, VAR_3, 0x15, "Controller reset failed during scsi host reset");
  goto out;
 }

 VAR_6 = VAR_2;
out:
 FUNC_2(&VAR_5->ioctl_lock);
 return VAR_6;
}
