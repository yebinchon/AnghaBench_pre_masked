
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_3__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_4__* vm_map_entry_t ;
typedef int vm_machine_attribute_val_t ;
typedef scalar_t__ vm_machine_attribute_t ;
typedef int kern_return_t ;
struct TYPE_25__ {scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ is_sub_map; } ;
struct TYPE_24__ {int pmap; } ;
struct TYPE_23__ {scalar_t__ vo_shadow_offset; struct TYPE_23__* shadow; } ;
struct TYPE_22__ {int vmp_fictitious; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,TYPE_4__**) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*,scalar_t__) ;

kern_return_t
FUNC_14(
 vm_map_t VAR_5,
 vm_map_offset_t VAR_6,
 vm_map_offset_t VAR_7,
 vm_machine_attribute_t VAR_8,
 vm_machine_attribute_val_t* VAR_9)
{
 kern_return_t VAR_10;
 vm_map_size_t VAR_11;
 vm_map_entry_t VAR_12;

 if (VAR_6 < FUNC_9(VAR_5) || VAR_7 > FUNC_8(VAR_5))
  return VAR_1;


 VAR_11 = VAR_7 - VAR_6;

 FUNC_6(VAR_5);

 if (VAR_8 != VAR_3) {


  VAR_10 = FUNC_4(VAR_5->pmap, VAR_6, VAR_7-VAR_6,
         VAR_8, VAR_9);
  FUNC_10(VAR_5);
  return VAR_10;
 }

 VAR_10 = VAR_2;

 while(VAR_11) {
  if (FUNC_7(VAR_5, VAR_6, &VAR_12)) {
   vm_map_size_t VAR_13;
   if((VAR_12->vme_end - VAR_6) > VAR_11) {
    VAR_13 = VAR_11;
    VAR_11 = 0;
   } else {
    VAR_13 = VAR_12->vme_end - VAR_6;
    VAR_11 -= VAR_13;
   }
   if(VAR_12->is_sub_map) {
    vm_map_offset_t VAR_14;
    vm_map_offset_t VAR_15;

    VAR_14 = (VAR_6 - VAR_12->vme_start)
     + FUNC_1(VAR_12);
    VAR_15 = VAR_14 + VAR_13;
    FUNC_14(
     FUNC_2(VAR_12),
     VAR_14,
     VAR_15,
     VAR_8, VAR_9);
   } else {
    if (FUNC_0(VAR_12)) {
     vm_page_t VAR_16;
     vm_object_t VAR_17;
     vm_object_t VAR_18;
     vm_object_t VAR_19;
     vm_object_offset_t VAR_20;
     vm_object_offset_t VAR_21;
     vm_map_size_t VAR_22;
     VAR_22 = VAR_13;
     VAR_20 = (VAR_6 - VAR_12->vme_start)
      + FUNC_1(VAR_12);
     VAR_21 = VAR_20;
     VAR_17 = FUNC_0(VAR_12);
     VAR_18 = VAR_17;
     VAR_19 = ((void*)0);

     FUNC_11(VAR_17);

     while (VAR_22) {
      VAR_16 = FUNC_13(
       VAR_17, VAR_20);

      if (VAR_16 && !VAR_16->vmp_fictitious) {
              VAR_10 =
        FUNC_5(
         FUNC_3(VAR_16),
         VAR_4,
         VAR_8, VAR_9);

      } else if (VAR_17->shadow) {
              VAR_20 = VAR_20 + VAR_17->vo_shadow_offset;
       VAR_19 = VAR_17;
       VAR_17 = VAR_17->shadow;
       FUNC_11(VAR_19->shadow);
       FUNC_12(VAR_19);
       continue;
      }
      VAR_22 -= VAR_4;

      if (VAR_18 != VAR_17) {
              FUNC_12(VAR_17);
       FUNC_11(VAR_18);
       VAR_17 = VAR_18;
      }

      VAR_21 += VAR_4;
      VAR_20 = VAR_21;
     }
     FUNC_12(VAR_17);
    }
   }
   VAR_6 += VAR_13;
  } else {
   FUNC_10(VAR_5);
   return VAR_0;
  }

 }

 FUNC_10(VAR_5);

 return VAR_10;
}
