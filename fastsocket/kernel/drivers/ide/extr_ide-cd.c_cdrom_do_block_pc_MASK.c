
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {unsigned int dma_pad_mask; } ;
struct request {scalar_t__ cmd_type; scalar_t__ bio; int cmd_flags; int * cmd; } ;
struct TYPE_3__ {int dma; int dev_flags; struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;
 unsigned int FUNC_4 (struct request_queue*) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_5, struct request *VAR_6)
{

 FUNC_2(VAR_0, "rq->cmd[0]: 0x%x, rq->cmd_type: 0x%x",
      VAR_6->cmd[0], VAR_6->cmd_type);

 if (VAR_6->cmd_type == VAR_4)
  VAR_6->cmd_flags |= VAR_3;
 else
  VAR_6->cmd_flags &= ~VAR_2;

 VAR_5->dma = 0;


 if (VAR_6->bio) {
  struct request_queue *VAR_7 = VAR_5->queue;
  char *VAR_8 = FUNC_0(VAR_6->bio);
  unsigned int VAR_9;

  VAR_5->dma = !!(VAR_5->dev_flags & VAR_1);







  VAR_9 = FUNC_4(VAR_7) | VAR_7->dma_pad_mask;
  if ((unsigned long)VAR_8 & VAR_9
      || FUNC_1(VAR_6) & VAR_7->dma_pad_mask
      || FUNC_3(VAR_8))
   VAR_5->dma = 0;
 }
}
