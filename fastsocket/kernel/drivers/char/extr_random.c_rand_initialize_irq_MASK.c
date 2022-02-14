
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_rand_state {int dummy; } ;


 int VAR_0 ;
 struct timer_rand_state* FUNC_0 (int) ;
 struct timer_rand_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int,struct timer_rand_state*) ;

void FUNC_3(int VAR_1)
{
 struct timer_rand_state *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  return;





 VAR_2 = FUNC_1(sizeof(struct timer_rand_state), VAR_0);
 if (VAR_2)
  FUNC_2(VAR_1, VAR_2);
}
