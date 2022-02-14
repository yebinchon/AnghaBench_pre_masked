
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ head; scalar_t__ active_record_count; scalar_t__ freelist_records; scalar_t__ tail; } ;
typedef TYPE_1__ btlog_t ;
typedef scalar_t__ btlog_recordindex_t ;
struct TYPE_7__ {scalar_t__ next; scalar_t__ bthash; int element_record_queue; } ;
typedef TYPE_2__ btlog_record_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(btlog_t *VAR_1, btlog_recordindex_t VAR_2)
{
 btlog_recordindex_t VAR_3 = VAR_0;
 btlog_record_t *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 VAR_5 = FUNC_2(VAR_1, VAR_2);

 FUNC_1(FUNC_0(&VAR_5->element_record_queue));

 VAR_5->bthash = 0;

 VAR_3 = VAR_1->head;
 VAR_4 = FUNC_2(VAR_1, VAR_3);

 if (VAR_3 == VAR_2) {
  VAR_1->head = VAR_4->next;
  VAR_1->active_record_count--;

  VAR_5->next = VAR_1->freelist_records;
  VAR_1->freelist_records = VAR_2;

  if (VAR_1->head == VAR_0) {

   VAR_1->tail = VAR_0;
   FUNC_1(VAR_1->active_record_count == 0);
  }
 } else {
  while (VAR_3 != VAR_0) {
   if (VAR_4->next == VAR_2) {
    VAR_4->next = VAR_5->next;
    VAR_1->active_record_count--;

    VAR_5->next = VAR_1->freelist_records;
    VAR_1->freelist_records = VAR_2;

    if (VAR_1->tail == VAR_2) {
     VAR_1->tail = VAR_3;
    }
    break;
   } else {
    VAR_3 = VAR_4->next;
    VAR_4 = FUNC_2(VAR_1, VAR_3);
   }
  }
 }
}
