
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int thread_t ;
struct x86_fx_thread_state {scalar_t__ fp_valid; int ** fx_XMM_reg; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {struct x86_fx_thread_state* ifps; } ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (uintptr_t,int) ;
 uintptr_t FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (uintptr_t) ;

uint32_t FUNC_7(thread_t VAR_3) {
 if (VAR_2 == 0)
  return 0;

 uint32_t VAR_4 = 0;
 boolean_t VAR_5 = FUNC_5(VAR_1);
 struct x86_fx_thread_state *VAR_6 = FUNC_0(VAR_3)->ifps;

 if (VAR_6) {
  if (VAR_6->fp_valid) {
   VAR_4 = FUNC_3((uintptr_t) &VAR_6->fx_XMM_reg[0][0],
       sizeof(VAR_6->fx_XMM_reg));
  } else {
   uintptr_t VAR_7 = FUNC_4();
   FUNC_1();
   FUNC_2(VAR_3);
   VAR_4 = FUNC_3((uintptr_t) &VAR_6->fx_XMM_reg[0][0],
       sizeof(VAR_6->fx_XMM_reg));
   VAR_6->fp_valid = VAR_1;
   if (VAR_7 & VAR_0) {
    FUNC_6(VAR_7);
   }
  }
 }
 FUNC_5(VAR_5);
 return VAR_4;
}
