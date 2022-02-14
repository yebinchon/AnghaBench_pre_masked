
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ vme_start; int protection; scalar_t__ vme_end; struct TYPE_4__* vme_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

boolean_t
FUNC_6(vm_map_t VAR_2, vm_map_offset_t VAR_3,
   vm_map_offset_t VAR_4, vm_prot_t VAR_5)
{
 vm_map_entry_t VAR_6;
 vm_map_entry_t VAR_7;

 FUNC_0(VAR_2);

 if (VAR_3 < FUNC_3(VAR_2) || VAR_4 > FUNC_2(VAR_2) || VAR_3 > VAR_4)
 {
  FUNC_5(VAR_2);
  return (VAR_0);
 }

 if (!FUNC_1(VAR_2, VAR_3, &VAR_7)) {
  FUNC_5(VAR_2);
  return(VAR_0);
 }

 VAR_6 = VAR_7;

 while (VAR_3 < VAR_4) {
  if (VAR_6 == FUNC_4(VAR_2)) {
   FUNC_5(VAR_2);
   return(VAR_0);
  }





  if (VAR_3 < VAR_6->vme_start) {
   FUNC_5(VAR_2);
   return(VAR_0);
  }





  if ((VAR_6->protection & VAR_5) != VAR_5) {
   FUNC_5(VAR_2);
   return(VAR_0);
  }



  VAR_3 = VAR_6->vme_end;
  VAR_6 = VAR_6->vme_next;
 }
 FUNC_5(VAR_2);
 return(VAR_1);
}
