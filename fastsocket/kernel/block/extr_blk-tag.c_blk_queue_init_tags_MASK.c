
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int tag_busy_list; struct blk_queue_tag* queue_tags; } ;
struct blk_queue_tag {int refcnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct blk_queue_tag* FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct request_queue*,int) ;
 int FUNC_5 (struct blk_queue_tag*) ;
 int FUNC_6 (int ,struct request_queue*) ;
 int FUNC_7 (int ,struct request_queue*) ;

int FUNC_8(struct request_queue *VAR_2, int VAR_3,
   struct blk_queue_tag *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4 && VAR_2->queue_tags && VAR_4 != VAR_2->queue_tags);

 if (!VAR_4 && !VAR_2->queue_tags) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);

  if (!VAR_4)
   goto fail;
 } else if (VAR_2->queue_tags) {
  VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
  FUNC_6(VAR_1, VAR_2);
  return 0;
 } else
  FUNC_3(&VAR_4->refcnt);




 VAR_2->queue_tags = VAR_4;
 FUNC_7(VAR_1, VAR_2);
 FUNC_1(&VAR_2->tag_busy_list);
 return 0;
fail:
 FUNC_5(VAR_4);
 return -VAR_0;
}
