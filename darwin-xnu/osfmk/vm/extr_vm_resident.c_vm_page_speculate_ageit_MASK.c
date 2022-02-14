
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_8__ {void* prev; void* next; } ;
struct vm_speculative_age_q {TYPE_3__ age_q; } ;
struct TYPE_6__ {void* next; void* prev; } ;
struct TYPE_7__ {TYPE_1__ vmp_pageq; } ;


 void* FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct vm_speculative_age_q* VAR_1 ;

void
FUNC_4(struct vm_speculative_age_q *VAR_2)
{
        struct vm_speculative_age_q *VAR_3;
 vm_page_t VAR_4;

 VAR_3 = &VAR_1[VAR_0];

 if (FUNC_2(&VAR_3->age_q)) {
         VAR_3->age_q.next = VAR_2->age_q.next;
  VAR_3->age_q.prev = VAR_2->age_q.prev;

  VAR_4 = (vm_page_t)FUNC_1(VAR_3->age_q.next);
  VAR_4->vmp_pageq.prev = FUNC_0(&VAR_3->age_q);

  VAR_4 = (vm_page_t)FUNC_1(VAR_3->age_q.prev);
  VAR_4->vmp_pageq.next = FUNC_0(&VAR_3->age_q);
 } else {
         VAR_4 = (vm_page_t)FUNC_1(VAR_3->age_q.prev);
  VAR_4->vmp_pageq.next = VAR_2->age_q.next;

  VAR_4 = (vm_page_t)FUNC_1(VAR_2->age_q.next);
  VAR_4->vmp_pageq.prev = VAR_3->age_q.prev;

  VAR_4 = (vm_page_t)FUNC_1(VAR_2->age_q.prev);
  VAR_4->vmp_pageq.next = FUNC_0(&VAR_3->age_q);

  VAR_3->age_q.prev = VAR_2->age_q.prev;
 }
 FUNC_3(&VAR_2->age_q);
}
