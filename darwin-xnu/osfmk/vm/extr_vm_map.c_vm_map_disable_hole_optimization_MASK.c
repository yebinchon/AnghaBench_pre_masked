
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_9__ {int * vme_prev; struct TYPE_9__* vme_next; } ;
struct TYPE_8__ {int first_free; scalar_t__ holelistenabled; int * holes_list; } ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*) ;

void
FUNC_4(vm_map_t VAR_2)
{
 vm_map_entry_t VAR_3, VAR_4, VAR_5;

 if (VAR_2->holelistenabled) {

  VAR_3 = VAR_4 = FUNC_0(VAR_2->holes_list);

  while (VAR_4 != ((void*)0)) {

   VAR_5 = VAR_4->vme_next;

   VAR_4->vme_next = ((void*)0);
   VAR_4->vme_prev = ((void*)0);
   FUNC_3(VAR_1, VAR_4);

   if (VAR_5 == VAR_3) {
    VAR_4 = ((void*)0);
   } else {
    VAR_4 = VAR_5;
   }
  }

  VAR_2->holes_list = ((void*)0);
  VAR_2->holelistenabled = VAR_0;

  VAR_2->first_free = FUNC_2(VAR_2);
  FUNC_1(VAR_2, ((void*)0));
 }
}
