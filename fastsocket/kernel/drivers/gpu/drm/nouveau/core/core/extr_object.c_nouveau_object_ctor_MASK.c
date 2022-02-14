
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_ofuncs {int (* ctor ) (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,void*,int ,struct nouveau_object**) ;int (* dtor ) (struct nouveau_object*) ;} ;
struct nouveau_oclass {int handle; struct nouveau_ofuncs* ofuncs; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,char*) ;
 int FUNC_1 (struct nouveau_object*,char*,int ,int) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,void*,int ,struct nouveau_object**) ;
 int FUNC_3 (struct nouveau_object*) ;

int
FUNC_4(struct nouveau_object *VAR_1,
      struct nouveau_object *VAR_2,
      struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nouveau_object **VAR_6)
{
 struct nouveau_ofuncs *VAR_7 = VAR_3->ofuncs;
 int VAR_8;

 *VAR_6 = ((void*)0);

 VAR_8 = VAR_7->ctor(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0) {
   FUNC_1(VAR_1, "failed to create 0x%08x, %d\n",
     VAR_3->handle, VAR_8);
  }

  if (*VAR_6) {
   VAR_7->dtor(*VAR_6);
   *VAR_6 = ((void*)0);
  }

  return VAR_8;
 }

 FUNC_0(*VAR_6, "created\n");
 return 0;
}
