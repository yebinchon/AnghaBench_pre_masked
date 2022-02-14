
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_falcon {int addr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,char const*,char const*,int,void**) ;

int
FUNC_1(struct nouveau_object *VAR_0,
         struct nouveau_object *VAR_1,
         struct nouveau_oclass *VAR_2, u32 VAR_3, bool VAR_4,
         const char *VAR_5, const char *VAR_6,
         int VAR_7, void **VAR_8)
{
 struct nouveau_falcon *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8);
 VAR_9 = *VAR_8;
 if (VAR_10)
  return VAR_10;

 VAR_9->addr = VAR_3;
 return 0;
}
