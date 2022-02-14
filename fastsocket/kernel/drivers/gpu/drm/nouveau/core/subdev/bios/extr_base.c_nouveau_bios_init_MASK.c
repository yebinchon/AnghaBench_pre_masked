
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_bios {int base; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0)
{
 struct nouveau_bios *VAR_1 = (void *)VAR_0;
 return FUNC_0(&VAR_1->base);
}
