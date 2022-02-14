
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int (* prep_rq_fn ) (struct request_queue*,struct request*) ;} ;
struct request {int timeout; int cmd_flags; int * cmd; } ;
struct TYPE_4__ {int media_written; } ;
struct cdrom_info {TYPE_1__ devinfo; int disk; } ;
typedef int ide_startstop_t ;
struct TYPE_5__ {int dma; int dev_flags; struct request_queue* queue; struct cdrom_info* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short FUNC_0 (struct request*) ;
 unsigned short FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,unsigned short) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_4 (struct request_queue*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 int FUNC_6 (struct request_queue*,struct request*) ;

__attribute__((used)) static ide_startstop_t FUNC_7(ide_drive_t *VAR_7, struct request *VAR_8)
{
 struct cdrom_info *VAR_9 = VAR_7->driver_data;
 struct request_queue *VAR_10 = VAR_7->queue;
 int VAR_11 = FUNC_5(VAR_8) == VAR_4;
 unsigned short VAR_12 =
  FUNC_4(VAR_10) >> VAR_3;

 FUNC_3(VAR_1, "rq->cmd[0]: 0x%x, rq->cmd_flags: 0x%x, "
      "secs_per_frame: %u",
      VAR_8->cmd[0], VAR_8->cmd_flags, VAR_12);

 if (VAR_11) {

  if (FUNC_2(VAR_9->disk))
   return VAR_6;
 } else {




  VAR_10->prep_rq_fn(VAR_10, VAR_8);
 }


 if ((FUNC_1(VAR_8) & (VAR_12 - 1)) ||
     (FUNC_0(VAR_8) & (VAR_12 - 1)))
  return VAR_6;


 VAR_7->dma = !!(VAR_7->dev_flags & VAR_2);

 if (VAR_11)
  VAR_9->devinfo.media_written = 1;

 VAR_8->timeout = VAR_0;

 return VAR_5;
}
