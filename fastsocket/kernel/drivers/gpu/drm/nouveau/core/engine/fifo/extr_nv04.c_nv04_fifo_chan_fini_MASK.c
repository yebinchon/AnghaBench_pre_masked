
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ramfc_desc {unsigned long long bits; unsigned long long regs; unsigned long long ctxs; int ctxp; int regp; } ;
struct TYPE_3__ {int max; int lock; } ;
struct nv04_fifo_priv {TYPE_1__ base; struct ramfc_desc* ramfc_desc; struct nouveau_gpuobj* ramfc; } ;
struct TYPE_4__ {int chid; } ;
struct nv04_fifo_chan {int ramfc; TYPE_2__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct nouveau_gpuobj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct nv04_fifo_priv*,int ,int,int ) ;
 int FUNC_2 (struct nv04_fifo_priv*,int ) ;
 int FUNC_3 (struct nouveau_gpuobj*,int) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_5 (struct nv04_fifo_priv*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(struct nouveau_object *VAR_8, bool VAR_9)
{
 struct nv04_fifo_priv *VAR_10 = (void *)VAR_8->engine;
 struct nv04_fifo_chan *VAR_11 = (void *)VAR_8;
 struct nouveau_gpuobj *VAR_12 = VAR_10->ramfc;
 struct ramfc_desc *VAR_13;
 unsigned long VAR_14;
 u32 VAR_15 = VAR_11->ramfc;
 u32 VAR_16;


 FUNC_6(&VAR_10->base.lock, VAR_14);
 FUNC_5(VAR_10, VAR_4, 0);


 VAR_16 = FUNC_2(VAR_10, VAR_2) & VAR_10->base.max;
 if (VAR_16 == VAR_11->base.chid) {
  FUNC_1(VAR_10, VAR_5, 0x00000001, 0);
  FUNC_5(VAR_10, VAR_1, 0);
  FUNC_1(VAR_10, VAR_6, 0x00000001, 0);

  VAR_13 = VAR_10->ramfc_desc;
  do {
   u32 VAR_17 = ((1ULL << VAR_13->bits) - 1) << VAR_13->regs;
   u32 VAR_18 = ((1ULL << VAR_13->bits) - 1) << VAR_13->ctxs;
   u32 VAR_19 = (FUNC_2(VAR_10, VAR_13->regp) & VAR_17) >> VAR_13->regs;
   u32 VAR_20 = (FUNC_3(VAR_12, VAR_13->ctxp + VAR_15) & ~VAR_18);
   FUNC_4(VAR_12, VAR_13->ctxp + VAR_15, VAR_20 | (VAR_19 << VAR_13->ctxs));
  } while ((++VAR_13)->bits);

  VAR_13 = VAR_10->ramfc_desc;
  do {
   FUNC_5(VAR_10, VAR_13->regp, 0x00000000);
  } while ((++VAR_13)->bits);

  FUNC_5(VAR_10, VAR_0, 0);
  FUNC_5(VAR_10, VAR_3, 0);
  FUNC_5(VAR_10, VAR_2, VAR_10->base.max);
  FUNC_5(VAR_10, VAR_1, 1);
  FUNC_5(VAR_10, VAR_6, 1);
 }


 FUNC_1(VAR_10, VAR_7, 1 << VAR_11->base.chid, 0);
 FUNC_5(VAR_10, VAR_4, 1);
 FUNC_7(&VAR_10->base.lock, VAR_14);

 return FUNC_0(&VAR_11->base, VAR_9);
}
