
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_instmem {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char*,char*,int,void**) ;

int
FUNC_2(struct nouveau_object *VAR_0,
   struct nouveau_object *VAR_1,
   struct nouveau_oclass *VAR_2,
   int VAR_3, void **VAR_4)
{
 struct nouveau_instmem *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, 0,
         "INSTMEM", "instmem", VAR_3, VAR_4);
 VAR_5 = *VAR_4;
 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_5->list);
 return 0;
}
