
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* thread_t ;
typedef int* thread_state_t ;
typedef int thread_flavor_t ;
struct arm_vfpsaved_state {int * r; int fpscr; } ;
struct arm_vfp_state {int * r; int fpscr; } ;
struct arm_thread_state {int sp; int * r; int pc; int cpsr; int lr; } ;
struct arm_saved_state {int far; int fsr; int exception; int * r; int cpsr; int pc; int lr; int sp; } ;
struct arm_exception_state {int far; int fsr; int exception; } ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_8__ {int count; int flavor; } ;
struct TYPE_11__ {TYPE_1__ ash; struct arm_thread_state ts_32; } ;
typedef TYPE_4__ arm_unified_thread_state_t ;
typedef int arm_debug_state_t ;
struct TYPE_9__ {struct arm_saved_state PcbData; } ;
struct TYPE_10__ {TYPE_2__ machine; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_3__*) ;
 struct arm_vfpsaved_state* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,int ,int ,int ) ;

kern_return_t
FUNC_5(
    thread_t VAR_10,
    thread_flavor_t VAR_11,
    thread_state_t VAR_12,
    mach_msg_type_number_t * VAR_13)
{




 switch (VAR_11) {
 case 128:
  if (*VAR_13 < 4)
   return (VAR_8);

  VAR_12[0] = 130;
  VAR_12[1] = 129;
  VAR_12[2] = 131;
  VAR_12[3] = 132;
  *VAR_13 = 4;
  break;

 case 130:{
   struct arm_thread_state *VAR_14;
   struct arm_saved_state *VAR_15;
   arm_unified_thread_state_t *VAR_16;

   unsigned int VAR_17;
   if (*VAR_13 < VAR_4)
    return (VAR_8);

   if (*VAR_13 == VAR_5) {
    VAR_16 = (arm_unified_thread_state_t *) VAR_12;
    VAR_14 = &VAR_16->ts_32;
    VAR_16->ash.flavor = VAR_2;
    VAR_16->ash.count = VAR_3;
   } else {
    VAR_14 = (struct arm_thread_state *) VAR_12;
   }
   VAR_15 = &VAR_10->machine.PcbData;

   VAR_14->sp = VAR_15->sp;
   VAR_14->lr = VAR_15->lr;
   VAR_14->pc = VAR_15->pc;
   VAR_14->cpsr = VAR_15->cpsr;
   for (VAR_17 = 0; VAR_17 < 13; VAR_17++)
    VAR_14->r[VAR_17] = VAR_15->r[VAR_17];

                                        ;

   if (*VAR_13 != VAR_5) {
    *VAR_13 = VAR_4;
   }
   break;
  }
 case 131:{
   struct arm_exception_state *VAR_18;
   struct arm_saved_state *VAR_19;

   if (*VAR_13 < VAR_1)
    return (VAR_8);

   VAR_18 = (struct arm_exception_state *) VAR_12;
   VAR_19 = &VAR_10->machine.PcbData;

   VAR_18->exception = VAR_19->exception;
   VAR_18->fsr = VAR_19->fsr;
   VAR_18->far = VAR_19->far;

   *VAR_13 = VAR_1;
   break;
  }
 case 129:{
   break;
  }
 case 132:{
   arm_debug_state_t *VAR_20;
   arm_debug_state_t *VAR_21;

                        if (*VAR_13 < VAR_0)
    return (VAR_8);

                        VAR_20 = (arm_debug_state_t *) VAR_12;
                        VAR_21 = FUNC_2(VAR_10);

                        if (VAR_21 == ((void*)0))
    FUNC_1(VAR_20, sizeof(arm_debug_state_t));
                        else
    FUNC_0(VAR_21, VAR_20, sizeof(arm_debug_state_t));

                        *VAR_13 = VAR_0;
                        break;
  }

 default:
  return (VAR_8);
 }
 return (VAR_9);
}
