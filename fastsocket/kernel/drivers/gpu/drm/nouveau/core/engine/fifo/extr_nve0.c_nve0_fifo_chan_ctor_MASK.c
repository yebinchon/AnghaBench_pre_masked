
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int offset; } ;
struct TYPE_7__ {struct nve0_fifo_base* mem; TYPE_1__ bar; } ;
struct nve0_fifo_priv {TYPE_2__ user; } ;
struct TYPE_8__ {int chid; } ;
struct nve0_fifo_chan {int engine; TYPE_3__ base; } ;
struct nve0_fifo_base {int addr; } ;
struct nve0_channel_ind_class {int engine; int ioffset; int ilength; int pushbuf; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_10__ {int mask; int subdev; } ;
struct TYPE_9__ {int context_detach; int context_attach; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct nouveau_bar* FUNC_2 (struct nouveau_object*) ;
 scalar_t__ FUNC_3 (struct nouveau_object*,int ) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int ,int,int ,int ,struct nve0_fifo_chan**) ;
 struct nouveau_object* FUNC_5 (struct nve0_fifo_chan*) ;
 TYPE_4__* FUNC_6 (struct nve0_fifo_chan*) ;
 int FUNC_7 (struct nve0_fifo_base*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct nouveau_bar*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_object *VAR_6,
      struct nouveau_object *VAR_7,
      struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
      struct nouveau_object **VAR_11)
{
 struct nouveau_bar *VAR_12 = FUNC_2(VAR_6);
 struct nve0_fifo_priv *VAR_13 = (void *)VAR_7;
 struct nve0_fifo_base *VAR_14 = (void *)VAR_6;
 struct nve0_fifo_chan *VAR_15;
 struct nve0_channel_ind_class *VAR_16 = VAR_9;
 u64 VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 if (VAR_10 < sizeof(*VAR_16))
  return -VAR_0;

 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  if (VAR_16->engine & (1 << VAR_21)) {
   if (FUNC_3(VAR_6, VAR_3[VAR_21].subdev)) {
    VAR_16->engine = (1 << VAR_21);
    break;
   }
  }
 }

 if (VAR_21 == VAR_2)
  return -VAR_1;

 VAR_20 = FUNC_4(VAR_6, VAR_7, VAR_8, 1,
       VAR_13->user.bar.offset, 0x200,
       VAR_16->pushbuf,
       VAR_3[VAR_21].mask, &VAR_15);
 *VAR_11 = FUNC_5(VAR_15);
 if (VAR_20)
  return VAR_20;

 FUNC_6(VAR_15)->context_attach = VAR_4;
 FUNC_6(VAR_15)->context_detach = VAR_5;
 VAR_15->engine = VAR_21;

 VAR_17 = VAR_15->base.chid * 0x200;
 VAR_18 = VAR_16->ioffset;
 VAR_19 = FUNC_0(VAR_16->ilength / 8);

 for (VAR_21 = 0; VAR_21 < 0x200; VAR_21 += 4)
  FUNC_7(VAR_13->user.mem, VAR_17 + VAR_21, 0x00000000);

 FUNC_7(VAR_14, 0x08, FUNC_1(VAR_13->user.mem->addr + VAR_17));
 FUNC_7(VAR_14, 0x0c, FUNC_9(VAR_13->user.mem->addr + VAR_17));
 FUNC_7(VAR_14, 0x10, 0x0000face);
 FUNC_7(VAR_14, 0x30, 0xfffff902);
 FUNC_7(VAR_14, 0x48, FUNC_1(VAR_18));
 FUNC_7(VAR_14, 0x4c, FUNC_9(VAR_18) | (VAR_19 << 16));
 FUNC_7(VAR_14, 0x84, 0x20400000);
 FUNC_7(VAR_14, 0x94, 0x30000001);
 FUNC_7(VAR_14, 0x9c, 0x00000100);
 FUNC_7(VAR_14, 0xac, 0x0000001f);
 FUNC_7(VAR_14, 0xe8, VAR_15->base.chid);
 FUNC_7(VAR_14, 0xb8, 0xf8000000);
 FUNC_7(VAR_14, 0xf8, 0x10003080);
 FUNC_7(VAR_14, 0xfc, 0x10000010);
 VAR_12->flush(VAR_12);
 return 0;
}
