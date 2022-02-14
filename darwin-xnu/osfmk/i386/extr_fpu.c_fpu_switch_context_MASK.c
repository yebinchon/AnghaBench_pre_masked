
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t xstate_t ;
typedef TYPE_2__* thread_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; } ;
struct TYPE_13__ {size_t cpu_xstate; } ;
typedef TYPE_3__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_11__ {int iss; struct x86_fx_thread_state* ifps; } ;
struct TYPE_12__ {TYPE_1__ machine; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,scalar_t__,size_t,scalar_t__) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int FUNC_5 (struct x86_fx_thread_state*,int) ;
 int FUNC_6 (struct x86_fx_thread_state*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 size_t FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct x86_fx_thread_state*,scalar_t__) ;
 int FUNC_15 (int ,scalar_t__) ;
 int * VAR_11 ;
 scalar_t__* VAR_12 ;

void
FUNC_16(thread_t VAR_13, thread_t VAR_14)
{
 struct x86_fx_thread_state *VAR_15;
 cpu_data_t *VAR_16 = FUNC_4();
 xstate_t VAR_17 = VAR_14 ? FUNC_12(VAR_14) : VAR_10;

 FUNC_1(FUNC_8() == VAR_2);
 VAR_15 = (VAR_13)->machine.ifps;





 if (VAR_15 != 0 && (VAR_15->fp_valid == VAR_2)) {





  FUNC_3();

  boolean_t VAR_18 = (FUNC_11(VAR_13) &&
      FUNC_7(VAR_13->machine.iss));

  FUNC_5(VAR_15, VAR_18);
  VAR_15->fp_valid = VAR_3;

  if (VAR_9 && (VAR_16->cpu_xstate == VAR_1)) {
   FUNC_14((struct x86_fx_thread_state *)&VAR_5, VAR_12[VAR_1]);
  } else if (VAR_8) {
   FUNC_14((struct x86_fx_thread_state *) &VAR_6, VAR_12[VAR_0]);
  } else {
   FUNC_6((struct x86_fx_thread_state *)&VAR_7);
  }
 }

 FUNC_2(VAR_8 ? (FUNC_13(VAR_4) == VAR_12[VAR_16->cpu_xstate]) : VAR_3, "XCR0 mismatch: 0x%llx 0x%x 0x%x", FUNC_13(VAR_4), VAR_16->cpu_xstate, VAR_12[VAR_16->cpu_xstate]);
 if (VAR_17 != VAR_16->cpu_xstate) {
  FUNC_0("fpu_switch_context(%p,%p) new xstate: %s\n",
   VAR_13, VAR_14, VAR_11[VAR_17]);
  FUNC_15(0, VAR_12[VAR_17]);
  VAR_16->cpu_xstate = VAR_17;
 }
 FUNC_10();
}
