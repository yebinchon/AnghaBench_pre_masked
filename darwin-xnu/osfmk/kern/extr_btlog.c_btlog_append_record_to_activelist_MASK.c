
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ head; scalar_t__ tail; int active_record_count; } ;
typedef TYPE_1__ btlog_t ;
typedef scalar_t__ btlog_recordindex_t ;
struct TYPE_7__ {scalar_t__ next; } ;
typedef TYPE_2__ btlog_record_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(btlog_t *VAR_1, btlog_recordindex_t VAR_2)
{

 FUNC_0(VAR_2 != VAR_0);

 if (VAR_1->head == VAR_0) {

  VAR_1->head = VAR_1->tail = VAR_2;
 } else {
  btlog_record_t *VAR_3 = FUNC_1(VAR_1, VAR_1->tail);
  VAR_3->next = VAR_2;
  VAR_1->tail = VAR_2;
 }
 VAR_1->active_record_count++;
}
