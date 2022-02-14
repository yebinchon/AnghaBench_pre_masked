
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_queue_tag {scalar_t__ max_depth; struct blk_queue_tag* tag_map; struct blk_queue_tag* tag_index; int refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct blk_queue_tag*,scalar_t__) ;
 int FUNC_3 (struct blk_queue_tag*) ;

__attribute__((used)) static int FUNC_4(struct blk_queue_tag *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->refcnt);
 if (VAR_1) {
  FUNC_0(FUNC_2(VAR_0->tag_map, VAR_0->max_depth) <
       VAR_0->max_depth);

  FUNC_3(VAR_0->tag_index);
  VAR_0->tag_index = ((void*)0);

  FUNC_3(VAR_0->tag_map);
  VAR_0->tag_map = ((void*)0);

  FUNC_3(VAR_0);
 }

 return VAR_1;
}
