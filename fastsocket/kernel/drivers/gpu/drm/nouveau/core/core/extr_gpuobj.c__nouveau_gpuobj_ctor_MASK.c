
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj_class {int flags; int align; int size; int pargpu; } ;
struct nouveau_gpuobj {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int ,int ,int ,int ,struct nouveau_gpuobj**) ;
 struct nouveau_object* FUNC_1 (struct nouveau_gpuobj*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0,
       struct nouveau_object *VAR_1,
       struct nouveau_oclass *VAR_2, void *VAR_3, u32 VAR_4,
       struct nouveau_object **VAR_5)
{
 struct nouveau_gpuobj_class *VAR_6 = VAR_3;
 struct nouveau_gpuobj *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_6->pargpu,
        VAR_6->size, VAR_6->align, VAR_6->flags,
        &VAR_7);
 *VAR_5 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 return 0;
}
