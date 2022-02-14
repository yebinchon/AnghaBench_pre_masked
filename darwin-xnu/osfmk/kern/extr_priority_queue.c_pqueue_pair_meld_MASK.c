
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* priority_queue_entry_t ;
typedef int priority_queue_compare_fn_t ;
struct TYPE_8__ {struct TYPE_8__* prev; struct TYPE_8__* next; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

priority_queue_entry_t
FUNC_2(priority_queue_entry_t VAR_0, priority_queue_compare_fn_t VAR_1)
{
 priority_queue_entry_t VAR_2 = ((void*)0);
 priority_queue_entry_t VAR_3 = ((void*)0);

 FUNC_0(VAR_0);





 do {

  priority_queue_entry_t VAR_4 = VAR_0;
  priority_queue_entry_t VAR_5 = VAR_0->next;
  if (VAR_5 == ((void*)0)) {


   VAR_4->prev = VAR_3;
   VAR_3 = VAR_4;
   break;
  }

  VAR_0 = VAR_5->next;
  priority_queue_entry_t VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1);

  VAR_6->prev = VAR_3;
  VAR_3 = VAR_6;
 } while (VAR_0 != ((void*)0));


 do {
  VAR_0 = VAR_3->prev;
  VAR_2 = FUNC_1(VAR_2, VAR_3, VAR_1);
  VAR_3 = VAR_0;
 } while (VAR_3 != ((void*)0));

 return VAR_2;
}
