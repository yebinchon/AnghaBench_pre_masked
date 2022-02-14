
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {struct config_item* ci_parent; } ;


 int FUNC_0 (struct config_item*) ;

__attribute__((used)) static int FUNC_1(struct config_item * VAR_0)
{
 struct config_item * VAR_1 = VAR_0;
 int VAR_2 = 0;
 do { VAR_2++; } while ((VAR_1 = VAR_1->ci_parent) && !FUNC_0(VAR_1));
 return VAR_2;
}
