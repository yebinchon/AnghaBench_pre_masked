
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t xstate_t ;
typedef TYPE_2__* thread_t ;
struct x86_fx_thread_state {int fx_MXCSR; scalar_t__ fp_valid; } ;
typedef TYPE_3__* pcb_t ;
typedef int boolean_t ;
struct TYPE_13__ {int lock; struct x86_fx_thread_state* ifps; } ;
struct TYPE_11__ {size_t xstate; struct x86_fx_thread_state* ifps; } ;
struct TYPE_12__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 struct x86_fx_thread_state* FUNC_7 (size_t) ;
 int FUNC_8 (struct x86_fx_thread_state*,size_t) ;
 int * VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (TYPE_2__*) ;

void
FUNC_14(
 thread_t VAR_3,
 thread_t VAR_4)
{
 struct x86_fx_thread_state *VAR_5 = ((void*)0);
 boolean_t VAR_6;
 pcb_t VAR_7;
 xstate_t VAR_8 = FUNC_13(VAR_3);

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->ifps == ((void*)0))
         return;

        if (VAR_4->machine.ifps)
         FUNC_10("fpu_dup_fxstate: child's ifps non-null");

 VAR_5 = FUNC_7(VAR_8);

 FUNC_11(&VAR_7->lock);

 if (VAR_7->ifps != ((void*)0)) {
  struct x86_fx_thread_state *VAR_9 = VAR_7->ifps;



  if (FUNC_5() == VAR_3) {
   VAR_6 = FUNC_9(VAR_0);
   FUNC_1(FUNC_5() == VAR_3);
   FUNC_4();
   FUNC_6(VAR_3);
   FUNC_3();

   (void)FUNC_9(VAR_6);
  }

  if (VAR_9->fp_valid) {
   VAR_4->machine.ifps = VAR_5;
   VAR_4->machine.xstate = VAR_8;
   FUNC_2((char *)(VAR_7->ifps),
         (char *)(VAR_4->machine.ifps),
         VAR_1[VAR_8]);
   VAR_5->fx_MXCSR &= VAR_2;
   VAR_5 = ((void*)0);
  }
 }
 FUNC_12(&VAR_7->lock);

 if (VAR_5 != ((void*)0))
         FUNC_8(VAR_5, VAR_8);
}
