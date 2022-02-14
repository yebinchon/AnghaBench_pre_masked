
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct blk_queue_tag {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct request_queue*,struct blk_queue_tag*,int) ;
 int FUNC_2 (struct blk_queue_tag*) ;
 struct blk_queue_tag* FUNC_3 (int,int ) ;

__attribute__((used)) static struct blk_queue_tag *FUNC_4(struct request_queue *VAR_1,
         int VAR_2)
{
 struct blk_queue_tag *VAR_3;

 VAR_3 = FUNC_3(sizeof(struct blk_queue_tag), VAR_0);
 if (!VAR_3)
  goto fail;

 if (FUNC_1(VAR_1, VAR_3, VAR_2))
  goto fail;

 FUNC_0(&VAR_3->refcnt, 1);
 return VAR_3;
fail:
 FUNC_2(VAR_3);
 return ((void*)0);
}
