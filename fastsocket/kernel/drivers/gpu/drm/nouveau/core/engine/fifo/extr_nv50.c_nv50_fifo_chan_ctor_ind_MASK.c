
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


typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {TYPE_2__* pushgpu; } ;
struct nv50_fifo_chan {TYPE_7__* ramht; TYPE_3__ base; } ;
struct nv50_fifo_base {int ramfc; } ;
struct nv50_channel_ind_class {int ioffset; int ilength; int pushbuf; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct nouveau_bar* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,int ,unsigned long long,struct nv50_fifo_chan**) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,int,int,TYPE_7__**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_object* FUNC_5 (struct nv50_fifo_chan*) ;
 TYPE_6__* FUNC_6 (struct nv50_fifo_chan*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct nouveau_bar*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_object *VAR_9,
   struct nouveau_object *VAR_10,
   struct nouveau_oclass *VAR_11, void *VAR_12, u32 VAR_13,
   struct nouveau_object **VAR_14)
{
 struct nv50_channel_ind_class *VAR_15 = VAR_12;
 struct nouveau_bar *VAR_16 = FUNC_2(VAR_9);
 struct nv50_fifo_base *VAR_17 = (void *)VAR_9;
 struct nv50_fifo_chan *VAR_18;
 u64 VAR_19, VAR_20;
 int VAR_21;

 if (VAR_13 < sizeof(*VAR_15))
  return -VAR_0;

 VAR_21 = FUNC_3(VAR_9, VAR_10, VAR_11, 0, 0xc00000,
       0x2000, VAR_15->pushbuf,
       (1ULL << VAR_1) |
       (1ULL << VAR_4) |
       (1ULL << VAR_2) |
       (1ULL << VAR_3), &VAR_18);
 *VAR_14 = FUNC_5(VAR_18);
 if (VAR_21)
  return VAR_21;

 FUNC_6(VAR_18)->context_attach = VAR_5;
 FUNC_6(VAR_18)->context_detach = VAR_6;
 FUNC_6(VAR_18)->object_attach = VAR_7;
 FUNC_6(VAR_18)->object_detach = VAR_8;

 VAR_21 = FUNC_4(VAR_9, VAR_9, 0x8000, 16, &VAR_18->ramht);
 if (VAR_21)
  return VAR_21;

 VAR_19 = VAR_15->ioffset;
 VAR_20 = FUNC_0(VAR_15->ilength / 8);

 FUNC_7(VAR_17->ramfc, 0x3c, 0x403f6078);
 FUNC_7(VAR_17->ramfc, 0x44, 0x01003fff);
 FUNC_7(VAR_17->ramfc, 0x48, VAR_18->base.pushgpu->node->offset >> 4);
 FUNC_7(VAR_17->ramfc, 0x50, FUNC_1(VAR_19));
 FUNC_7(VAR_17->ramfc, 0x54, FUNC_9(VAR_19) | (VAR_20 << 16));
 FUNC_7(VAR_17->ramfc, 0x60, 0x7fffffff);
 FUNC_7(VAR_17->ramfc, 0x78, 0x00000000);
 FUNC_7(VAR_17->ramfc, 0x7c, 0x30000001);
 FUNC_7(VAR_17->ramfc, 0x80, ((VAR_18->ramht->bits - 9) << 27) |
       (4 << 24) |
       (VAR_18->ramht->base.node->offset >> 4));
 VAR_16->flush(VAR_16);
 return 0;
}
