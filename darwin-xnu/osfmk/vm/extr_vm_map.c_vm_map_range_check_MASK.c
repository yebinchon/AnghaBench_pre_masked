
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ vme_end; scalar_t__ vme_start; struct TYPE_5__* vme_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static boolean_t
FUNC_4(
 vm_map_t VAR_2,
 vm_map_offset_t VAR_3,
 vm_map_offset_t VAR_4,
 vm_map_entry_t *VAR_5)
{
 vm_map_entry_t VAR_6;
 vm_map_offset_t VAR_7;




 if (VAR_3 < FUNC_2(VAR_2) || VAR_4 > FUNC_1(VAR_2) || VAR_3 > VAR_4)
  return (VAR_0);





 if (!FUNC_0(VAR_2, VAR_3, &VAR_6))
  return (VAR_0);





 if (VAR_5 != (vm_map_entry_t *) ((void*)0))
  *VAR_5 = VAR_6;
 if (VAR_4 <= VAR_6->vme_end)
  return (VAR_1);





 VAR_7 = VAR_6->vme_end;
 VAR_6 = VAR_6->vme_next;
 while ((VAR_6 != FUNC_3(VAR_2)) && (VAR_7 == VAR_6->vme_start)) {
  if (VAR_4 <= VAR_6->vme_end)
   return (VAR_1);
  VAR_7 = VAR_6->vme_end;
  VAR_6 = VAR_6->vme_next;
 }
 return (VAR_0);
}
