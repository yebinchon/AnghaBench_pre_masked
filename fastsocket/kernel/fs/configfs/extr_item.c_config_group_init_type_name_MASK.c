
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item_type {int dummy; } ;
struct TYPE_2__ {struct config_item_type* ci_type; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int FUNC_0 (struct config_group*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;

void FUNC_2(struct config_group *VAR_0, const char *VAR_1,
    struct config_item_type *VAR_2)
{
 FUNC_1(&VAR_0->cg_item, VAR_1);
 VAR_0->cg_item.ci_type = VAR_2;
 FUNC_0(VAR_0);
}
