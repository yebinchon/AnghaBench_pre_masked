
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_network {int shutting_down; int hardware; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ipw_network*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw_network*) ;

void FUNC_5(struct ipw_network *VAR_0)
{
 VAR_0->shutting_down = 1;

 FUNC_2(VAR_0);
 FUNC_0();

 FUNC_3(VAR_0->hardware);
 FUNC_1(VAR_0->hardware, ((void*)0));

 FUNC_4(VAR_0);
}
