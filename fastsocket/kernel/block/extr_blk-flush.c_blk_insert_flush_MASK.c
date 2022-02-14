
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {unsigned int flush_flags; int queue_head; } ;
struct TYPE_2__ {int list; } ;
struct request {int end_io; scalar_t__ bio; scalar_t__ biotail; unsigned int cmd_flags; TYPE_1__ flush; int queuelist; struct request_queue* q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct request*,unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned int,struct request*) ;
 int VAR_7 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void FUNC_6(struct request *VAR_8)
{
 struct request_queue *VAR_9 = VAR_8->q;
 unsigned int VAR_10 = VAR_9->flush_flags;
 unsigned int VAR_11 = FUNC_3(VAR_10, VAR_8);

 FUNC_0(VAR_8->end_io);
 FUNC_0(!VAR_8->bio || VAR_8->bio != VAR_8->biotail);





 VAR_8->cmd_flags &= ~VAR_0;
 if (!(VAR_10 & VAR_6))
  VAR_8->cmd_flags &= ~VAR_6;






 if ((VAR_11 & VAR_3) &&
     !(VAR_11 & (VAR_5 | VAR_4))) {
  FUNC_4(&VAR_8->queuelist, &VAR_9->queue_head);
  return;
 }





 FUNC_5(&VAR_8->flush, 0, sizeof(VAR_8->flush));
 FUNC_1(&VAR_8->flush.list);
 VAR_8->cmd_flags |= VAR_1;
 VAR_8->end_io = VAR_7;

 FUNC_2(VAR_8, VAR_2 & ~VAR_11, 0);
}
