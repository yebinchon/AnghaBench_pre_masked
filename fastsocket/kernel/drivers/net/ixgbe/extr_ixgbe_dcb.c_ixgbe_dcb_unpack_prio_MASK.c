
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc_configuration {TYPE_1__* path; } ;
struct ixgbe_dcb_config {struct tc_configuration* tc_config; } ;
struct TYPE_2__ {int prio_type; } ;


 int VAR_0 ;

void FUNC_0(struct ixgbe_dcb_config *VAR_1, int VAR_2,
       u8 *VAR_3)
{
 struct tc_configuration *VAR_4 = &VAR_1->tc_config[0];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = VAR_4[VAR_5].path[VAR_2].prio_type;
}
