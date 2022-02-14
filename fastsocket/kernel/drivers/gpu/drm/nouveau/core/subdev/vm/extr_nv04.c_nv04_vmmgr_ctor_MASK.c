
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
struct nouveau_gpuobj {int dummy; } ;
struct TYPE_6__ {TYPE_1__* pgt; } ;
struct TYPE_4__ {int* refcount; struct nouveau_gpuobj** obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_object*,int *,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_1 (TYPE_2__*,int ,int,int ,int,TYPE_3__**) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,char*,char*,struct nv04_vmmgr_priv**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nouveau_object* FUNC_3 (struct nv04_vmmgr_priv*) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_7, struct nouveau_object *VAR_8,
  struct nouveau_oclass *VAR_9, void *VAR_10, u32 VAR_11,
  struct nouveau_object **VAR_12)
{
 struct nv04_vmmgr_priv *VAR_13;
 struct nouveau_gpuobj *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9, "PCIGART",
       "pcigart", &VAR_13);
 *VAR_12 = FUNC_3(VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_13->base.create = VAR_3;
 VAR_13->base.limit = VAR_1;
 VAR_13->base.dma_bits = 32;
 VAR_13->base.pgt_bits = 32 - 12;
 VAR_13->base.spg_shift = 12;
 VAR_13->base.lpg_shift = 12;
 VAR_13->base.map_sg = VAR_5;
 VAR_13->base.unmap = VAR_6;
 VAR_13->base.flush = VAR_4;

 VAR_15 = FUNC_1(&VAR_13->base, 0, VAR_1, 0, 4096,
    &VAR_13->vm);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_7, ((void*)0),
     (VAR_1 / VAR_0) * 4 +
     8, 16, VAR_2,
     &VAR_13->vm->pgt[0].obj[0]);
 VAR_14 = VAR_13->vm->pgt[0].obj[0];
 VAR_13->vm->pgt[0].refcount[0] = 1;
 if (VAR_15)
  return VAR_15;

 FUNC_4(VAR_14, 0x00000, 0x0002103d);
 FUNC_4(VAR_14, 0x00004, VAR_1 - 1);
 return 0;
}
