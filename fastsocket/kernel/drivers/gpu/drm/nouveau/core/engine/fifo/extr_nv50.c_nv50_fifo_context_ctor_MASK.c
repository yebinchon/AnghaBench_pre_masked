
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_base {int pgd; int vm; int eng; int ramfc; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int ,struct nv50_fifo_base**) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,int,int,int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 struct nouveau_object* FUNC_4 (struct nv50_fifo_base*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_2,
         struct nouveau_object *VAR_3,
         struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
         struct nouveau_object **VAR_7)
{
 struct nv50_fifo_base *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0), 0x10000,
              0x1000, VAR_0, &VAR_8);
 *VAR_7 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_2, FUNC_4(VAR_8), 0x0200, 0x1000,
     VAR_1, &VAR_8->ramfc);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_2, FUNC_4(VAR_8), 0x1200, 0,
     VAR_1, &VAR_8->eng);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_2, FUNC_4(VAR_8), 0x4000, 0, 0,
    &VAR_8->pgd);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(FUNC_0(VAR_2)->vm, &VAR_8->vm, VAR_8->pgd);
 if (VAR_9)
  return VAR_9;

 return 0;
}
