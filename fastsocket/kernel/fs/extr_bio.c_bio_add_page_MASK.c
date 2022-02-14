
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct bio {int bi_bdev; } ;


 int FUNC_0 (struct request_queue*,struct bio*,struct page*,unsigned int,unsigned int,int ) ;
 struct request_queue* FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;

int FUNC_3(struct bio *VAR_0, struct page *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 struct request_queue *VAR_4 = FUNC_1(VAR_0->bi_bdev);
 return FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3, FUNC_2(VAR_4));
}
