
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_devinit {int post; } ;
struct nouveau_device {int cfgopt; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char*,char*,int,void**) ;
 struct nouveau_device* FUNC_2 (struct nouveau_object*) ;

int
FUNC_3(struct nouveau_object *VAR_0,
   struct nouveau_object *VAR_1,
   struct nouveau_oclass *VAR_2,
   int VAR_3, void **VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_2(VAR_0);
 struct nouveau_devinit *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, 0, "DEVINIT",
         "init", VAR_3, VAR_4);
 VAR_6 = *VAR_4;
 if (VAR_7)
  return VAR_7;

 VAR_6->post = FUNC_0(VAR_5->cfgopt, "NvForcePost", 0);
 return 0;
}
