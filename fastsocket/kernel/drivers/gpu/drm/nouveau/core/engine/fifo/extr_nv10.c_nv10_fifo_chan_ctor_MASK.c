
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv04_fifo_priv {int ramfc; } ;
struct TYPE_5__ {int chid; TYPE_1__* pushgpu; } ;
struct nv04_fifo_chan {int ramfc; TYPE_2__ base; } ;
struct nv03_channel_dma_class {int offset; int pushbuf; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {int context_attach; int object_detach; int object_attach; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,int ,unsigned long long,struct nv04_fifo_chan**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nouveau_object* FUNC_1 (struct nv04_fifo_chan*) ;
 TYPE_3__* FUNC_2 (struct nv04_fifo_chan*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_11,
      struct nouveau_object *VAR_12,
      struct nouveau_oclass *VAR_13, void *VAR_14, u32 VAR_15,
      struct nouveau_object **VAR_16)
{
 struct nv04_fifo_priv *VAR_17 = (void *)VAR_12;
 struct nv04_fifo_chan *VAR_18;
 struct nv03_channel_dma_class *VAR_19 = VAR_14;
 int VAR_20;

 if (VAR_15 < sizeof(*VAR_19))
  return -VAR_0;

 VAR_20 = FUNC_0(VAR_11, VAR_12, VAR_13, 0, 0x800000,
       0x10000, VAR_19->pushbuf,
       (1ULL << VAR_1) |
       (1ULL << VAR_3) |
       (1ULL << VAR_2), &VAR_18);
 *VAR_16 = FUNC_1(VAR_18);
 if (VAR_20)
  return VAR_20;

 FUNC_2(VAR_18)->object_attach = VAR_9;
 FUNC_2(VAR_18)->object_detach = VAR_10;
 FUNC_2(VAR_18)->context_attach = VAR_8;
 VAR_18->ramfc = VAR_18->base.chid * 32;

 FUNC_3(VAR_17->ramfc, VAR_18->ramfc + 0x00, VAR_19->offset);
 FUNC_3(VAR_17->ramfc, VAR_18->ramfc + 0x04, VAR_19->offset);
 FUNC_3(VAR_17->ramfc, VAR_18->ramfc + 0x0c, VAR_18->base.pushgpu->addr >> 4);
 FUNC_3(VAR_17->ramfc, VAR_18->ramfc + 0x14,
        VAR_7 |
        VAR_6 |



        VAR_5);
 return 0;
}
