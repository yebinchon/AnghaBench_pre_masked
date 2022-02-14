
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; int fp_save_layout; } ;
typedef TYPE_1__* pcb_t ;
struct TYPE_3__ {struct x86_fx_thread_state* ifps; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct x86_fx_thread_state*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct x86_fx_thread_state*) ;
 int FUNC_4 (char*,scalar_t__,int ) ;

void
FUNC_5(
 thread_t VAR_2)
{
 pcb_t VAR_3 = FUNC_0(VAR_2);
 struct x86_fx_thread_state *VAR_4 = VAR_3->ifps;

 FUNC_1(VAR_4);







 if (VAR_4->fp_valid == VAR_0) {
  FUNC_2();
 } else {
  FUNC_3(VAR_4);
 }
 VAR_4->fp_valid = VAR_0;
}
