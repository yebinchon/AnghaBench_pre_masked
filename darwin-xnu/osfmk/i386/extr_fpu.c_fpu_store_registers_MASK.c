
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xstate_t ;
struct x86_fx_thread_state {int fp_save_layout; } ;
typedef int boolean_t ;


 int FUNC_0 (struct x86_fx_thread_state*,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct x86_fx_thread_state*,int ) ;
 int FUNC_7 (struct x86_fx_thread_state*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_8(void *VAR_5, boolean_t VAR_6) {
 struct x86_fx_thread_state *VAR_7 = VAR_5;
 FUNC_1(FUNC_0(VAR_7, 64));
 xstate_t VAR_8 = FUNC_2();
 switch (VAR_8) {
     case 128:
  if (VAR_6) {
   FUNC_4(VAR_5);
   VAR_7->fp_save_layout = VAR_1;
  } else {
   FUNC_3(VAR_5);
   VAR_7->fp_save_layout = VAR_0;
  }
  break;
     case 130:

     case 129:

  if (VAR_6) {
   FUNC_7(VAR_7, VAR_4[VAR_8]);
   VAR_7->fp_save_layout = VAR_3;
  } else {
   FUNC_6(VAR_7, VAR_4[VAR_8]);
   VAR_7->fp_save_layout = VAR_2;
  }
  break;
     default:
  FUNC_5("fpu_store_registers() bad xstate: %d\n", VAR_8);
 }
}
