
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct x86_fx_thread_state {int fp_save_layout; scalar_t__ fp_valid; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {struct x86_fx_thread_state* ifps; } ;
struct TYPE_6__ {TYPE_1__ machine; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

void
FUNC_3(thread_t VAR_5, boolean_t VAR_6)
{
 struct x86_fx_thread_state *VAR_7 = VAR_5->machine.ifps;
 FUNC_0();

 if (VAR_7 && VAR_7->fp_valid) {
  if (FUNC_2(VAR_5) == VAR_0) {
   VAR_7->fp_save_layout = VAR_6 ? VAR_2 : VAR_1;
  } else {
   VAR_7->fp_save_layout = VAR_6 ? VAR_4 : VAR_3;
  }
 }
 FUNC_1();
}
