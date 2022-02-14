
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct vm_map_links {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_9__ {struct TYPE_9__* vme_prev; struct TYPE_9__* vme_next; } ;
struct TYPE_8__ {struct vm_map_links* holes_list; } ;


 TYPE_2__* FUNC_0 (struct vm_map_links*) ;
 int FUNC_1 (TYPE_1__*,struct vm_map_links*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;

void
FUNC_3(vm_map_t VAR_1, vm_map_entry_t VAR_2)
{
 if (VAR_2 == FUNC_0(VAR_1->holes_list)) {

  if (VAR_2->vme_next == FUNC_0(VAR_1->holes_list)) {

   VAR_1->holes_list = ((void*)0);
   FUNC_1(VAR_1, ((void*)0));
  } else {

   vm_map_entry_t VAR_3, VAR_4;

   VAR_3 = (vm_map_entry_t) VAR_1->holes_list->next;
   VAR_4 = (vm_map_entry_t) VAR_1->holes_list->prev;
   VAR_1->holes_list = (struct vm_map_links*) VAR_3;

   VAR_3->vme_prev = VAR_4;
   VAR_4->vme_next = VAR_3;

   FUNC_1(VAR_1, (struct vm_map_links*) VAR_3);
  }
 } else {

  FUNC_1(VAR_1, (struct vm_map_links*) VAR_2->vme_prev);

  VAR_2->vme_prev->vme_next = VAR_2->vme_next;
  VAR_2->vme_next->vme_prev = VAR_2->vme_prev;
 }

 VAR_2->vme_next = ((void*)0);
 VAR_2->vme_prev = ((void*)0);
 FUNC_2(VAR_0, VAR_2);
}
