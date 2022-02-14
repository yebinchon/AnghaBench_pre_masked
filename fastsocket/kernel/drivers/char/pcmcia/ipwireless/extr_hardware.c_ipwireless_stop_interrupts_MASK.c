
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int shutting_down; int setup_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_hardware*) ;

void FUNC_2(struct ipw_hardware *VAR_0)
{
 if (!VAR_0->shutting_down) {

  VAR_0->shutting_down = 1;
  FUNC_0(&VAR_0->setup_timer);


  FUNC_1(VAR_0);
 }
}
