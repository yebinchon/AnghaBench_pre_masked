
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int elevator; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct request_queue *VAR_1)
{
 if (!VAR_1->elevator)
  return;

 FUNC_2(VAR_1->queue_lock);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_1->queue_lock);

 FUNC_0(VAR_1, 0);
}
