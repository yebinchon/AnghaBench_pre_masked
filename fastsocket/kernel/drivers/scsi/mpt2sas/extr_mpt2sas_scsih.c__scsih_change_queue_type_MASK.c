
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; scalar_t__ tagged_supported; } ;


 int FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int) ;

__attribute__((used)) static int
FUNC_3(struct scsi_device *VAR_0, int VAR_1)
{
 if (VAR_0->tagged_supported) {
  FUNC_2(VAR_0, VAR_1);
  if (VAR_1)
   FUNC_0(VAR_0, VAR_0->queue_depth);
  else
   FUNC_1(VAR_0, VAR_0->queue_depth);
 } else
  VAR_1 = 0;

 return VAR_1;
}
