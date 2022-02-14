
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_gpio {int base; int events; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nouveau_gpio *VAR_1 = (void *)VAR_0;
 FUNC_0(&VAR_1->events);
 FUNC_1(&VAR_1->base);
}
