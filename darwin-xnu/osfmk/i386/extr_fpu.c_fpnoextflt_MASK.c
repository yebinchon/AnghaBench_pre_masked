
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t xstate_t ;
typedef int thread_t ;
struct x86_fx_thread_state {int fp_valid; int fp_save_layout; } ;
typedef TYPE_1__* pcb_t ;
typedef int boolean_t ;
struct TYPE_3__ {size_t xstate; struct x86_fx_thread_state* ifps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct x86_fx_thread_state* FUNC_8 (size_t) ;
 int FUNC_9 (struct x86_fx_thread_state*,size_t) ;
 int * VAR_6 ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;

void
FUNC_14(void)
{
 boolean_t VAR_10;
 thread_t VAR_11;
 pcb_t VAR_12;
 struct x86_fx_thread_state *VAR_13 = 0;
 xstate_t VAR_14 = FUNC_5();

 VAR_11 = FUNC_4();
 VAR_12 = FUNC_0(VAR_11);

 if (VAR_12->ifps == 0 && !FUNC_11()) {
         VAR_13 = FUNC_8(VAR_14);
  FUNC_2((char *)&VAR_8, (char *)VAR_13,
      VAR_6[VAR_14]);
  if (!FUNC_13(VAR_11)) {
   VAR_13->fp_save_layout = VAR_7 ? VAR_4 : VAR_1;
  }
  else
   VAR_13->fp_save_layout = VAR_7 ? VAR_5 : VAR_2;
  VAR_13->fp_valid = VAR_3;
 }
 VAR_10 = FUNC_12(VAR_0);

 FUNC_3();

 if (FUNC_1(FUNC_11())) {



  VAR_9++;




  if (VAR_12->ifps) {
   FUNC_7(VAR_11);
  }
  FUNC_10();
 } else {
         if (VAR_12->ifps == 0) {
          VAR_12->ifps = VAR_13;
          VAR_12->xstate = VAR_14;
   VAR_13 = 0;
  }



  FUNC_6(VAR_11);
 }
 (void)FUNC_12(VAR_10);

 if (VAR_13)
         FUNC_9(VAR_13, VAR_14);
}
