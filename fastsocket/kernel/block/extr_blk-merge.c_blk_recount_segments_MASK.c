
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio {int bi_flags; struct bio* bi_next; int bi_phys_segments; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct bio*) ;

void FUNC_1(struct request_queue *VAR_1, struct bio *VAR_2)
{
 struct bio *VAR_3 = VAR_2->bi_next;

 VAR_2->bi_next = ((void*)0);
 VAR_2->bi_phys_segments = FUNC_0(VAR_1, VAR_2);
 VAR_2->bi_next = VAR_3;
 VAR_2->bi_flags |= (1 << VAR_0);
}
