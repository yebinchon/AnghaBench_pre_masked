
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
struct TYPE_6__ {int object_detach; int object_attach; int context_detach; int context_attach; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,int ,unsigned long long,struct nv04_fifo_chan**) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct nouveau_object* FUNC_1 (struct nv04_fifo_chan*) ;
 TYPE_3__* FUNC_2 (struct nv04_fifo_chan*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_13,
      struct nouveau_object *VAR_14,
      struct nouveau_oclass *VAR_15, void *VAR_16, u32 VAR_17,
      struct nouveau_object **VAR_18)
{
 struct nv04_fifo_priv *VAR_19 = (void *)VAR_14;
 struct nv04_fifo_chan *VAR_20;
 struct nv03_channel_dma_class *VAR_21 = VAR_16;
 int VAR_22;

 if (VAR_17 < sizeof(*VAR_21))
  return -VAR_0;

 VAR_22 = FUNC_0(VAR_13, VAR_14, VAR_15, 0, 0xc00000,
       0x1000, VAR_21->pushbuf,
       (1ULL << VAR_1) |
       (1ULL << VAR_4) |
       (1ULL << VAR_2) |
       (1ULL << VAR_3), &VAR_20);
 *VAR_18 = FUNC_1(VAR_20);
 if (VAR_22)
  return VAR_22;

 FUNC_2(VAR_20)->context_attach = VAR_10;
 FUNC_2(VAR_20)->context_detach = VAR_11;
 FUNC_2(VAR_20)->object_attach = VAR_12;
 FUNC_2(VAR_20)->object_detach = VAR_9;
 VAR_20->ramfc = VAR_20->base.chid * 128;

 FUNC_3(VAR_19->ramfc, VAR_20->ramfc + 0x00, VAR_21->offset);
 FUNC_3(VAR_19->ramfc, VAR_20->ramfc + 0x04, VAR_21->offset);
 FUNC_3(VAR_19->ramfc, VAR_20->ramfc + 0x0c, VAR_20->base.pushgpu->addr >> 4);
 FUNC_3(VAR_19->ramfc, VAR_20->ramfc + 0x18, 0x30000000 |
        VAR_8 |
        VAR_7 |



        VAR_6);
 FUNC_3(VAR_19->ramfc, VAR_20->ramfc + 0x3c, 0x0001ffff);
 return 0;
}
