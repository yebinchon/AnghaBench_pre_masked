
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_bar {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,int *,struct nouveau_mem*,int ,struct nouveau_object**) ;
 struct nouveau_object* FUNC_1 (struct nouveau_bar*) ;

int
FUNC_2(struct nouveau_bar *VAR_1, struct nouveau_object *VAR_2,
    struct nouveau_mem *VAR_3, struct nouveau_object **VAR_4)
{
 struct nouveau_object *VAR_5 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2, VAR_5, &VAR_0,
       VAR_3, 0, VAR_4);
}
