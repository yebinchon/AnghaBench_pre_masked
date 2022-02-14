
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int size; int addr; } ;
struct nv50_instobj_priv {TYPE_3__* mem; TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int (* get ) (struct nouveau_fb*,int,int,int ,int,TYPE_3__**) ;} ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct TYPE_6__ {int size; int page_shift; int offset; } ;


 int FUNC_0 (int,int) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_instobj_priv**) ;
 struct nouveau_object* FUNC_3 (struct nv50_instobj_priv*) ;
 int FUNC_4 (struct nouveau_fb*,int,int,int ,int,TYPE_3__**) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_0, struct nouveau_object *VAR_1,
    struct nouveau_oclass *VAR_2, void *VAR_3, u32 VAR_4,
    struct nouveau_object **VAR_5)
{
 struct nouveau_fb *VAR_6 = FUNC_1(VAR_0);
 struct nv50_instobj_priv *VAR_7;
 u32 VAR_8 = (unsigned long)VAR_3;
 int VAR_9;

 VAR_4 = FUNC_0((VAR_4 + 4095) & ~4095, (u32)4096);
 VAR_8 = FUNC_0((VAR_8 + 4095) & ~4095, (u32)4096);

 VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_7);
 *VAR_5 = FUNC_3(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_6->ram.get(VAR_6, VAR_4, VAR_8, 0, 0x800, &VAR_7->mem);
 if (VAR_9)
  return VAR_9;

 VAR_7->base.addr = VAR_7->mem->offset;
 VAR_7->base.size = VAR_7->mem->size << 12;
 VAR_7->mem->page_shift = 12;
 return 0;
}
