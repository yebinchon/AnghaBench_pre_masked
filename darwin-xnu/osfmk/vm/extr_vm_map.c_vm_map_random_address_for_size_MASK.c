
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ vme_start; struct TYPE_6__* vme_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;

kern_return_t
FUNC_10(
 vm_map_t VAR_6,
 vm_map_offset_t *VAR_7,
 vm_map_size_t VAR_8)
{
 kern_return_t VAR_9 = VAR_2;
 int VAR_10 = 0;
 vm_map_offset_t VAR_11 = 0;
 vm_map_offset_t VAR_12;

 vm_map_entry_t VAR_13 = VAR_5;
 vm_map_entry_t VAR_14 = VAR_5;
 vm_map_size_t VAR_15 = 0;
 vm_map_size_t VAR_16;

 VAR_16 = FUNC_6(VAR_6) - FUNC_7(VAR_6);

 FUNC_1(FUNC_2(VAR_8));

 while (VAR_10 < VAR_3) {
  VAR_11 = ((vm_map_offset_t)FUNC_3()) << VAR_4;
  VAR_11 = FUNC_9(
   FUNC_7(VAR_6) +(VAR_11 % VAR_16),
   FUNC_0(VAR_6));

  if (FUNC_5(VAR_6, VAR_11, &VAR_14) == VAR_0) {
   if (VAR_14 == FUNC_8(VAR_6)) {
    VAR_13 = FUNC_4(VAR_6);
   } else {
    VAR_13 = VAR_14->vme_next;
   }
   if (VAR_13 == FUNC_8(VAR_6)) {
    VAR_12 = FUNC_6(VAR_6);
   } else {
    VAR_12 = VAR_13->vme_start;
   }
   VAR_15 = VAR_12 - VAR_11;
   if (VAR_15 >= VAR_8) {
    *VAR_7 = VAR_11;
    break;
   }
  }
  VAR_10++;
 }

 if (VAR_10 == VAR_3) {
  VAR_9 = VAR_1;
 }
 return VAR_9;
}
