
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dlm_space* default_groups; } ;
struct dlm_space {TYPE_1__ group; } ;
struct config_item {int dummy; } ;


 struct dlm_space* FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct dlm_space*) ;

__attribute__((used)) static void FUNC_2(struct config_item *VAR_0)
{
 struct dlm_space *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->group.default_groups);
 FUNC_1(VAR_1);
}
