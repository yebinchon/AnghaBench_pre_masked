
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_disp {int vblank; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,char const*,char const*,int,void**) ;
 int FUNC_1 (int,int *) ;

int
FUNC_2(struct nouveau_object *VAR_0,
       struct nouveau_object *VAR_1,
       struct nouveau_oclass *VAR_2, int VAR_3,
       const char *VAR_4, const char *VAR_5,
       int VAR_6, void **VAR_7)
{
 struct nouveau_disp *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, 1,
         VAR_4, VAR_5, VAR_6, VAR_7);
 VAR_8 = *VAR_7;
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_3, &VAR_8->vblank);
}
