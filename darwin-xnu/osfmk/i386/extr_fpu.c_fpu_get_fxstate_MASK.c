
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fpu_fcw; } ;
typedef TYPE_1__ x86_float_state64_t ;
struct TYPE_8__ {int fpu_ymmh0; } ;
typedef TYPE_2__ x86_avx_state64_t ;
struct TYPE_9__ {int fpu_ymmh0; int fpu_zmmh0; int fpu_zmm16; int fpu_k0; } ;
typedef TYPE_3__ x86_avx512_state64_t ;
struct TYPE_10__ {int fpu_ymmh0; int fpu_zmmh0; int fpu_k0; } ;
typedef TYPE_4__ x86_avx512_state32_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef scalar_t__ thread_flavor_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; } ;
struct x86_avx_thread_state {int x_YMM_Hi128; } ;
struct x86_avx512_thread_state {int x_YMM_Hi128; int x_ZMM_Hi256; int x_Hi16_ZMM; int x_Opmask; } ;
typedef TYPE_5__* pcb_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
typedef int _STRUCT_ZMM_REG ;
typedef int _STRUCT_YMM_REG ;
typedef int _STRUCT_XMM_REG ;
typedef int _STRUCT_OPMASK_REG ;
struct TYPE_11__ {int lock; struct x86_fx_thread_state* ifps; } ;




 int FUNC_0 (struct x86_avx512_thread_state*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_1 (scalar_t__) ;

 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;





kern_return_t
FUNC_14(
 thread_t VAR_7,
 thread_state_t VAR_8,
 thread_flavor_t VAR_9)
{
 struct x86_fx_thread_state *VAR_10;
 x86_float_state64_t *VAR_11;
 kern_return_t VAR_12 = VAR_1;
 pcb_t VAR_13;

 if (VAR_5 == 132)
  return VAR_1;

 if ((VAR_9 == 129 || VAR_9 == 128) &&
     VAR_5 < 135)
  return VAR_1;


 if ((VAR_9 == 131 || VAR_9 == 130) &&
     FUNC_13(VAR_7) != 134)
  return VAR_1;


 VAR_11 = (x86_float_state64_t *)VAR_8;

 FUNC_2(VAR_7 != VAR_3);
 VAR_13 = FUNC_1(VAR_7);

 FUNC_11(&VAR_13->lock);

 VAR_10 = VAR_13->ifps;
 if (VAR_10 == 0) {




  FUNC_3((char *)&VAR_6, (char *)&VAR_11->fpu_fcw,
      VAR_4[133]);

  FUNC_12(&VAR_13->lock);

  return VAR_2;
 }




 if (VAR_7 == FUNC_7()) {
  boolean_t VAR_14;

  VAR_14 = FUNC_9(VAR_0);

  FUNC_6();
  FUNC_8(VAR_7);
  FUNC_5();

  (void)FUNC_9(VAR_14);
 }
 if (VAR_10->fp_valid) {
         FUNC_3((char *)VAR_10, (char *)&VAR_11->fpu_fcw, VAR_4[133]);
  switch (FUNC_13(VAR_7)) {
      case 132:
   FUNC_10("fpu_get_fxstate() UNDEFINED xstate");
   break;
      case 133:
   break;
      case 135: {
   struct x86_avx_thread_state *VAR_15 = (void *) VAR_10;
   x86_avx_state64_t *VAR_16 = (x86_avx_state64_t *) VAR_11;
   if (VAR_9 == 129) {
    FUNC_4(VAR_15->x_YMM_Hi128, &VAR_16->fpu_ymmh0, 8 * sizeof(_STRUCT_XMM_REG));
   } else if (VAR_9 == 128) {
    FUNC_4(VAR_15->x_YMM_Hi128, &VAR_16->fpu_ymmh0, 16 * sizeof(_STRUCT_XMM_REG));
   }
   break;
      }

      case 134: {
   struct x86_avx512_thread_state *VAR_17 = (void *) VAR_10;
   union {
    thread_state_t ts;
    x86_avx512_state32_t *s32;
    x86_avx512_state64_t *s64;
   } VAR_18 = { .ts = VAR_8 };
   switch (VAR_9) {
       case 131:
    FUNC_4(VAR_17->x_Opmask, &VAR_18.s32->fpu_k0, 8 * sizeof(_STRUCT_OPMASK_REG));
    FUNC_4(VAR_17->x_ZMM_Hi256, &VAR_18.s32->fpu_zmmh0, 8 * sizeof(_STRUCT_YMM_REG));
    FUNC_4(VAR_17->x_YMM_Hi128, &VAR_18.s32->fpu_ymmh0, 8 * sizeof(_STRUCT_XMM_REG));
    FUNC_0(VAR_17);
    break;
       case 129:
    FUNC_4(VAR_17->x_YMM_Hi128, &VAR_18.s32->fpu_ymmh0, 8 * sizeof(_STRUCT_XMM_REG));
    break;
       case 130:
    FUNC_4(VAR_17->x_Opmask, &VAR_18.s64->fpu_k0, 8 * sizeof(_STRUCT_OPMASK_REG));
    FUNC_4(VAR_17->x_Hi16_ZMM, &VAR_18.s64->fpu_zmm16, 16 * sizeof(_STRUCT_ZMM_REG));
    FUNC_4(VAR_17->x_ZMM_Hi256, &VAR_18.s64->fpu_zmmh0, 16 * sizeof(_STRUCT_YMM_REG));
    FUNC_4(VAR_17->x_YMM_Hi128, &VAR_18.s64->fpu_ymmh0, 16 * sizeof(_STRUCT_XMM_REG));
    FUNC_0(VAR_17);
    break;
       case 128:
    FUNC_4(VAR_17->x_YMM_Hi128, &VAR_18.s64->fpu_ymmh0, 16 * sizeof(_STRUCT_XMM_REG));
    break;
   }
   break;
      }

  }

  VAR_12 = VAR_2;
 }
 FUNC_12(&VAR_13->lock);

 return VAR_12;
}
