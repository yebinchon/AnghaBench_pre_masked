
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_fifo_base {TYPE_1__* pgd; int vm; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_5__ {int vm; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int,struct nvc0_fifo_base**) ;
 int FUNC_3 (struct nouveau_object*,int *,int,int,int ,TYPE_1__**) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 struct nouveau_object* FUNC_5 (struct nvc0_fifo_base*) ;
 int FUNC_6 (struct nvc0_fifo_base*,int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_2,
         struct nouveau_object *VAR_3,
         struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
         struct nouveau_object **VAR_7)
{
 struct nvc0_fifo_base *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), 0x1000,
              0x1000, VAR_1 |
       VAR_0, &VAR_8);
 *VAR_7 = FUNC_5(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_2, ((void*)0), 0x10000, 0x1000, 0, &VAR_8->pgd);
 if (VAR_9)
  return VAR_9;

 FUNC_6(VAR_8, 0x0200, FUNC_0(VAR_8->pgd->addr));
 FUNC_6(VAR_8, 0x0204, FUNC_7(VAR_8->pgd->addr));
 FUNC_6(VAR_8, 0x0208, 0xffffffff);
 FUNC_6(VAR_8, 0x020c, 0x000000ff);

 VAR_9 = FUNC_4(FUNC_1(VAR_2)->vm, &VAR_8->vm, VAR_8->pgd);
 if (VAR_9)
  return VAR_9;

 return 0;
}
