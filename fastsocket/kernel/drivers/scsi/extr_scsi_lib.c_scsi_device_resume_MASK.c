
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ sdev_state; int request_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct scsi_device *VAR_2)
{




 if (VAR_2->sdev_state != VAR_0 ||
     FUNC_0(VAR_2, VAR_1))
  return;
 FUNC_1(VAR_2->request_queue);
}
