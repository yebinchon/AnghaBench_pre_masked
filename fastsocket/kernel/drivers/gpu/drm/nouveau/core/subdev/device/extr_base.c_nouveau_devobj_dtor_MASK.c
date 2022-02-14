
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_devobj {int base; int * subdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_1)
{
 struct nouveau_devobj *VAR_2 = (void *)VAR_1;
 int VAR_3;

 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_0(((void*)0), &VAR_2->subdev[VAR_3]);

 FUNC_1(&VAR_2->base);
}
