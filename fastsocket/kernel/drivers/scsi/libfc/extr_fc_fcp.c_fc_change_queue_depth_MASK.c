
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; } ;


 int VAR_0 ;



 int FUNC_0 (struct scsi_device*,int ,int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,int) ;

int FUNC_3(struct scsi_device *VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_1, FUNC_1(VAR_1), VAR_2);
  break;
 case 129:
  FUNC_2(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_0(VAR_1, FUNC_1(VAR_1), VAR_2);
  break;
 default:
  return -VAR_0;
 }
 return VAR_1->queue_depth;
}
