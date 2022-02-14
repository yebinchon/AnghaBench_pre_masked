
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct vm_map_links {scalar_t__ start; scalar_t__ end; TYPE_2__* next; TYPE_2__* prev; } ;
struct vm_map_entry {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {scalar_t__ vme_end; scalar_t__ vme_start; struct TYPE_12__* vme_prev; struct TYPE_12__* vme_next; } ;
struct TYPE_11__ {struct vm_map_links* holes_list; struct vm_map_links* hole_hint; } ;


 TYPE_2__* FUNC_0 (struct vm_map_links*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct vm_map_links*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,struct vm_map_entry*) ;
 int FUNC_4 (TYPE_2__*,struct vm_map_entry*) ;
 int FUNC_5 (char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 struct vm_map_links* FUNC_7 (int ) ;

void
FUNC_8(vm_map_t VAR_3, vm_map_entry_t VAR_4)
{




 vm_map_entry_t VAR_5, VAR_6;



 boolean_t VAR_7 = VAR_1;

 VAR_5 = FUNC_0(VAR_3->hole_hint);

 if (VAR_5) {

  if (VAR_5->vme_end == VAR_4->vme_start) {





  } else if (VAR_5->vme_start == VAR_4->vme_end) {

   if (VAR_5 != FUNC_0(VAR_3->holes_list)) {
    VAR_5 = VAR_5->vme_prev;
   }

  } else if (VAR_5->vme_start > VAR_4->vme_end) {





   VAR_5 = FUNC_0(VAR_3->holes_list);
  }

  if (VAR_5 != FUNC_0(VAR_3->holes_list)) {
   if (VAR_5->vme_start > VAR_4->vme_start) {
    FUNC_5("Hole hint failed: Hole entry start: 0x%llx, entry start: 0x%llx, map hole start: 0x%llx, map hint start: 0x%llx\n",
     (unsigned long long)VAR_5->vme_start,
     (unsigned long long)VAR_4->vme_start,
     (unsigned long long)VAR_3->holes_list->start,
     (unsigned long long)VAR_3->hole_hint->start);
   }
   if (VAR_5->vme_end > VAR_4->vme_start) {
    FUNC_5("Hole hint failed: Hole entry end: 0x%llx, entry start: 0x%llx, map hole start: 0x%llx, map hint start: 0x%llx\n",
     (unsigned long long)VAR_5->vme_end,
     (unsigned long long)VAR_4->vme_start,
     (unsigned long long)VAR_3->holes_list->start,
     (unsigned long long)VAR_3->hole_hint->start);
   }
  }

  while (1) {

   VAR_6 = VAR_5->vme_next;




   if (VAR_5->vme_end == VAR_4->vme_start) {
    if (VAR_4->vme_end == VAR_5->vme_next->vme_start) {

     FUNC_6(VAR_3, VAR_5);
    } else {

     VAR_5->vme_end = VAR_4->vme_end;
    }
    VAR_7 = VAR_0;



    break;
   }




   if (VAR_5->vme_start == VAR_4->vme_end) {





    VAR_5->vme_start = VAR_4->vme_start;
    VAR_7 = VAR_0;




    break;
   }






   if (VAR_5->vme_start > VAR_4->vme_end) {





    if (VAR_5 != FUNC_0(VAR_3->holes_list)) {
     FUNC_2(VAR_5->vme_start != VAR_4->vme_start);
     VAR_5 = VAR_5->vme_prev;
    }
    break;
   }

   VAR_5 = VAR_6;

   if (VAR_5 == FUNC_0(VAR_3->holes_list)) {
    VAR_5 = VAR_5->vme_prev;
    break;
   }
  }
 }

 if (VAR_7) {
  struct vm_map_links *VAR_8 = ((void*)0);
  vm_map_entry_t VAR_9, VAR_10;

  VAR_8 = FUNC_7(VAR_2);






  if (VAR_3->holes_list == ((void*)0) || (VAR_5 == FUNC_0(VAR_3->holes_list) && VAR_5->vme_start > VAR_4->vme_start)) {

   if (VAR_3->holes_list == ((void*)0)) {

    VAR_3->holes_list = VAR_8;
    VAR_8->prev = VAR_8->next = FUNC_0(VAR_3->holes_list);
   } else {

    VAR_9 = FUNC_0(VAR_3->holes_list);
    VAR_10 = VAR_3->holes_list->prev;
    VAR_3->holes_list = VAR_8;
    VAR_8->next = VAR_9;
    VAR_8->prev = VAR_10;

    VAR_10->vme_next = VAR_9->vme_prev = FUNC_0(VAR_8);
   }
  } else {

   VAR_9 = VAR_5->vme_next;
   VAR_10 = VAR_5->vme_next->vme_prev;

   VAR_8->prev = VAR_5;
   VAR_8->next = VAR_9;

   VAR_5->vme_next = FUNC_0(VAR_8);
   VAR_9->vme_prev = FUNC_0(VAR_8);
  }

  VAR_8->start = VAR_4->vme_start;
  VAR_8->end = VAR_4->vme_end;

  VAR_5 = FUNC_0(VAR_8);

  FUNC_2(VAR_8->start < VAR_8->end);
 }





 FUNC_1(VAR_3, (struct vm_map_links*) VAR_5);
 return;
}
