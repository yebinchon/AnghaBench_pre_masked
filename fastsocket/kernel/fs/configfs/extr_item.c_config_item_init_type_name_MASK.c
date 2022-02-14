
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item_type {int dummy; } ;
struct config_item {struct config_item_type* ci_type; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct config_item*,char const*) ;

void FUNC_2(struct config_item *VAR_0,
    const char *VAR_1,
    struct config_item_type *VAR_2)
{
 FUNC_1(VAR_0, VAR_1);
 VAR_0->ci_type = VAR_2;
 FUNC_0(VAR_0);
}
