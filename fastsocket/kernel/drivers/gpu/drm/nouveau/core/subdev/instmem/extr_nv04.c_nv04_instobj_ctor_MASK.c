
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int addr; } ;
struct nv04_instobj_priv {TYPE_2__* mem; TYPE_1__ base; } ;
struct nv04_instmem_priv {int heap; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int length; int offset; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_instobj_priv**) ;
 int FUNC_1 (int *,int,int ,int ,int,TYPE_2__**) ;
 struct nouveau_object* FUNC_2 (struct nv04_instobj_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_0, struct nouveau_object *VAR_1,
    struct nouveau_oclass *VAR_2, void *VAR_3, u32 VAR_4,
    struct nouveau_object **VAR_5)
{
 struct nv04_instmem_priv *VAR_6 = (void *)VAR_1;
 struct nv04_instobj_priv *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = (unsigned long)VAR_3;
 if (!VAR_9)
  VAR_9 = 1;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_7);
 *VAR_5 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(&VAR_6->heap, 1, VAR_4, VAR_4, VAR_9, &VAR_7->mem);
 if (VAR_8)
  return VAR_8;

 VAR_7->base.addr = VAR_7->mem->offset;
 VAR_7->base.size = VAR_7->mem->length;
 return 0;
}
