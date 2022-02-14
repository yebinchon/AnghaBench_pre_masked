
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_sclass {struct nouveau_oclass* oclass; int * engine; struct nouveau_sclass* sclass; } ;
struct nouveau_parent {int engine; struct nouveau_sclass* sclass; } ;
struct nouveau_oclass {scalar_t__ ofuncs; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_sclass* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,void**) ;
 int * FUNC_2 (struct nouveau_object*) ;

int
FUNC_3(struct nouveau_object *VAR_3,
         struct nouveau_object *VAR_4,
         struct nouveau_oclass *VAR_5, u32 VAR_6,
         struct nouveau_oclass *VAR_7, u64 VAR_8,
         int VAR_9, void **VAR_10)
{
 struct nouveau_parent *VAR_11;
 struct nouveau_sclass *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6 |
         VAR_2, VAR_9, VAR_10);
 VAR_11 = *VAR_10;
 if (VAR_13)
  return VAR_13;

 while (VAR_7 && VAR_7->ofuncs) {
  VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;

  VAR_12->sclass = VAR_11->sclass;
  VAR_11->sclass = VAR_12;
  VAR_12->engine = VAR_4 ? FUNC_2(VAR_4) : ((void*)0);
  VAR_12->oclass = VAR_7;
  VAR_7++;
 }

 VAR_11->engine = VAR_8;
 return 0;
}
