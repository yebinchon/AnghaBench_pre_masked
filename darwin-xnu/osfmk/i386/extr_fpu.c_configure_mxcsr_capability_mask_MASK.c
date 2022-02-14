
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int fx_MXCSR_MASK; int fp_valid; int fp_save_layout; TYPE_4__** fx_XMM_reg; } ;
struct TYPE_11__ {TYPE_4__* x_Opmask; TYPE_4__* x_Hi16_ZMM; TYPE_4__* x_ZMM_Hi256; } ;
struct TYPE_10__ {TYPE_4__* x_YMM_Hi128; } ;
struct TYPE_13__ {TYPE_3__ fx; TYPE_2__ avx512; TYPE_1__ avx; } ;
typedef TYPE_4__ x86_ext_thread_state_t ;
struct x86_fx_thread_state {int dummy; } ;


 int FUNC_0 (TYPE_4__*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct x86_fx_thread_state*) ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 (struct x86_fx_thread_state*,int ) ;
 int * VAR_13 ;

__attribute__((used)) static void
FUNC_9(x86_ext_thread_state_t *VAR_14)
{

 FUNC_1(FUNC_0(VAR_14, 64));

 FUNC_2(VAR_14, sizeof(*VAR_14));

 FUNC_3();
 FUNC_5(VAR_14, VAR_2);

 VAR_12 = VAR_14->fx.fx_MXCSR_MASK;


 if (VAR_12 == 0)
  VAR_12 = 0xffbf;


 FUNC_2(&VAR_14->fx.fx_XMM_reg[0][0], sizeof(VAR_14->fx.fx_XMM_reg));
 FUNC_2(VAR_14->avx.x_YMM_Hi128, sizeof(VAR_14->avx.x_YMM_Hi128));

 if (VAR_11) {
  FUNC_2(VAR_14->avx512.x_ZMM_Hi256, sizeof(VAR_14->avx512.x_ZMM_Hi256));
  FUNC_2(VAR_14->avx512.x_Hi16_ZMM, sizeof(VAR_14->avx512.x_Hi16_ZMM));
  FUNC_2(VAR_14->avx512.x_Opmask, sizeof(VAR_14->avx512.x_Opmask));
 }


 VAR_14->fx.fp_valid = VAR_5;
 VAR_14->fx.fp_save_layout = VAR_10 ? VAR_6: VAR_4;
 FUNC_4(VAR_14);

 if (VAR_11) {
  FUNC_8((struct x86_fx_thread_state *)&VAR_7, VAR_13[VAR_1]);
 }
 if (VAR_10) {
  FUNC_8((struct x86_fx_thread_state *)&VAR_8, VAR_13[VAR_0]);
 } else {
  FUNC_6((struct x86_fx_thread_state *)&VAR_9);
 }


 VAR_14->fx.fp_valid = 0xFFFFFFFF;
 VAR_14->fx.fp_save_layout = VAR_3;


 FUNC_7();
}
