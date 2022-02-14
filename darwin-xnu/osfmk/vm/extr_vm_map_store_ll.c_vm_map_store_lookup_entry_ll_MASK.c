
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_12__ {scalar_t__ vme_start; scalar_t__ vme_end; struct TYPE_12__* vme_prev; struct TYPE_12__* vme_next; } ;
struct TYPE_11__ {TYPE_2__* hint; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

boolean_t
FUNC_3(
 vm_map_t VAR_2,
 vm_map_offset_t VAR_3,
 vm_map_entry_t *VAR_4)
{
 vm_map_entry_t VAR_5;
 vm_map_entry_t VAR_6;





 VAR_5 = VAR_2->hint;

 if (VAR_5 == FUNC_2(VAR_2))
  VAR_5 = VAR_5->vme_next;

 if (VAR_3 >= VAR_5->vme_start) {
  VAR_6 = FUNC_2(VAR_2);
  if ((VAR_5 != VAR_6) && (VAR_5->vme_end > VAR_3)) {
   *VAR_4 = VAR_5;
   return(VAR_1);
  }
 }
 else {



  VAR_6 = VAR_5->vme_next;
  VAR_5 = FUNC_1(VAR_2);
 }





 while (VAR_5 != VAR_6) {
  if (VAR_5->vme_end > VAR_3) {
   if (VAR_3 >= VAR_5->vme_start) {





    *VAR_4 = VAR_5;
    FUNC_0(VAR_2, VAR_5);

    return(VAR_1);
   }
   break;
  }
  VAR_5 = VAR_5->vme_next;
 }
 *VAR_4 = VAR_5->vme_prev;
 FUNC_0(VAR_2, *VAR_4);

 return(VAR_0);
}
