
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int kern_return_t ;
typedef void* boolean_t ;
struct TYPE_11__ {scalar_t__ true_share; int internal; } ;
struct TYPE_10__ {scalar_t__ vme_end; scalar_t__ vme_start; int protection; void* needs_wakeup; scalar_t__ in_transition; struct TYPE_10__* vme_next; scalar_t__ is_sub_map; int use_pmap; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_13(
 vm_map_t VAR_9,
 vm_map_offset_t VAR_10,
 vm_map_size_t VAR_11)
{
 vm_map_offset_t VAR_12;
 vm_map_entry_t VAR_13;
 vm_map_entry_t VAR_14;
 kern_return_t VAR_15;
 boolean_t VAR_16 = VAR_0;
 VAR_12 = FUNC_9(VAR_10 + VAR_11,
        FUNC_3(VAR_9));
 FUNC_7(VAR_9);

start_pass_1:
 if (!FUNC_8(VAR_9, VAR_10, &VAR_13)) {
  FUNC_12(VAR_9);
  return(VAR_2);
 }

 FUNC_5(VAR_9,
     VAR_13,
     FUNC_11(VAR_10,
         FUNC_3(VAR_9)));
 if (VAR_13->is_sub_map) {

  FUNC_4(!VAR_13->use_pmap);
 }

 for (VAR_14 = VAR_13;;) {
  vm_map_entry_t VAR_17;

  VAR_17 = VAR_14->vme_next;
  while(VAR_14->is_sub_map) {
   vm_map_offset_t VAR_18;
   vm_map_offset_t VAR_19;
   vm_map_offset_t VAR_20;

   if (VAR_14->in_transition) {



                         VAR_14->needs_wakeup = VAR_6;
                         FUNC_6(VAR_9, VAR_5);

    goto start_pass_1;
   }

   VAR_16 = VAR_6;
   VAR_18 = FUNC_1(VAR_14);

   if(VAR_14->vme_end < VAR_12)
    VAR_19 = VAR_14->vme_end;
   else
    VAR_19 = VAR_12;
   VAR_19 -= VAR_14->vme_start;
   VAR_19 += FUNC_1(VAR_14);
   VAR_20 = VAR_14->vme_end;
   FUNC_12(VAR_9);

   VAR_15 = FUNC_13(
    FUNC_2(VAR_14),
    VAR_18,
    VAR_19 - VAR_18);

   if(VAR_15 != VAR_4)
    return VAR_15;
   if (VAR_12 <= VAR_14->vme_end)
    return VAR_4;
   FUNC_7(VAR_9);
   if(!FUNC_8(VAR_9, VAR_20,
      &VAR_13)) {
    FUNC_12(VAR_9);
    return(VAR_2);
   }
   VAR_14 = VAR_13;
   VAR_17 = VAR_14->vme_next;
  }

  if ( ! (VAR_14->protection & VAR_8)) {
   FUNC_12(VAR_9);
   return(VAR_3);
  }






                if (VAR_14->in_transition) {




                        VAR_14->needs_wakeup = VAR_6;
                        FUNC_6(VAR_9, VAR_5);

   goto start_pass_1;
  }




  if (VAR_12 <= VAR_14->vme_end) {
   FUNC_12(VAR_9);
   return VAR_4;
  }



  if ((VAR_17 == FUNC_10(VAR_9)) ||
      (VAR_17->vme_start != VAR_14->vme_end)) {
   FUNC_12(VAR_9);
   return(VAR_2);
  }




  if ((FUNC_0(VAR_14) != VAR_7) &&
      ((!FUNC_0(VAR_14)->internal) ||
       (FUNC_0(VAR_14)->true_share))) {
   if(VAR_16) {
    FUNC_12(VAR_9);
    return(VAR_1);
   }
  }


  VAR_14 = VAR_17;
 }
 FUNC_12(VAR_9);
 return(VAR_4);
}
