
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {int target_busy; } ;
struct scsi_device {TYPE_1__* request_queue; int device_busy; struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; scalar_t__ host_eh_scheduled; scalar_t__ host_failed; int host_busy; } ;
struct TYPE_2__ {int queue_lock; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*) ;
 struct scsi_target* FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct scsi_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;
 struct scsi_target *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_4(VAR_1->host_lock, VAR_3);
 VAR_1->host_busy--;
 VAR_2->target_busy--;
 if (FUNC_7(FUNC_1(VAR_1) &&
       (VAR_1->host_failed || VAR_1->host_eh_scheduled)))
  FUNC_0(VAR_1);
 FUNC_5(VAR_1->host_lock);
 FUNC_3(VAR_0->request_queue->queue_lock);
 VAR_0->device_busy--;
 FUNC_6(VAR_0->request_queue->queue_lock, VAR_3);
}
