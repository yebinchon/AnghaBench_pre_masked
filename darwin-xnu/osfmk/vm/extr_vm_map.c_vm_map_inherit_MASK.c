
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef scalar_t__ vm_inherit_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ vme_start; struct TYPE_6__* vme_next; scalar_t__ inheritance; int use_pmap; scalar_t__ is_sub_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_1__**) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

kern_return_t
FUNC_8(
 vm_map_t VAR_3,
 vm_map_offset_t VAR_4,
 vm_map_offset_t VAR_5,
 vm_inherit_t VAR_6)
{
 vm_map_entry_t VAR_7;
 vm_map_entry_t VAR_8;

 FUNC_4(VAR_3);

 FUNC_0(VAR_3, VAR_4, VAR_5);

 if (FUNC_5(VAR_3, VAR_4, &VAR_8)) {
  VAR_7 = VAR_8;
 }
 else {
  VAR_8 = VAR_8->vme_next;
  VAR_7 = VAR_8;
 }



 while ((VAR_7 != FUNC_6(VAR_3)) && (VAR_7->vme_start < VAR_5)) {
  if(VAR_7->is_sub_map) {
   if(VAR_6 == VAR_2) {
    FUNC_7(VAR_3);
    return(VAR_0);
   }
  }

  VAR_7 = VAR_7->vme_next;
 }

 VAR_7 = VAR_8;
 if (VAR_7 != FUNC_6(VAR_3)) {

  FUNC_3(VAR_3, VAR_7, VAR_4);
 }

 while ((VAR_7 != FUNC_6(VAR_3)) && (VAR_7->vme_start < VAR_5)) {
  FUNC_2(VAR_3, VAR_7, VAR_5);
  if (VAR_7->is_sub_map) {

   FUNC_1(!VAR_7->use_pmap);
  }

  VAR_7->inheritance = VAR_6;

  VAR_7 = VAR_7->vme_next;
 }

 FUNC_7(VAR_3);
 return(VAR_1);
}
