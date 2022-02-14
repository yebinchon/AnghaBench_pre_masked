
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
typedef int* thread_state_t ;
typedef int thread_flavor_t ;
struct arm_vfp_state {int dummy; } ;
struct arm_saved_state64 {int esr; int far; int exception; } ;
struct arm_saved_state32 {int far; int esr; int exception; } ;
struct arm_exception_state64 {int esr; int far; int exception; } ;
struct arm_exception_state {int far; int fsr; int exception; } ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef struct arm_vfp_state arm_neon_state_t ;
typedef struct arm_vfp_state arm_neon_state64_t ;
typedef struct arm_vfp_state arm_neon_saved_state64_t ;
typedef struct arm_vfp_state arm_neon_saved_state32_t ;
typedef struct arm_vfp_state arm_legacy_debug_state_t ;
typedef struct arm_vfp_state arm_debug_state64_t ;
typedef struct arm_vfp_state arm_debug_state32_t ;
struct TYPE_7__ {int uNeon; int upcb; } ;
struct TYPE_8__ {TYPE_1__ machine; } ;




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
 int VAR_10 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct arm_vfp_state*,struct arm_vfp_state*,int) ;
 int FUNC_2 (struct arm_vfp_state*,int) ;
 struct arm_vfp_state* FUNC_3 (TYPE_2__*) ;
 struct arm_vfp_state* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (int*,int*,int ) ;
 int FUNC_7 (int*,int*,int ) ;
 struct arm_vfp_state* FUNC_8 (int ) ;
 struct arm_vfp_state* FUNC_9 (int ) ;
 struct arm_saved_state32* FUNC_10 (int ) ;
 struct arm_saved_state64* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;

kern_return_t
FUNC_13(
    thread_t VAR_11,
    thread_flavor_t VAR_12,
    thread_state_t VAR_13,
    mach_msg_type_number_t * VAR_14)
{
 switch (VAR_12) {
 case 129:
  if (*VAR_14 < 4)
   return (VAR_9);

  VAR_13[0] = 133;
  VAR_13[1] = 130;
  VAR_13[2] = 137;
  VAR_13[3] = 140;
  *VAR_14 = 4;
  break;

 case 128:
  if (*VAR_14 < 4)
   return (VAR_9);

  VAR_13[0] = 133;
  VAR_13[1] = 130;
  VAR_13[2] = FUNC_12(VAR_11) ? 136 : 137;
  VAR_13[3] = FUNC_12(VAR_11) ? 138 : 139;
  *VAR_14 = 4;
  break;

 case 133:
 {
  kern_return_t VAR_15 = FUNC_7(VAR_13, VAR_14, VAR_11->machine.upcb);
  if (VAR_15) return VAR_15;
  break;
 }
 case 132:
 {
  if (FUNC_12(VAR_11))
   return VAR_9;

  kern_return_t VAR_16 = FUNC_5(VAR_13, VAR_14, VAR_11->machine.upcb);
  if (VAR_16) return VAR_16;
  break;
 }
 case 137:{
   struct arm_exception_state *VAR_17;
   struct arm_saved_state32 *VAR_18;

   if (*VAR_14 < VAR_3)
    return (VAR_9);
   if (FUNC_12(VAR_11))
    return (VAR_9);

   VAR_17 = (struct arm_exception_state *) VAR_13;
   VAR_18 = FUNC_10(VAR_11->machine.upcb);

   VAR_17->exception = VAR_18->exception;
   VAR_17->fsr = VAR_18->esr;
   VAR_17->far = VAR_18->far;

   *VAR_14 = VAR_3;
   break;
  }
 case 136:{
   struct arm_exception_state64 *VAR_19;
   struct arm_saved_state64 *VAR_20;

   if (*VAR_14 < VAR_2)
    return (VAR_9);
   if (!FUNC_12(VAR_11))
    return (VAR_9);

   VAR_19 = (struct arm_exception_state64 *) VAR_13;
   VAR_20 = FUNC_11(VAR_11->machine.upcb);

   VAR_19->exception = VAR_20->exception;
   VAR_19->far = VAR_20->far;
   VAR_19->esr = VAR_20->esr;

   *VAR_14 = VAR_2;
   break;
  }
 case 140:{
   arm_legacy_debug_state_t *VAR_21;
   arm_debug_state32_t *VAR_22;

   if (*VAR_14 < VAR_4)
    return (VAR_9);

   if (FUNC_12(VAR_11))
    return (VAR_9);

   VAR_21 = (arm_legacy_debug_state_t *) VAR_13;
   VAR_22 = FUNC_3(VAR_11);

   if (VAR_22 == ((void*)0))
    FUNC_2(VAR_21, sizeof(arm_legacy_debug_state_t));
   else
    FUNC_1(VAR_22, VAR_21, sizeof(arm_legacy_debug_state_t));

   *VAR_14 = VAR_4;
   break;
  }
 case 139:{
   arm_debug_state32_t *VAR_23;
   arm_debug_state32_t *VAR_24;

   if (*VAR_14 < VAR_0)
    return (VAR_9);

   if (FUNC_12(VAR_11))
    return (VAR_9);

   VAR_23 = (arm_debug_state32_t *) VAR_13;
   VAR_24 = FUNC_3(VAR_11);

   if (VAR_24 == ((void*)0))
    FUNC_2(VAR_23, sizeof(arm_debug_state32_t));
   else
    FUNC_1(VAR_24, VAR_23, sizeof(arm_debug_state32_t));

   *VAR_14 = VAR_0;
   break;
  }

 case 138:{
   arm_debug_state64_t *VAR_25;
   arm_debug_state64_t *VAR_26;

   if (*VAR_14 < VAR_1)
    return (VAR_9);

   if (!FUNC_12(VAR_11))
    return (VAR_9);

   VAR_25 = (arm_debug_state64_t *) VAR_13;
   VAR_26 = FUNC_4(VAR_11);

   if (VAR_26 == ((void*)0))
    FUNC_2(VAR_25, sizeof(arm_debug_state64_t));
   else
    FUNC_1(VAR_26, VAR_25, sizeof(arm_debug_state64_t));

   *VAR_14 = VAR_1;
   break;
  }

 case 130:{
   struct arm_vfp_state *VAR_27;
   arm_neon_saved_state32_t *VAR_28;
   unsigned int VAR_29;

   if (*VAR_14 < VAR_8) {
    if (*VAR_14 < VAR_7)
     return (VAR_9);
    else
     *VAR_14 = VAR_7;
   }

   if (*VAR_14 == VAR_7)
    VAR_29 = 32;
   else
    VAR_29 = 64;

   VAR_27 = (struct arm_vfp_state *) VAR_13;
   VAR_28 = FUNC_8(VAR_11->machine.uNeon);


   FUNC_1(VAR_28, VAR_27, (VAR_29 + 1)*sizeof(uint32_t));
   *VAR_14 = (VAR_29 + 1);
   break;
  }
 case 135:{
  arm_neon_state_t *VAR_30;
  arm_neon_saved_state32_t *VAR_31;

  if (*VAR_14 < VAR_6)
   return (VAR_9);

  if (FUNC_12(VAR_11))
   return (VAR_9);

  VAR_30 = (arm_neon_state_t *)VAR_13;
  VAR_31 = FUNC_8(VAR_11->machine.uNeon);

  FUNC_0(sizeof(*VAR_31) == sizeof(*VAR_30));
  FUNC_1(VAR_31, VAR_30, sizeof(arm_neon_state_t));

  *VAR_14 = VAR_6;
  break;

  }

 case 134:{
  arm_neon_state64_t *VAR_32;
  arm_neon_saved_state64_t *VAR_33;

  if (*VAR_14 < VAR_5)
   return (VAR_9);

  if (!FUNC_12(VAR_11))
   return (VAR_9);

  VAR_32 = (arm_neon_state64_t *)VAR_13;
  VAR_33 = FUNC_9(VAR_11->machine.uNeon);


  FUNC_0(sizeof(*VAR_32) == sizeof(*VAR_33));
  FUNC_1(VAR_33, VAR_32, sizeof(arm_neon_state64_t));

  *VAR_14 = VAR_5;
  break;

  }

 default:
  return (VAR_9);
 }
 return (VAR_10);
}
