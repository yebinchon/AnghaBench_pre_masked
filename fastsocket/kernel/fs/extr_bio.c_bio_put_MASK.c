
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int (* bi_destructor ) (struct bio*) ;int * bi_next; int bi_cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;

void FUNC_4(struct bio *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->bi_cnt));




 if (FUNC_1(&VAR_0->bi_cnt)) {
  VAR_0->bi_next = ((void*)0);
  VAR_0->bi_destructor(VAR_0);
 }
}
