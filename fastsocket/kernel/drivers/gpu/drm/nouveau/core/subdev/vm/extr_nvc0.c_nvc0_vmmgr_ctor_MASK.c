
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long long limit; int dma_bits; int pgt_bits; int spg_shift; int lpg_shift; int flush; int unmap; int map_sg; int map; int map_pgt; int create; } ;
struct nvc0_vmmgr_priv {int lock; TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,char*,char*,struct nvc0_vmmgr_priv**) ;
 struct nouveau_object* FUNC_1 (struct nvc0_vmmgr_priv*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
  struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
  struct nouveau_object **VAR_11)
{
 struct nvc0_vmmgr_priv *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, "VM", "vm", &VAR_12);
 *VAR_11 = FUNC_1(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_12->base.limit = 1ULL << 40;
 VAR_12->base.dma_bits = 40;
 VAR_12->base.pgt_bits = 27 - 12;
 VAR_12->base.spg_shift = 12;
 VAR_12->base.lpg_shift = 17;
 VAR_12->base.create = VAR_0;
 VAR_12->base.map_pgt = VAR_3;
 VAR_12->base.map = VAR_2;
 VAR_12->base.map_sg = VAR_4;
 VAR_12->base.unmap = VAR_5;
 VAR_12->base.flush = VAR_1;
 FUNC_2(&VAR_12->lock);
 return 0;
}
