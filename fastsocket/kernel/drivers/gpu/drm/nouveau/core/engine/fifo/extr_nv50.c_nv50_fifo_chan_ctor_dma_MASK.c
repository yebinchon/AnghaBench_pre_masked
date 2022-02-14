
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {TYPE_2__* pushgpu; } ;
struct nv50_fifo_chan {TYPE_7__* ramht; TYPE_3__ base; } ;
struct nv50_fifo_base {int ramfc; } ;
struct nv03_channel_dma_class {int offset; int pushbuf; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_12__ {TYPE_4__* node; } ;
struct TYPE_14__ {int bits; TYPE_5__ base; } ;
struct TYPE_13__ {int object_detach; int object_attach; int context_detach; int context_attach; } ;
struct TYPE_11__ {int offset; } ;
struct TYPE_9__ {TYPE_1__* node; } ;
struct TYPE_8__ {int offset; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (int ) ;
 struct nouveau_bar* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,int ,unsigned long long,struct nv50_fifo_chan**) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,int,int,TYPE_7__**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_object* FUNC_4 (struct nv50_fifo_chan*) ;
 TYPE_6__* FUNC_5 (struct nv50_fifo_chan*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct nouveau_bar*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_9,
   struct nouveau_object *VAR_10,
   struct nouveau_oclass *VAR_11, void *VAR_12, u32 VAR_13,
   struct nouveau_object **VAR_14)
{
 struct nouveau_bar *VAR_15 = FUNC_1(VAR_9);
 struct nv50_fifo_base *VAR_16 = (void *)VAR_9;
 struct nv50_fifo_chan *VAR_17;
 struct nv03_channel_dma_class *VAR_18 = VAR_12;
 int VAR_19;

 if (VAR_13 < sizeof(*VAR_18))
  return -VAR_0;

 VAR_19 = FUNC_2(VAR_9, VAR_10, VAR_11, 0, 0xc00000,
       0x2000, VAR_18->pushbuf,
       (1ULL << VAR_1) |
       (1ULL << VAR_4) |
       (1ULL << VAR_2) |
       (1ULL << VAR_3), &VAR_17);
 *VAR_14 = FUNC_4(VAR_17);
 if (VAR_19)
  return VAR_19;

 FUNC_5(VAR_17)->context_attach = VAR_5;
 FUNC_5(VAR_17)->context_detach = VAR_6;
 FUNC_5(VAR_17)->object_attach = VAR_7;
 FUNC_5(VAR_17)->object_detach = VAR_8;

 VAR_19 = FUNC_3(VAR_9, VAR_9, 0x8000, 16, &VAR_17->ramht);
 if (VAR_19)
  return VAR_19;

 FUNC_6(VAR_16->ramfc, 0x08, FUNC_0(VAR_18->offset));
 FUNC_6(VAR_16->ramfc, 0x0c, FUNC_8(VAR_18->offset));
 FUNC_6(VAR_16->ramfc, 0x10, FUNC_0(VAR_18->offset));
 FUNC_6(VAR_16->ramfc, 0x14, FUNC_8(VAR_18->offset));
 FUNC_6(VAR_16->ramfc, 0x3c, 0x003f6078);
 FUNC_6(VAR_16->ramfc, 0x44, 0x01003fff);
 FUNC_6(VAR_16->ramfc, 0x48, VAR_17->base.pushgpu->node->offset >> 4);
 FUNC_6(VAR_16->ramfc, 0x4c, 0xffffffff);
 FUNC_6(VAR_16->ramfc, 0x60, 0x7fffffff);
 FUNC_6(VAR_16->ramfc, 0x78, 0x00000000);
 FUNC_6(VAR_16->ramfc, 0x7c, 0x30000001);
 FUNC_6(VAR_16->ramfc, 0x80, ((VAR_17->ramht->bits - 9) << 27) |
       (4 << 24) |
       (VAR_17->ramht->base.node->offset >> 4));
 VAR_15->flush(VAR_15);
 return 0;
}
