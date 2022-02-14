
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
struct x86_fx_thread_state {int fx_MXCSR; } ;
typedef int boolean_t ;
struct TYPE_5__ {struct x86_fx_thread_state* ifps; } ;
struct TYPE_6__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int const,int const,int const) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,int const) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(void)
{
 thread_t VAR_16 = FUNC_1();
 struct x86_fx_thread_state *VAR_17 = VAR_16->machine.ifps;
 boolean_t VAR_18;

 VAR_18 = FUNC_6(VAR_2);

 if (FUNC_4())
  FUNC_7("SSE exception at interrupt context\n");
 if (FUNC_0() == VAR_15)
  FUNC_7("SSE exception in kernel thread context\n");




 FUNC_2(VAR_16);

 (void)FUNC_6(VAR_18);





 const uint32_t VAR_19 = (VAR_17->fx_MXCSR >> 7) &
  (VAR_4 | VAR_3 | VAR_8 | VAR_5 | VAR_7 | VAR_6);
 const uint32_t VAR_20 = ~VAR_19 & (VAR_17->fx_MXCSR &
  (VAR_10 | VAR_9 | VAR_14 | VAR_11 | VAR_13 | VAR_12));
 FUNC_3(VAR_1, VAR_17->fx_MXCSR, VAR_17->fx_MXCSR, VAR_20);

 FUNC_5(VAR_0,
         VAR_1,
         VAR_17->fx_MXCSR);

}
