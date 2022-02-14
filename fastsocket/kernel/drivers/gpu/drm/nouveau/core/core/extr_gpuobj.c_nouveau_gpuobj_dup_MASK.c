
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int engine; } ;
struct nouveau_gpuobj {int size; int addr; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,int ,int *,int ,struct nouveau_gpuobj**) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nouveau_gpuobj*) ;

int
FUNC_3(struct nouveau_object *VAR_1, struct nouveau_gpuobj *VAR_2,
     struct nouveau_gpuobj **VAR_3)
{
 struct nouveau_gpuobj *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_1->engine,
       &VAR_0, 0, &VAR_4);
 *VAR_3 = VAR_4;
 if (VAR_5)
  return VAR_5;

 FUNC_1(FUNC_2(VAR_2), &VAR_4->parent);
 VAR_4->addr = VAR_2->addr;
 VAR_4->size = VAR_2->size;
 return 0;
}
