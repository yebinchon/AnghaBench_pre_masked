
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int offset; } ;
struct TYPE_7__ {struct nvc0_fifo_base* mem; TYPE_1__ bar; } ;
struct nvc0_fifo_priv {TYPE_3__ user; } ;
struct TYPE_6__ {int chid; } ;
struct nvc0_fifo_chan {TYPE_2__ base; } ;
struct nvc0_fifo_base {int addr; } ;
struct nv50_channel_ind_class {int ioffset; int ilength; int pushbuf; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_8__ {int context_detach; int context_attach; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct nouveau_bar* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int ,int,int ,unsigned long long,struct nvc0_fifo_chan**) ;
 struct nouveau_object* FUNC_4 (struct nvc0_fifo_chan*) ;
 TYPE_4__* FUNC_5 (struct nvc0_fifo_chan*) ;
 int FUNC_6 (struct nvc0_fifo_base*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct nouveau_bar*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_10,
      struct nouveau_object *VAR_11,
      struct nouveau_oclass *VAR_12, void *VAR_13, u32 VAR_14,
      struct nouveau_object **VAR_15)
{
 struct nouveau_bar *VAR_16 = FUNC_2(VAR_10);
 struct nvc0_fifo_priv *VAR_17 = (void *)VAR_11;
 struct nvc0_fifo_base *VAR_18 = (void *)VAR_10;
 struct nvc0_fifo_chan *VAR_19;
 struct nv50_channel_ind_class *VAR_20 = VAR_13;
 u64 VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;

 if (VAR_14 < sizeof(*VAR_20))
  return -VAR_0;

 VAR_24 = FUNC_3(VAR_10, VAR_11, VAR_12, 1,
       VAR_17->user.bar.offset, 0x1000,
       VAR_20->pushbuf,
       (1ULL << VAR_6) |
       (1ULL << VAR_4) |
       (1ULL << VAR_2) |
       (1ULL << VAR_3) |
       (1ULL << VAR_1) |
       (1ULL << VAR_7) |
       (1ULL << VAR_5), &VAR_19);
 *VAR_15 = FUNC_4(VAR_19);
 if (VAR_24)
  return VAR_24;

 FUNC_5(VAR_19)->context_attach = VAR_8;
 FUNC_5(VAR_19)->context_detach = VAR_9;

 VAR_21 = VAR_19->base.chid * 0x1000;
 VAR_22 = VAR_20->ioffset;
 VAR_23 = FUNC_0(VAR_20->ilength / 8);

 for (VAR_25 = 0; VAR_25 < 0x1000; VAR_25 += 4)
  FUNC_6(VAR_17->user.mem, VAR_21 + VAR_25, 0x00000000);

 FUNC_6(VAR_18, 0x08, FUNC_1(VAR_17->user.mem->addr + VAR_21));
 FUNC_6(VAR_18, 0x0c, FUNC_8(VAR_17->user.mem->addr + VAR_21));
 FUNC_6(VAR_18, 0x10, 0x0000face);
 FUNC_6(VAR_18, 0x30, 0xfffff902);
 FUNC_6(VAR_18, 0x48, FUNC_1(VAR_22));
 FUNC_6(VAR_18, 0x4c, FUNC_8(VAR_22) | (VAR_23 << 16));
 FUNC_6(VAR_18, 0x54, 0x00000002);
 FUNC_6(VAR_18, 0x84, 0x20400000);
 FUNC_6(VAR_18, 0x94, 0x30000001);
 FUNC_6(VAR_18, 0x9c, 0x00000100);
 FUNC_6(VAR_18, 0xa4, 0x1f1f1f1f);
 FUNC_6(VAR_18, 0xa8, 0x1f1f1f1f);
 FUNC_6(VAR_18, 0xac, 0x0000001f);
 FUNC_6(VAR_18, 0xb8, 0xf8000000);
 FUNC_6(VAR_18, 0xf8, 0x10003080);
 FUNC_6(VAR_18, 0xfc, 0x10000010);
 VAR_16->flush(VAR_16);
 return 0;
}
