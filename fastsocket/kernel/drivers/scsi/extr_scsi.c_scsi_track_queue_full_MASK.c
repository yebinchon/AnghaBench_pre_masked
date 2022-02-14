
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int last_queue_full_time; int last_queue_full_depth; int last_queue_full_count; scalar_t__ ordered_tags; TYPE_1__* host; } ;
struct TYPE_2__ {int cmd_per_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;

int FUNC_1(struct scsi_device *VAR_3, int VAR_4)
{






 if ((VAR_2 >> 4) == (VAR_3->last_queue_full_time >> 4))
  return 0;

 VAR_3->last_queue_full_time = VAR_2;
 if (VAR_3->last_queue_full_depth != VAR_4) {
  VAR_3->last_queue_full_count = 1;
  VAR_3->last_queue_full_depth = VAR_4;
 } else {
  VAR_3->last_queue_full_count++;
 }

 if (VAR_3->last_queue_full_count <= 10)
  return 0;
 if (VAR_3->last_queue_full_depth < 8) {

  FUNC_0(VAR_3, 0, VAR_3->host->cmd_per_lun);
  return -1;
 }

 if (VAR_3->ordered_tags)
  FUNC_0(VAR_3, VAR_0, VAR_4);
 else
  FUNC_0(VAR_3, VAR_1, VAR_4);
 return VAR_4;
}
