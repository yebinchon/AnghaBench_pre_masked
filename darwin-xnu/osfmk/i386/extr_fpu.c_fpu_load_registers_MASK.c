
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_fx_thread_state {int fp_save_layout; } ;
struct TYPE_2__ {int xstate_bv; scalar_t__* xhrsvd; } ;
struct x86_avx_thread_state {TYPE_1__ _xh; } ;
typedef int fp_save_layout_t ;


 int FUNC_0 (struct x86_fx_thread_state*,int) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 size_t FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct x86_fx_thread_state*) ;
 int FUNC_6 (struct x86_fx_thread_state*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct x86_fx_thread_state*,int) ;
 int FUNC_11 (struct x86_fx_thread_state*,int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_12(void *VAR_3) {
 struct x86_fx_thread_state *VAR_4 = VAR_3;
 fp_save_layout_t VAR_5 = VAR_4->fp_save_layout;

 FUNC_1(FUNC_2() == ((void*)0) || (FUNC_9(FUNC_3()) ? (VAR_5 == 130 || VAR_5 == 128) : (VAR_5 == 131 || VAR_5 == 129)));



 FUNC_1(FUNC_0(VAR_4, 64));
 FUNC_1(FUNC_7() == VAR_0);
 switch (VAR_5) {
     case 130:
  FUNC_6(VAR_4);
  break;
     case 131:
  FUNC_5(VAR_4);
  break;
     case 128:
  FUNC_11(VAR_4, VAR_2[FUNC_4()]);
  break;
     case 129:
  FUNC_10(VAR_4, VAR_2[FUNC_4()]);
  break;
     default:
  FUNC_8("fpu_load_registers() bad layout: %d\n", VAR_5);
 }
}
