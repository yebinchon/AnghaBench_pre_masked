
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct request {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct request*,int,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct request_queue *VAR_0, struct request *VAR_1, int VAR_2,
       int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_0->queue_lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0->queue_lock, VAR_4);
}
