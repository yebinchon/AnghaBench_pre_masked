
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_rand_state {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct timer_rand_state*,int) ;
 struct timer_rand_state* FUNC_2 (int) ;

void FUNC_3(int VAR_0)
{
 struct timer_rand_state *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0("irq event %d\n", VAR_0);
 FUNC_1(VAR_1, 0x100 + VAR_0);
}
