
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int fpu_fcw; int fpu_mxcsr; } ;
typedef TYPE_5__ x86_float_state64_t ;
struct TYPE_16__ {int fpu_ymmh0; } ;
typedef TYPE_6__ x86_avx_state64_t ;
struct TYPE_17__ {int fpu_ymmh0; int fpu_zmmh0; int fpu_zmm16; int fpu_k0; } ;
typedef TYPE_7__ x86_avx512_state64_t ;
struct TYPE_18__ {int fpu_ymmh0; int fpu_zmmh0; int fpu_k0; } ;
typedef TYPE_8__ x86_avx512_state32_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef scalar_t__ thread_flavor_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; int fp_save_layout; } ;
struct TYPE_12__ {int xstate_bv; int xcomp_bv; int * xhrsvd; } ;
struct TYPE_11__ {void* fp_save_layout; } ;
struct x86_avx_thread_state {TYPE_2__ _xh; int x_YMM_Hi128; TYPE_1__ fp; } ;
struct TYPE_14__ {int xcomp_bv; int xstate_bv; int * xhrsvd; } ;
struct TYPE_13__ {void* fp_save_layout; } ;
struct x86_avx512_thread_state {int x_YMM_Hi128; int x_ZMM_Hi256; int x_Hi16_ZMM; int x_Opmask; TYPE_4__ _xh; TYPE_3__ fp; } ;
typedef TYPE_9__* pcb_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
typedef int _STRUCT_ZMM_REG ;
typedef int _STRUCT_YMM_REG ;
typedef int _STRUCT_XMM_REG ;
typedef int _STRUCT_OPMASK_REG ;
struct TYPE_19__ {int xstate; int lock; struct x86_fx_thread_state* ifps; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_avx512_thread_state*) ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_9__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 () ;
 struct x86_fx_thread_state* FUNC_7 (int) ;
 int FUNC_8 (struct x86_fx_thread_state*,int) ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;





kern_return_t
FUNC_17(
 thread_t VAR_16,
 thread_state_t VAR_17,
 thread_flavor_t VAR_18)
{
 struct x86_fx_thread_state *VAR_19;
 struct x86_fx_thread_state *VAR_20;
 x86_float_state64_t *VAR_21;
 pcb_t VAR_22;
 boolean_t VAR_23, VAR_24 = VAR_2;

 if (VAR_14 == 132)
  return VAR_5;

 if ((VAR_18 == 129 || VAR_18 == 128) &&
     VAR_14 < 135)
  return VAR_5;


 if ((VAR_18 == 131 || VAR_18 == 130) &&
     FUNC_16(VAR_16) == 135)
  if (!FUNC_9(VAR_16))
   return VAR_5;


 VAR_21 = (x86_float_state64_t *)VAR_17;

 FUNC_2(VAR_16 != VAR_7);
 VAR_22 = FUNC_1(VAR_16);

 if (VAR_21 == ((void*)0)) {




  FUNC_13(&VAR_22->lock);

  VAR_19 = VAR_22->ifps;
  VAR_22->ifps = 0;

  FUNC_14(&VAR_22->lock);

  if (VAR_19 != 0) {
   FUNC_8(VAR_19, FUNC_16(VAR_16));
  }
 } else {



  VAR_20 = 0;
  Retry:
  FUNC_13(&VAR_22->lock);

  VAR_19 = VAR_22->ifps;
  if (VAR_19 == 0) {
   if (VAR_20 == 0) {
    FUNC_14(&VAR_22->lock);
    VAR_20 = FUNC_7(FUNC_16(VAR_16));
    goto Retry;
   }
   VAR_19 = VAR_20;
   VAR_20 = 0;
   VAR_22->ifps = VAR_19;
   VAR_22->xstate = FUNC_16(VAR_16);
   VAR_24 = VAR_8;
  }





  VAR_23 = VAR_19->fp_valid;
  VAR_21->fpu_mxcsr &= VAR_15;

  FUNC_3((char *)&VAR_21->fpu_fcw, (char *)VAR_19, VAR_13[133]);

  switch (FUNC_16(VAR_16)) {
      case 132:
   FUNC_11("fpu_set_fxstate() UNDEFINED xstate");
   break;
      case 133:
   VAR_19->fp_save_layout = FUNC_15(VAR_16) ? VAR_4 : VAR_3;
   break;
      case 135: {
   struct x86_avx_thread_state *VAR_25 = (void *) VAR_19;
   x86_avx_state64_t *VAR_26 = (x86_avx_state64_t *) VAR_21;

   VAR_25->fp.fp_save_layout = FUNC_15(VAR_16) ? VAR_12 : VAR_11;


   FUNC_5(&VAR_25->_xh.xhrsvd[0], sizeof(VAR_25->_xh.xhrsvd));
   VAR_25->_xh.xstate_bv = VAR_1;
   VAR_25->_xh.xcomp_bv = 0;

   if (VAR_18 == 129) {
    FUNC_4(&VAR_26->fpu_ymmh0, VAR_25->x_YMM_Hi128, 8 * sizeof(_STRUCT_XMM_REG));
   } else if (VAR_18 == 128) {
    FUNC_4(&VAR_26->fpu_ymmh0, VAR_25->x_YMM_Hi128, 16 * sizeof(_STRUCT_XMM_REG));
   } else {
    VAR_25->_xh.xstate_bv = (VAR_9 | VAR_10);
   }
   break;
      }

      case 134: {
   struct x86_avx512_thread_state *VAR_27 = (void *) VAR_19;
   union {
    thread_state_t ts;
    x86_avx512_state32_t *s32;
    x86_avx512_state64_t *s64;
   } VAR_28 = { .ts = VAR_17 };

   VAR_27->fp.fp_save_layout = FUNC_15(VAR_16) ? VAR_12 : VAR_11;


   FUNC_5(&VAR_27->_xh.xhrsvd[0], sizeof(VAR_27->_xh.xhrsvd));
   VAR_27->_xh.xstate_bv = VAR_0;
   VAR_27->_xh.xcomp_bv = 0;

   switch (VAR_18) {
       case 131:
    FUNC_4(&VAR_28.s32->fpu_k0, VAR_27->x_Opmask, 8 * sizeof(_STRUCT_OPMASK_REG));
    FUNC_4(&VAR_28.s32->fpu_zmmh0, VAR_27->x_ZMM_Hi256, 8 * sizeof(_STRUCT_YMM_REG));
    FUNC_4(&VAR_28.s32->fpu_ymmh0, VAR_27->x_YMM_Hi128, 8 * sizeof(_STRUCT_XMM_REG));
    FUNC_0(VAR_27);
    break;
       case 129:
    FUNC_4(&VAR_28.s32->fpu_ymmh0, VAR_27->x_YMM_Hi128, 8 * sizeof(_STRUCT_XMM_REG));
    break;
       case 130:
    FUNC_4(&VAR_28.s64->fpu_k0, VAR_27->x_Opmask, 8 * sizeof(_STRUCT_OPMASK_REG));
    FUNC_4(&VAR_28.s64->fpu_zmm16, VAR_27->x_Hi16_ZMM, 16 * sizeof(_STRUCT_ZMM_REG));
    FUNC_4(&VAR_28.s64->fpu_zmmh0, VAR_27->x_ZMM_Hi256, 16 * sizeof(_STRUCT_YMM_REG));
    FUNC_4(&VAR_28.s64->fpu_ymmh0, VAR_27->x_YMM_Hi128, 16 * sizeof(_STRUCT_XMM_REG));
    FUNC_0(VAR_27);
    break;
       case 128:
    FUNC_4(&VAR_28.s64->fpu_ymmh0, VAR_27->x_YMM_Hi128, 16 * sizeof(_STRUCT_XMM_REG));
    break;
   }
   break;
      }

  }

  VAR_19->fp_valid = VAR_23;

  if (VAR_23 == VAR_2) {
   boolean_t VAR_29 = FUNC_10(VAR_2);
   VAR_19->fp_valid = VAR_8;

   if (VAR_16 == FUNC_6())
    FUNC_12();

   FUNC_10(VAR_29);
  }

  FUNC_14(&VAR_22->lock);

  if (VAR_20 != 0)
   FUNC_8(VAR_20, FUNC_16(VAR_16));
 }
 return VAR_6;
}
