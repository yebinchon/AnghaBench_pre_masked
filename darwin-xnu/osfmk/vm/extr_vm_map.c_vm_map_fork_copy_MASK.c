
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int vm_map_copy_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ vme_end; scalar_t__ vme_start; int max_protection; struct TYPE_7__* vme_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,TYPE_1__**) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static boolean_t
FUNC_7(
 vm_map_t VAR_6,
 vm_map_entry_t *VAR_7,
 vm_map_t VAR_8,
 int VAR_9)
{
 vm_map_entry_t VAR_10 = *VAR_7;
 vm_map_size_t VAR_11 = VAR_10->vme_end - VAR_10->vme_start;
 vm_map_offset_t VAR_12 = VAR_10->vme_start;
 vm_map_copy_t VAR_13;
 vm_map_entry_t VAR_14 = FUNC_3(VAR_8);

 FUNC_6(VAR_6);






 VAR_9 |= VAR_3;
 if (FUNC_2(VAR_6, VAR_12, VAR_11,
       VAR_9, &VAR_13)
     != VAR_1) {






  FUNC_4(VAR_6);
  if (!FUNC_5(VAR_6, VAR_12, &VAR_14) ||
      (VAR_14->max_protection & VAR_5) == VAR_4) {
   VAR_14 = VAR_14->vme_next;
  }
  *VAR_7 = VAR_14;
  return VAR_0;
 }





 FUNC_1(VAR_8, VAR_14, VAR_13);






 FUNC_4(VAR_6);
 VAR_12 += VAR_11;
 if (! FUNC_5(VAR_6, VAR_12, &VAR_14)) {
  VAR_14 = VAR_14->vme_next;
 } else {
  if (VAR_14->vme_start == VAR_12) {





  } else {
   FUNC_0(VAR_6, VAR_14, VAR_12);
  }
 }
 *VAR_7 = VAR_14;

 return VAR_2;
}
