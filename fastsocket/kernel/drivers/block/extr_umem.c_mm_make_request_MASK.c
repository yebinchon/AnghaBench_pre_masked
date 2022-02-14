
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct cardinfo* queuedata; } ;
struct cardinfo {int lock; struct bio** biotail; } ;
struct bio {struct bio* bi_next; int bi_size; scalar_t__ bi_sector; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (char*,unsigned long long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct request_queue *VAR_0, struct bio *VAR_1)
{
 struct cardinfo *VAR_2 = VAR_0->queuedata;
 FUNC_1("mm_make_request %llu %u\n",
   (unsigned long long)VAR_1->bi_sector, VAR_1->bi_size);

 FUNC_2(&VAR_2->lock);
 *VAR_2->biotail = VAR_1;
 VAR_1->bi_next = ((void*)0);
 VAR_2->biotail = &VAR_1->bi_next;
 FUNC_0(VAR_0);
 FUNC_3(&VAR_2->lock);

 return 0;
}
