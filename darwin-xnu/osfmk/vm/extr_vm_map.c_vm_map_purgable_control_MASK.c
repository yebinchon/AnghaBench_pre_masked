
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vm_purgable_t ;
typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_19__ {int protection; scalar_t__ vme_end; scalar_t__ vme_start; int use_pmap; scalar_t__ is_sub_map; } ;
struct TYPE_18__ {scalar_t__ pmap; } ;
struct TYPE_17__ {scalar_t__ purgable; scalar_t__ vo_size; int vo_purgeable_volatilizer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_3__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;

kern_return_t
FUNC_10(
 vm_map_t VAR_17,
 vm_map_offset_t VAR_18,
 vm_purgable_t VAR_19,
 int *VAR_20)
{
 vm_map_entry_t VAR_21;
 vm_object_t VAR_22;
 kern_return_t VAR_23;
 boolean_t VAR_24;





 if (VAR_17 == VAR_4)
  return(VAR_1);

 if (VAR_19 != VAR_12 &&
     VAR_19 != VAR_9 &&
     VAR_19 != VAR_11 &&
     VAR_19 != VAR_13)
  return(VAR_1);

 if (VAR_19 == VAR_11) {
  FUNC_9();
  return VAR_3;
 }

 if ((VAR_19 == VAR_12 ||
      VAR_19 == VAR_13) &&
     (((*VAR_20 & ~(VAR_7)) != 0) ||
      ((*VAR_20 & VAR_14) > VAR_14)))
  return(VAR_1);

 FUNC_3(VAR_17);

 if (!FUNC_4(VAR_17, VAR_18, &VAR_21) || VAR_21->is_sub_map) {




  FUNC_5(VAR_17);
  return(VAR_0);
 }

 if ((VAR_21->protection & VAR_6) == 0) {



  FUNC_5(VAR_17);
  return(VAR_2);
 }

 VAR_22 = FUNC_0(VAR_21);
 if (VAR_22 == VAR_5 ||
     VAR_22->purgable == VAR_8) {



  FUNC_5(VAR_17);
  return VAR_1;
 }

 FUNC_6(VAR_22);
 FUNC_2(!VAR_21->is_sub_map);
 FUNC_2(!VAR_21->use_pmap);

 FUNC_5(VAR_17);

 VAR_24 = (VAR_22->purgable == VAR_10);

 VAR_23 = FUNC_7(VAR_22, VAR_19, VAR_20);

 if (VAR_24 &&
     VAR_22->purgable != VAR_10 &&
     VAR_17->pmap == VAR_15) {



 }

 FUNC_8(VAR_22);

 return VAR_23;
}
