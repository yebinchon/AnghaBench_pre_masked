
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {struct nouveau_object* engine; } ;
struct nouveau_gpuobj_class {int flags; int align; int size; struct nouveau_object* pargpu; } ;
struct nouveau_gpuobj {int dummy; } ;
typedef int args ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int *,struct nouveau_gpuobj_class*,int,struct nouveau_object**) ;
 int FUNC_2 (struct nouveau_object*,int ) ;

int
FUNC_3(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6,
     struct nouveau_gpuobj **VAR_7)
{
 struct nouveau_object *VAR_8 = VAR_2;
 struct nouveau_gpuobj_class VAR_9 = {
  .pargpu = VAR_3,
  .size = VAR_4,
  .align = VAR_5,
  .flags = VAR_6,
 };

 if (!FUNC_2(VAR_8, VAR_0))
  VAR_8 = VAR_8->engine;
 FUNC_0(VAR_8 == ((void*)0));

 return FUNC_1(VAR_2, VAR_8, &VAR_1,
       &VAR_9, sizeof(VAR_9),
       (struct nouveau_object **)VAR_7);
}
