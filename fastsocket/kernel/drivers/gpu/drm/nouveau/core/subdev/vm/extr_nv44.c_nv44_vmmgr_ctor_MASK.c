
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int limit; int dma_bits; int pgt_bits; int spg_shift; int lpg_shift; int flush; int unmap; int map_sg; int create; } ;
struct nv04_vmmgr_priv {TYPE_3__* vm; TYPE_2__ base; int nullp; int null; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int pdev; int cfgopt; } ;
struct TYPE_6__ {TYPE_1__* pgt; } ;
struct TYPE_4__ {int* refcount; int * obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nouveau_object*,int *,int,int,int ,int *) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,int *,void*,int ,struct nouveau_object**) ;
 int FUNC_3 (TYPE_2__*,int ,int,int ,int,TYPE_3__**) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,char*,char*,struct nv04_vmmgr_priv**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct nouveau_device* FUNC_5 (struct nouveau_object*) ;
 int FUNC_6 (struct nv04_vmmgr_priv*,char*) ;
 struct nouveau_object* FUNC_7 (struct nv04_vmmgr_priv*) ;
 int FUNC_8 (int ,int,int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_object *VAR_10, struct nouveau_object *VAR_11,
  struct nouveau_oclass *VAR_12, void *VAR_13, u32 VAR_14,
  struct nouveau_object **VAR_15)
{
 struct nouveau_device *VAR_16 = FUNC_5(VAR_10);
 struct nv04_vmmgr_priv *VAR_17;
 int VAR_18;

 if (FUNC_9(VAR_16->pdev, VAR_4) ||
     !FUNC_0(VAR_16->cfgopt, "NvPCIE", 1)) {
  return FUNC_2(VAR_10, VAR_11, &VAR_6,
        VAR_13, VAR_14, VAR_15);
 }

 VAR_18 = FUNC_4(VAR_10, VAR_11, VAR_12, "PCIEGART",
       "pciegart", &VAR_17);
 *VAR_15 = FUNC_7(VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_17->base.create = VAR_5;
 VAR_17->base.limit = VAR_2;
 VAR_17->base.dma_bits = 39;
 VAR_17->base.pgt_bits = 32 - 12;
 VAR_17->base.spg_shift = 12;
 VAR_17->base.lpg_shift = 12;
 VAR_17->base.map_sg = VAR_8;
 VAR_17->base.unmap = VAR_9;
 VAR_17->base.flush = VAR_7;

 VAR_17->nullp = FUNC_8(VAR_16->pdev, 16 * 1024, &VAR_17->null);
 if (!VAR_17->nullp) {
  FUNC_6(VAR_17, "unable to allocate dummy pages\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_3(&VAR_17->base, 0, VAR_2, 0, 4096,
    &VAR_17->vm);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_1(VAR_10, ((void*)0),
    (VAR_2 / VAR_1) * 4,
     512 * 1024, VAR_3,
     &VAR_17->vm->pgt[0].obj[0]);
 VAR_17->vm->pgt[0].refcount[0] = 1;
 if (VAR_18)
  return VAR_18;

 return 0;
}
