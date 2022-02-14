
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_engine {int lock; int contexts; } ;
struct nouveau_device {int cfgopt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char const*,char const*,int,void**) ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_engine*,char*,char const*) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct nouveau_object *VAR_2,
         struct nouveau_object *VAR_3,
         struct nouveau_oclass *VAR_4, bool VAR_5,
         const char *VAR_6, const char *VAR_7,
         int VAR_8, void **VAR_9)
{
 struct nouveau_device *VAR_10 = FUNC_3(VAR_2);
 struct nouveau_engine *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1,
         VAR_6, VAR_7, VAR_8, VAR_9);
 VAR_11 = *VAR_9;
 if (VAR_12)
  return VAR_12;

 if (!FUNC_1(VAR_10->cfgopt, VAR_6, VAR_5)) {
  if (!VAR_5)
   FUNC_4(VAR_11, "disabled, %s=1 to enable\n", VAR_6);
  return -VAR_0;
 }

 FUNC_0(&VAR_11->contexts);
 FUNC_5(&VAR_11->lock);
 return 0;
}
