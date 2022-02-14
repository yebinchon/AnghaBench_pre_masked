
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {struct x86_fx_thread_state* ifps; } ;
struct TYPE_5__ {TYPE_1__ machine; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3(boolean_t VAR_2) {
        thread_t VAR_3 = FUNC_1();
 struct x86_fx_thread_state *VAR_4 = VAR_3->machine.ifps;

 if (VAR_4) {
         VAR_4->fp_valid = VAR_2;

  if (VAR_2 == VAR_1) {
   boolean_t VAR_5 = FUNC_2(VAR_0);
          FUNC_0();
   FUNC_2(VAR_5);
  }
 }
}
