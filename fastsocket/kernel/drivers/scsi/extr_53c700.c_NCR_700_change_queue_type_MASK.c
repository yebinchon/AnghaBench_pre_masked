
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_target; int queue_depth; TYPE_1__* host; } ;
struct NCR_700_Host_Parameters {int tag_negotiated; } ;
struct TYPE_2__ {int cmd_per_lun; scalar_t__* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_8(struct scsi_device *VAR_1, int VAR_2)
{
 int VAR_3 = ((VAR_2 ==0 && FUNC_3(VAR_1) != 0)
     || (VAR_2 != 0 && FUNC_3(VAR_1) == 0));
 struct NCR_700_Host_Parameters *VAR_4 =
  (struct NCR_700_Host_Parameters *)VAR_1->host->hostdata[0];

 FUNC_4(VAR_1, VAR_2);





 if (VAR_3)
  FUNC_5(VAR_1->sdev_target);

 if (!VAR_2) {


  FUNC_2(VAR_1, VAR_1->host->cmd_per_lun);
  VAR_4->tag_negotiated &= ~(1 << FUNC_7(VAR_1));
 } else {


  FUNC_1(VAR_1, VAR_1->queue_depth);
  if (VAR_3)
   FUNC_0(VAR_1, VAR_0);
 }
 if (VAR_3)
  FUNC_6(VAR_1->sdev_target);

 return VAR_2;
}
