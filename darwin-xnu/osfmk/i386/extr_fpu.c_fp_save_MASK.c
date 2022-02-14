
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; } ;
typedef TYPE_1__* pcb_t ;
struct TYPE_3__ {struct x86_fx_thread_state* ifps; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct x86_fx_thread_state*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void
FUNC_5(
 thread_t VAR_2)
{
 pcb_t VAR_3 = FUNC_0(VAR_2);
 struct x86_fx_thread_state *VAR_4 = VAR_3->ifps;

 FUNC_1(VAR_4 != 0);
 if (VAR_4 != 0 && !VAR_4->fp_valid) {
  FUNC_1((FUNC_3() & VAR_0) == 0);

  VAR_4->fp_valid = VAR_1;
  FUNC_2(VAR_4, FUNC_4(VAR_2));
 }
}
