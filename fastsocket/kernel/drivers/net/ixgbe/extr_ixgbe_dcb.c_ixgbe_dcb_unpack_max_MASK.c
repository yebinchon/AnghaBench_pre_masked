
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tc_configuration {int desc_credits_max; } ;
struct ixgbe_dcb_config {struct tc_configuration* tc_config; } ;


 int VAR_0 ;

void FUNC_0(struct ixgbe_dcb_config *VAR_1, u16 *VAR_2)
{
 struct tc_configuration *VAR_3 = &VAR_1->tc_config[0];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2[VAR_4] = VAR_3[VAR_4].desc_credits_max;
}
