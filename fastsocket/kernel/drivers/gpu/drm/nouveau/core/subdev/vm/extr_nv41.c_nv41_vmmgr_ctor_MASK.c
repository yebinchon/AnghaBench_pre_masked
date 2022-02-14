
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int limit; int dma_bits; int pgt_bits; int spg_shift; int lpg_shift; int flush; int unmap; int map_sg; int create; } ;
struct nv04_vmmgr_priv {TYPE_3__* vm; TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int cfgopt; int pdev; } ;
struct TYPE_6__ {TYPE_1__* pgt; } ;
struct TYPE_4__ {int* refcount; int * obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nouveau_object*,int *,int,int,int ,int *) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,int *,void*,int ,struct nouveau_object**) ;
 int FUNC_3 (TYPE_2__*,int ,int,int ,int,TYPE_3__**) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,char*,char*,struct nv04_vmmgr_priv**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_device* FUNC_5 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_6 (struct nv04_vmmgr_priv*) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_9, struct nouveau_object *VAR_10,
  struct nouveau_oclass *VAR_11, void *VAR_12, u32 VAR_13,
  struct nouveau_object **VAR_14)
{
 struct nouveau_device *VAR_15 = FUNC_5(VAR_9);
 struct nv04_vmmgr_priv *VAR_16;
 int VAR_17;

 if (FUNC_7(VAR_15->pdev, VAR_3) ||
     !FUNC_0(VAR_15->cfgopt, "NvPCIE", 1)) {
  return FUNC_2(VAR_9, VAR_10, &VAR_5,
        VAR_12, VAR_13, VAR_14);
 }

 VAR_17 = FUNC_4(VAR_9, VAR_10, VAR_11, "PCIEGART",
       "pciegart", &VAR_16);
 *VAR_14 = FUNC_6(VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_16->base.create = VAR_4;
 VAR_16->base.limit = VAR_1;
 VAR_16->base.dma_bits = 39;
 VAR_16->base.pgt_bits = 32 - 12;
 VAR_16->base.spg_shift = 12;
 VAR_16->base.lpg_shift = 12;
 VAR_16->base.map_sg = VAR_7;
 VAR_16->base.unmap = VAR_8;
 VAR_16->base.flush = VAR_6;

 VAR_17 = FUNC_3(&VAR_16->base, 0, VAR_1, 0, 4096,
    &VAR_16->vm);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_9, ((void*)0),
    (VAR_1 / VAR_0) * 4,
     16, VAR_2,
     &VAR_16->vm->pgt[0].obj[0]);
 VAR_16->vm->pgt[0].refcount[0] = 1;
 if (VAR_17)
  return VAR_17;

 return 0;
}
