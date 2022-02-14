
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; scalar_t__ device_busy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct scsi_device *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1->request_queue);
 while (VAR_1->device_busy) {
  FUNC_0(200);
  FUNC_2(VAR_1->request_queue);
 }
 return 0;
}
