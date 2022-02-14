
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ lun; scalar_t__ id; scalar_t__ channel; int allow_restart; int inquiry_len; int request_queue; TYPE_2__* host; } ;
struct sbp2_lu {int workarounds; struct scsi_device* sdev; TYPE_1__* ud; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_2)
{
 struct sbp2_lu *VAR_3 = (struct sbp2_lu *)VAR_2->host->hostdata[0];

 if (VAR_2->lun != 0 || VAR_2->id != VAR_3->ud->id || VAR_2->channel != 0)
  return -VAR_0;

 VAR_3->sdev = VAR_2;
 VAR_2->allow_restart = 1;


 FUNC_0(VAR_2->request_queue, 4 - 1);

 if (VAR_3->workarounds & VAR_1)
  VAR_2->inquiry_len = 36;
 return 0;
}
