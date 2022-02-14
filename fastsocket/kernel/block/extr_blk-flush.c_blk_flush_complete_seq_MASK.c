
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct request_queue {size_t flush_pending_idx; int queue_head; struct list_head flush_data_in_flight; int flush_pending_since; struct list_head* flush_queue; } ;
struct TYPE_2__ {unsigned int seq; int list; } ;
struct request {TYPE_1__ flush; struct list_head queuelist; struct request_queue* q; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;




 int FUNC_2 (struct request*,int) ;
 unsigned int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct list_head*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct list_head*) ;
 int FUNC_10 (int *,struct list_head*) ;

__attribute__((used)) static bool FUNC_11(struct request *VAR_1, unsigned int VAR_2,
       int VAR_3)
{
 struct request_queue *VAR_4 = VAR_1->q;
 struct list_head *VAR_5 = &VAR_4->flush_queue[VAR_4->flush_pending_idx];
 bool VAR_6 = 0;

 FUNC_1(VAR_1->flush.seq & VAR_2);
 VAR_1->flush.seq |= VAR_2;

 if (FUNC_6(!VAR_3))
  VAR_2 = FUNC_3(VAR_1);
 else
  VAR_2 = 130;

 switch (VAR_2) {
 case 128:
 case 129:

  if (FUNC_9(VAR_5))
   VAR_4->flush_pending_since = VAR_0;
  FUNC_10(&VAR_1->flush.list, VAR_5);
  break;

 case 131:
  FUNC_10(&VAR_1->flush.list, &VAR_4->flush_data_in_flight);
  FUNC_7(&VAR_1->queuelist, &VAR_4->queue_head);
  VAR_6 = 1;
  break;

 case 130:






  FUNC_1(!FUNC_9(&VAR_1->queuelist));
  FUNC_8(&VAR_1->flush.list);
  FUNC_4(VAR_1);
  FUNC_2(VAR_1, VAR_3);
  break;

 default:
  FUNC_0();
 }

 return FUNC_5(VAR_4) | VAR_6;
}
