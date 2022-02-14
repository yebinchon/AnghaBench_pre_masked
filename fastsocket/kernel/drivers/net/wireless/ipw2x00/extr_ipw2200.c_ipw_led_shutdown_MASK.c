
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int led_act_off; int led_link_off; int led_link_on; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;

__attribute__((used)) static void FUNC_4(struct ipw_priv *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->led_link_on);
 FUNC_0(&VAR_0->led_link_off);
 FUNC_0(&VAR_0->led_act_off);
}
