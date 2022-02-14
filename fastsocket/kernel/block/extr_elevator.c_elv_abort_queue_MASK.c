
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct request_queue {TYPE_1__ queue_head; } ;
struct request {int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct request* FUNC_4 (int ) ;
 int FUNC_5 (struct request_queue*,struct request*) ;

void FUNC_6(struct request_queue *VAR_2)
{
 struct request *VAR_3;

 FUNC_1(VAR_2);

 while (!FUNC_3(&VAR_2->queue_head)) {
  VAR_3 = FUNC_4(VAR_2->queue_head.next);
  VAR_3->cmd_flags |= VAR_1;
  FUNC_5(VAR_2, VAR_3);




  FUNC_2(VAR_3);
  FUNC_0(VAR_3, -VAR_0);
 }
}
