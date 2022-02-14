
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct blk_queue_tag* queue_tags; } ;
struct request {int dummy; } ;
struct blk_queue_tag {int real_max_depth; int max_depth; unsigned long* tag_map; struct request** tag_index; int refcnt; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct blk_queue_tag*,int) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (unsigned long*,unsigned long*,int) ;

int FUNC_5(struct request_queue *VAR_4, int VAR_5)
{
 struct blk_queue_tag *VAR_6 = VAR_4->queue_tags;
 struct request **VAR_7;
 unsigned long *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_6)
  return -VAR_3;







 if (VAR_5 <= VAR_6->real_max_depth) {
  VAR_6->max_depth = VAR_5;
  return 0;
 }





 if (FUNC_1(&VAR_6->refcnt) != 1)
  return -VAR_1;




 VAR_7 = VAR_6->tag_index;
 VAR_8 = VAR_6->tag_map;
 VAR_9 = VAR_6->real_max_depth;

 if (FUNC_2(VAR_4, VAR_6, VAR_5))
  return -VAR_2;

 FUNC_4(VAR_6->tag_index, VAR_7, VAR_9 * sizeof(struct request *));
 VAR_10 = FUNC_0(VAR_9, VAR_0) / VAR_0;
 FUNC_4(VAR_6->tag_map, VAR_8, VAR_10 * sizeof(unsigned long));

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 return 0;
}
