
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct blk_queue_tag* queue_tags; } ;
struct blk_queue_tag {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_queue_tag*) ;
 int FUNC_1 (int ,struct request_queue*) ;

void FUNC_2(struct request_queue *VAR_1)
{
 struct blk_queue_tag *VAR_2 = VAR_1->queue_tags;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2);

 VAR_1->queue_tags = ((void*)0);
 FUNC_1(VAR_0, VAR_1);
}
