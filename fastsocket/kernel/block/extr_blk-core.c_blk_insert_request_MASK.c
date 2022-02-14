
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {void* special; int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*,struct request*,int,int ) ;
 int FUNC_2 (struct request_queue*,struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*,int) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct request_queue *VAR_3, struct request *VAR_4,
   int VAR_5, void *VAR_6)
{
 int VAR_7 = VAR_5 ? VAR_1 : VAR_0;
 unsigned long VAR_8;






 VAR_4->cmd_type = VAR_2;

 VAR_4->special = VAR_6;

 FUNC_5(VAR_3->queue_lock, VAR_8);




 if (FUNC_3(VAR_4))
  FUNC_2(VAR_3, VAR_4);

 FUNC_4(VAR_4, 1);
 FUNC_1(VAR_3, VAR_4, VAR_7, 0);
 FUNC_0(VAR_3);
 FUNC_6(VAR_3->queue_lock, VAR_8);
}
