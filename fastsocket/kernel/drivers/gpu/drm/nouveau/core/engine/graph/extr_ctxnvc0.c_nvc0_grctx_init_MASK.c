
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvc0_grctx {int addr; struct nouveau_gpuobj* chan; scalar_t__ buffer_nr; struct nvc0_graph_priv* priv; int mmio; int data; } ;
struct nvc0_graph_priv {int size; scalar_t__ firmware; int mmio_list; int mmio_data; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int addr; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct nouveau_bar* FUNC_1 (struct nvc0_graph_priv*) ;
 int FUNC_2 (struct nouveau_object*,int *,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_3 (int *,struct nouveau_gpuobj**) ;
 int FUNC_4 (struct nvc0_graph_priv*,char*,...) ;
 struct nouveau_object* FUNC_5 (struct nvc0_graph_priv*) ;
 int FUNC_6 (struct nvc0_graph_priv*,int,int,int) ;
 int FUNC_7 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_8 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_9 (struct nvc0_graph_priv*) ;
 int FUNC_10 (struct nouveau_bar*) ;
 int FUNC_11 (struct nouveau_bar*) ;
 int FUNC_12 (int) ;

int
FUNC_13(struct nvc0_graph_priv *VAR_2, struct nvc0_grctx *VAR_3)
{
 struct nouveau_bar *VAR_4 = FUNC_1(VAR_2);
 struct nouveau_object *VAR_5 = FUNC_5(VAR_2);
 struct nouveau_gpuobj *VAR_6;
 u32 VAR_7 = (0x80000 + VAR_2->size + 4095) & ~4095;
 int VAR_8, VAR_9;




 VAR_8 = FUNC_2(VAR_5, ((void*)0), VAR_7, 0x1000,
     VAR_1, &VAR_3->chan);
 VAR_6 = VAR_3->chan;
 if (VAR_8) {
  FUNC_4(VAR_2, "failed to allocate channel memory, %d\n", VAR_8);
  return VAR_8;
 }


 FUNC_7(VAR_6, 0x0200, FUNC_0(VAR_6->addr + 0x1000));
 FUNC_7(VAR_6, 0x0204, FUNC_12(VAR_6->addr + 0x1000));
 FUNC_7(VAR_6, 0x0208, 0xffffffff);
 FUNC_7(VAR_6, 0x020c, 0x000000ff);


 FUNC_7(VAR_6, 0x1000, 0x00000000);
 FUNC_7(VAR_6, 0x1004, 0x00000001 | (VAR_6->addr + 0x2000) >> 8);


 for (VAR_9 = 0; VAR_9 < VAR_7 / 4096; VAR_9++) {
  u64 VAR_10 = ((VAR_6->addr + (VAR_9 * 4096)) >> 8) | 1;
  FUNC_7(VAR_6, 0x2000 + (VAR_9 * 8), FUNC_0(VAR_10));
  FUNC_7(VAR_6, 0x2004 + (VAR_9 * 8), FUNC_12(VAR_10));
 }


 FUNC_7(VAR_6, 0x0210, 0x00080004);
 FUNC_7(VAR_6, 0x0214, 0x00000000);

 VAR_4->flush(VAR_4);

 FUNC_8(VAR_2, 0x100cb8, (VAR_6->addr + 0x1000) >> 8);
 FUNC_8(VAR_2, 0x100cbc, 0x80000001);
 FUNC_6(VAR_2, 0x100c80, 0x00008000, 0x00008000);


 VAR_3->data = VAR_2->mmio_data;
 VAR_3->mmio = VAR_2->mmio_list;
 VAR_3->addr = 0x2000 + (VAR_9 * 8);
 VAR_3->priv = VAR_2;
 VAR_3->buffer_nr = 0;

 if (VAR_2->firmware) {
  FUNC_8(VAR_2, 0x409840, 0x00000030);
  FUNC_8(VAR_2, 0x409500, 0x80000000 | VAR_6->addr >> 12);
  FUNC_8(VAR_2, 0x409504, 0x00000003);
  if (!FUNC_6(VAR_2, 0x409800, 0x00000010, 0x00000010))
   FUNC_4(VAR_2, "load_ctx timeout\n");

  FUNC_7(VAR_6, 0x8001c, 1);
  FUNC_7(VAR_6, 0x80020, 0);
  FUNC_7(VAR_6, 0x80028, 0);
  FUNC_7(VAR_6, 0x8002c, 0);
  VAR_4->flush(VAR_4);
  return 0;
 }


 FUNC_8(VAR_2, 0x409840, 0x80000000);
 FUNC_8(VAR_2, 0x409500, 0x80000000 | VAR_6->addr >> 12);
 FUNC_8(VAR_2, 0x409504, 0x00000001);
 if (!FUNC_6(VAR_2, 0x409800, 0x80000000, 0x80000000)) {
  FUNC_4(VAR_2, "HUB_SET_CHAN timeout\n");
  FUNC_9(VAR_2);
  FUNC_3(((void*)0), &VAR_3->chan);
  return -VAR_0;
 }

 return 0;
}
