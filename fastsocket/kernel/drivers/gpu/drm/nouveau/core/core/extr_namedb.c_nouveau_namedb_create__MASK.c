
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_namedb {int list; int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nouveau_oclass*,int,int,void**) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3, u32 VAR_4,
         struct nouveau_oclass *VAR_5, u32 VAR_6,
         int VAR_7, void **VAR_8)
{
 struct nouveau_namedb *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4 |
         VAR_0, VAR_5, VAR_6,
         VAR_7, VAR_8);
 VAR_9 = *VAR_8;
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_9->lock);
 FUNC_0(&VAR_9->list);
 return 0;
}
