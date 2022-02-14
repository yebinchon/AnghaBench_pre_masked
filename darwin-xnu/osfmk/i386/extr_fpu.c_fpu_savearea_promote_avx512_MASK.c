
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_5__ {int fp_valid; } ;
struct x86_avx_thread_state {TYPE_1__ fp; } ;
struct x86_avx512_thread_state {TYPE_1__ fp; } ;
typedef TYPE_2__* pcb_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {size_t cpu_xstate; } ;
struct TYPE_6__ {size_t xstate; int lock; struct x86_avx_thread_state* ifps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct x86_avx_thread_state*,struct x86_avx_thread_state*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__* FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 struct x86_avx_thread_state* FUNC_9 (size_t) ;
 int FUNC_10 (struct x86_avx_thread_state*,size_t) ;
 int * VAR_5 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(thread_t VAR_6)
{
 struct x86_avx_thread_state *VAR_7 = ((void*)0);
 struct x86_avx512_thread_state *VAR_8 = ((void*)0);
 pcb_t VAR_9 = FUNC_1(VAR_6);
 boolean_t VAR_10 = VAR_3;

 FUNC_0("fpu_upgrade_savearea(%p)\n", VAR_6);

 FUNC_13(&VAR_9->lock);

 VAR_7 = VAR_9->ifps;
 if (VAR_7 == ((void*)0)) {
  VAR_9->xstate = VAR_1;
  FUNC_14(&VAR_9->lock);
  if (VAR_6 != FUNC_7()) {


   return;
  }
  FUNC_11();
  return;
 }

 if (VAR_9->xstate != VAR_1) {
  VAR_10 = VAR_4;
 }
 FUNC_14(&VAR_9->lock);

 if (VAR_10 == VAR_4) {
  VAR_8 = FUNC_9(VAR_1);
 }

 FUNC_13(&VAR_9->lock);
 if (VAR_6 == FUNC_7()) {
  boolean_t VAR_11;

  VAR_11 = FUNC_12(VAR_3);

  FUNC_5();
  FUNC_8(VAR_6);
  FUNC_4();

  FUNC_15(0, VAR_2);
  FUNC_6()->cpu_xstate = VAR_1;
  (void)FUNC_12(VAR_11);
 }
 FUNC_2(VAR_7->fp.fp_valid);


 if (VAR_9->xstate != VAR_1) {
  FUNC_3(VAR_7, VAR_8, VAR_5[VAR_0]);
  VAR_9->ifps = VAR_8;
  VAR_9->xstate = VAR_1;
  VAR_8 = ((void*)0);
 } else {
  VAR_7 = ((void*)0);
 }



 FUNC_14(&VAR_9->lock);

 if (VAR_7) {
  FUNC_10(VAR_7, VAR_0);
 }
 if (VAR_8) {
  FUNC_10(VAR_7, VAR_1);
 }
}
