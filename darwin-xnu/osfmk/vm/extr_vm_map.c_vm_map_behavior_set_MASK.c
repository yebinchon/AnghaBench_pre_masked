
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int vm_behavior_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ vme_start; int behavior; struct TYPE_6__* vme_next; int zero_wired_pages; int use_pmap; int is_sub_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__,int,int ) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,TYPE_1__**) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,scalar_t__,scalar_t__) ;

kern_return_t
FUNC_16(
 vm_map_t VAR_9,
 vm_map_offset_t VAR_10,
 vm_map_offset_t VAR_11,
 vm_behavior_t VAR_12)
{
 vm_map_entry_t VAR_13;
 vm_map_entry_t VAR_14;

 FUNC_0(VAR_8,
     "vm_map_behavior_set, 0x%X start 0x%X end 0x%X behavior %d",
     VAR_9, VAR_10, VAR_11, VAR_12, 0);

 if (VAR_10 > VAR_11 ||
     VAR_10 < FUNC_7(VAR_9) ||
     VAR_11 > FUNC_6(VAR_9)) {
  return VAR_2;
 }

 switch (VAR_12) {







 case 138:
 case 134:
 case 130:
 case 131:
 case 128:
  FUNC_5(VAR_9);
  if (FUNC_10(VAR_9, VAR_10, VAR_11, &VAR_14)) {
   VAR_13 = VAR_14;
   FUNC_4(VAR_9, VAR_13, VAR_10);
  }
  else {
   FUNC_14(VAR_9);
   return(VAR_0);
  }

  while ((VAR_13 != FUNC_13(VAR_9)) && (VAR_13->vme_start < VAR_11)) {
   FUNC_3(VAR_9, VAR_13, VAR_11);
   if (VAR_13->is_sub_map) {
    FUNC_1(!VAR_13->use_pmap);
   }

   if( VAR_12 == 128 ) {
    VAR_13->zero_wired_pages = VAR_4;
   } else {
    VAR_13->behavior = VAR_12;
   }
   VAR_13 = VAR_13->vme_next;
  }

  FUNC_14(VAR_9);
  break;







 case 129:
  return FUNC_15(VAR_9, VAR_10, VAR_11);

 case 137:
  return FUNC_8(VAR_9, VAR_10, VAR_11 - VAR_10, VAR_6 | VAR_5);

 case 136:
  return FUNC_8(VAR_9, VAR_10, VAR_11 - VAR_10, VAR_7 | VAR_5);

 case 133:
  return FUNC_11(VAR_9, VAR_10, VAR_11);

 case 132:
  return FUNC_12(VAR_9, VAR_10, VAR_11);

 case 139:
  return FUNC_2(VAR_9, VAR_10, VAR_11);






 default:
  return(VAR_1);
 }

 return(VAR_3);
}
