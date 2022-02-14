
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {struct bio* bi_next; } ;
struct TYPE_2__ {struct bio** bio_tail; struct bio* bio_list; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(struct bio *VAR_1)
{
 if (VAR_0->bio_tail) {

  *(VAR_0->bio_tail) = VAR_1;
  VAR_1->bi_next = ((void*)0);
  VAR_0->bio_tail = &VAR_1->bi_next;
  return;
 }
 FUNC_0(VAR_1->bi_next);
 do {
  VAR_0->bio_list = VAR_1->bi_next;
  if (VAR_1->bi_next == ((void*)0))
   VAR_0->bio_tail = &VAR_0->bio_list;
  else
   VAR_1->bi_next = ((void*)0);
  FUNC_1(VAR_1);
  VAR_1 = VAR_0->bio_list;
 } while (VAR_1);
 VAR_0->bio_tail = ((void*)0);
}
