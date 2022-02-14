
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_engine {int lock; int contexts; } ;
struct nouveau_client {TYPE_1__* vm; } ;
struct TYPE_4__ {unsigned long long addr; int head; } ;
struct TYPE_3__ {int * engref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct nouveau_client* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_engine*,void**) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nouveau_object*,scalar_t__,scalar_t__,scalar_t__,int,void**) ;
 int FUNC_5 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,void**) ;
 int FUNC_6 (int *,struct nouveau_object**) ;
 TYPE_2__* FUNC_7 (struct nouveau_object*) ;
 size_t FUNC_8 (struct nouveau_object*) ;
 struct nouveau_engine* FUNC_9 (struct nouveau_object*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

int
FUNC_12(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3,
         struct nouveau_object *VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7,
         int VAR_8, void **VAR_9)
{
 struct nouveau_client *VAR_10 = FUNC_2(VAR_1);
 struct nouveau_engine *VAR_11 = FUNC_9(VAR_2);
 struct nouveau_object *VAR_12;
 unsigned long VAR_13;
 int VAR_14;




 FUNC_10(&VAR_11->lock, VAR_13);
 VAR_14 = FUNC_3(VAR_1, VAR_11, VAR_9);
 FUNC_11(&VAR_11->lock, VAR_13);
 if (VAR_14)
  return VAR_14;




 if (VAR_5) {
  VAR_14 = FUNC_4(VAR_1, VAR_2, VAR_3,
          VAR_0,
          VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9);
 } else {
  VAR_14 = FUNC_5(VAR_1, VAR_2, VAR_3,
          VAR_0, VAR_8, VAR_9);
 }

 VAR_12 = *VAR_9;
 if (VAR_14)
  return VAR_14;





 FUNC_10(&VAR_11->lock, VAR_13);
 VAR_14 = FUNC_3(VAR_1, VAR_11, VAR_9);
 if (VAR_14) {
  FUNC_11(&VAR_11->lock, VAR_13);
  FUNC_6(((void*)0), &VAR_12);
  return VAR_14;
 }

 if (VAR_10->vm)
  FUNC_0(&VAR_10->vm->engref[FUNC_8(VAR_2)]);
 FUNC_1(&FUNC_7(VAR_12)->head, &VAR_11->contexts);
 FUNC_7(VAR_12)->addr = ~0ULL;
 FUNC_11(&VAR_11->lock, VAR_13);
 return 0;
}
