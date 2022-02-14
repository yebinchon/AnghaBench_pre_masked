
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* old_memory_object_behave_info_t ;
typedef TYPE_3__* old_memory_object_attr_info_t ;
typedef TYPE_4__* memory_object_perf_info_t ;
typedef int memory_object_info_t ;
typedef int memory_object_flavor_t ;
typedef scalar_t__ memory_object_copy_strategy_t ;
typedef int memory_object_control_t ;
typedef TYPE_5__* memory_object_behave_info_t ;
typedef TYPE_6__* memory_object_attr_info_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_17__ {scalar_t__ copy_strategy; int may_cache_object; } ;
struct TYPE_16__ {scalar_t__ copy_strategy; int invalidate; } ;
struct TYPE_15__ {int may_cache; } ;
struct TYPE_14__ {scalar_t__ copy_strategy; int may_cache; } ;
struct TYPE_13__ {scalar_t__ copy_strategy; int invalidate; } ;
struct TYPE_12__ {scalar_t__ copy_strategy; int invalidate; int can_persist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 TYPE_1__* VAR_9 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 memory_object_control_t VAR_10,
 memory_object_flavor_t VAR_11,
 memory_object_info_t VAR_12,
 mach_msg_type_number_t VAR_13)
{
 vm_object_t VAR_14;
 kern_return_t VAR_15 = VAR_1;
 boolean_t VAR_16;
 boolean_t VAR_17;
 memory_object_copy_strategy_t VAR_18;

 VAR_14 = FUNC_0(VAR_10);
 if (VAR_14 == VAR_9)
  return (VAR_0);

 FUNC_1(VAR_14);

 VAR_16 = VAR_14->can_persist;
 VAR_18 = VAR_14->copy_strategy;



 FUNC_3(VAR_14);

 switch (VAR_11) {
     case 128:
     {
                old_memory_object_behave_info_t VAR_19;

                if (VAR_13 != VAR_8) {
                        VAR_15 = VAR_0;
                        break;
                }

                VAR_19 = (old_memory_object_behave_info_t) VAR_12;

  VAR_17 = VAR_19->invalidate;
  VAR_18 = VAR_19->copy_strategy;

  break;
     }

     case 131:
     {
                memory_object_behave_info_t VAR_20;

                if (VAR_13 != VAR_3) {
                        VAR_15 = VAR_0;
                        break;
                }

                VAR_20 = (memory_object_behave_info_t) VAR_12;

  VAR_17 = VAR_20->invalidate;
  VAR_18 = VAR_20->copy_strategy;
  break;
     }

     case 130:
     {
  memory_object_perf_info_t VAR_21;

                if (VAR_13 != VAR_6) {
                        VAR_15 = VAR_0;
                        break;
                }

                VAR_21 = (memory_object_perf_info_t) VAR_12;

  VAR_16 = VAR_21->may_cache;

  break;
     }

     case 129:
     {
  old_memory_object_attr_info_t VAR_22;

                if (VAR_13 != VAR_7) {
                        VAR_15 = VAR_0;
                        break;
                }

  VAR_22 = (old_memory_object_attr_info_t) VAR_12;

                VAR_16 = VAR_22->may_cache;
                VAR_18 = VAR_22->copy_strategy;

  break;
     }

     case 132:
     {
  memory_object_attr_info_t VAR_23;

                if (VAR_13 != VAR_2) {
                        VAR_15 = VAR_0;
                        break;
                }

  VAR_23 = (memory_object_attr_info_t) VAR_12;

  VAR_18 = VAR_23->copy_strategy;
                VAR_16 = VAR_23->may_cache_object;

  break;
     }

     default:
  VAR_15 = VAR_0;
  break;
 }

 if (VAR_15 != VAR_1)
  return(VAR_15);

 if (VAR_18 == VAR_5) {
  VAR_18 = VAR_4;
 }





 return (FUNC_2(VAR_14,
           VAR_16,
           VAR_18));
}
