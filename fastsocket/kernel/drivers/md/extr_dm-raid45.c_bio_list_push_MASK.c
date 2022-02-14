
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {struct bio* tail; struct bio* head; } ;
struct bio {struct bio* bi_next; } ;



__attribute__((used)) static inline void FUNC_0(struct bio_list *VAR_0, struct bio *VAR_1)
{
 VAR_1->bi_next = VAR_0->head;
 VAR_0->head = VAR_1;

 if (!VAR_0->tail)
  VAR_0->tail = VAR_1;
}
