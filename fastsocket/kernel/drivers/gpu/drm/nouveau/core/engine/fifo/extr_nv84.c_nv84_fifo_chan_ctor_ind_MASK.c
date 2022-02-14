
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_12__ {TYPE_2__* pushgpu; } ;
struct nv50_fifo_chan {TYPE_9__* ramht; TYPE_3__ base; } ;
struct nv50_fifo_base {int ramfc; TYPE_6__* cache; } ;
struct nv50_channel_ind_class {int ioffset; int ilength; int pushbuf; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_14__ {TYPE_4__* node; } ;
struct TYPE_18__ {int bits; TYPE_5__ base; } ;
struct TYPE_17__ {int addr; } ;
struct TYPE_16__ {int object_detach; int object_attach; int context_detach; int context_attach; } ;
struct TYPE_15__ {int addr; } ;
struct TYPE_13__ {int offset; } ;
struct TYPE_11__ {TYPE_1__* node; } ;
struct TYPE_10__ {int offset; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct nouveau_bar* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,int ,unsigned long long,struct nv50_fifo_chan**) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,int,int,TYPE_9__**) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_8__* FUNC_5 (struct nv50_fifo_base*) ;
 struct nouveau_object* FUNC_6 (struct nv50_fifo_chan*) ;
 TYPE_7__* FUNC_7 (struct nv50_fifo_chan*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (struct nouveau_bar*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_object *VAR_16,
   struct nouveau_object *VAR_17,
   struct nouveau_oclass *VAR_18, void *VAR_19, u32 VAR_20,
   struct nouveau_object **VAR_21)
{
 struct nouveau_bar *VAR_22 = FUNC_2(VAR_16);
 struct nv50_fifo_base *VAR_23 = (void *)VAR_16;
 struct nv50_fifo_chan *VAR_24;
 struct nv50_channel_ind_class *VAR_25 = VAR_19;
 u64 VAR_26, VAR_27;
 int VAR_28;

 if (VAR_20 < sizeof(*VAR_25))
  return -VAR_0;

 VAR_28 = FUNC_3(VAR_16, VAR_17, VAR_18, 0, 0xc00000,
       0x2000, VAR_25->pushbuf,
       (1ULL << VAR_4) |
       (1ULL << VAR_9) |
       (1ULL << VAR_5) |
       (1ULL << VAR_7) |
       (1ULL << VAR_6) |
       (1ULL << VAR_11) |
       (1ULL << VAR_3) |
       (1ULL << VAR_1) |
       (1ULL << VAR_8) |
       (1ULL << VAR_2) |
       (1ULL << VAR_10), &VAR_24);
 *VAR_21 = FUNC_6(VAR_24);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_4(VAR_16, VAR_16, 0x8000, 16, &VAR_24->ramht);
 if (VAR_28)
  return VAR_28;

 FUNC_7(VAR_24)->context_attach = VAR_13;
 FUNC_7(VAR_24)->context_detach = VAR_14;
 FUNC_7(VAR_24)->object_attach = VAR_15;
 FUNC_7(VAR_24)->object_detach = VAR_12;

 VAR_26 = VAR_25->ioffset;
 VAR_27 = FUNC_0(VAR_25->ilength / 8);

 FUNC_8(VAR_23->ramfc, 0x3c, 0x403f6078);
 FUNC_8(VAR_23->ramfc, 0x44, 0x01003fff);
 FUNC_8(VAR_23->ramfc, 0x48, VAR_24->base.pushgpu->node->offset >> 4);
 FUNC_8(VAR_23->ramfc, 0x50, FUNC_1(VAR_26));
 FUNC_8(VAR_23->ramfc, 0x54, FUNC_10(VAR_26) | (VAR_27 << 16));
 FUNC_8(VAR_23->ramfc, 0x60, 0x7fffffff);
 FUNC_8(VAR_23->ramfc, 0x78, 0x00000000);
 FUNC_8(VAR_23->ramfc, 0x7c, 0x30000001);
 FUNC_8(VAR_23->ramfc, 0x80, ((VAR_24->ramht->bits - 9) << 27) |
       (4 << 24) |
       (VAR_24->ramht->base.node->offset >> 4));
 FUNC_8(VAR_23->ramfc, 0x88, VAR_23->cache->addr >> 10);
 FUNC_8(VAR_23->ramfc, 0x98, FUNC_5(VAR_23)->addr >> 12);
 VAR_22->flush(VAR_22);
 return 0;
}
