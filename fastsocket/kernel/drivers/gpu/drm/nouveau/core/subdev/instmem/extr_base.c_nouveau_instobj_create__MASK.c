
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_instobj {int head; } ;
struct TYPE_2__ {int mutex; } ;
struct nouveau_instmem {TYPE_1__ base; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,void**) ;

int
FUNC_4(struct nouveau_object *VAR_1,
   struct nouveau_object *VAR_2,
   struct nouveau_oclass *VAR_3,
   int VAR_4, void **VAR_5)
{
 struct nouveau_instmem *VAR_6 = (void *)VAR_2;
 struct nouveau_instobj *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0,
         VAR_4, VAR_5);
 VAR_7 = *VAR_5;
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_6->base.mutex);
 FUNC_0(&VAR_7->head, &VAR_6->list);
 FUNC_2(&VAR_6->base.mutex);
 return 0;
}
