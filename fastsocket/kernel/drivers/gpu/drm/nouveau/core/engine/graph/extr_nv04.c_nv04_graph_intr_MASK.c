
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_graph_priv {int lock; struct nv04_graph_chan** chan; } ;
struct nv04_graph_chan {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_namedb {int dummy; } ;
struct nouveau_handle {int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nv04_graph_chan*) ;
 struct nouveau_handle* FUNC_2 (struct nouveau_namedb*,int) ;
 int FUNC_3 (struct nouveau_handle*) ;
 int FUNC_4 (struct nv04_graph_priv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct nv04_graph_priv*,char*,...) ;
 int FUNC_7 (struct nv04_graph_chan*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nv04_graph_priv*,int) ;
 int FUNC_10 (struct nv04_graph_priv*,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_14(struct nouveau_subdev *VAR_13)
{
 struct nv04_graph_priv *VAR_14 = (void *)VAR_13;
 struct nv04_graph_chan *VAR_15 = ((void*)0);
 struct nouveau_namedb *VAR_16 = ((void*)0);
 struct nouveau_handle *VAR_17 = ((void*)0);
 u32 VAR_18 = FUNC_9(VAR_14, VAR_0);
 u32 VAR_19 = FUNC_9(VAR_14, VAR_1);
 u32 VAR_20 = FUNC_9(VAR_14, VAR_3);
 u32 VAR_21 = FUNC_9(VAR_14, VAR_5);
 u32 VAR_22 = (VAR_21 & 0x0f000000) >> 24;
 u32 VAR_23 = (VAR_21 & 0x0000e000) >> 13;
 u32 VAR_24 = (VAR_21 & 0x00001ffc);
 u32 VAR_25 = FUNC_9(VAR_14, VAR_6);
 u32 VAR_26 = FUNC_9(VAR_14, 0x400180 + VAR_23 * 4) & 0xff;
 u32 VAR_27 = (FUNC_9(VAR_14, 0x40016c) & 0xffff) << 4;
 u32 VAR_28 = VAR_18;
 unsigned long VAR_29;

 FUNC_12(&VAR_14->lock, VAR_29);
 VAR_15 = VAR_14->chan[VAR_22];
 if (VAR_15)
  VAR_16 = (void *)FUNC_8(FUNC_7(VAR_15), VAR_7);
 FUNC_13(&VAR_14->lock, VAR_29);

 if (VAR_18 & VAR_9) {
  if (VAR_15 && (VAR_19 & VAR_2)) {
   VAR_17 = FUNC_2(VAR_16, VAR_27);
   if (VAR_17 && !FUNC_5(VAR_17->object, VAR_24, VAR_25))
    VAR_28 &= ~VAR_9;
  }
 }

 if (VAR_18 & VAR_8) {
  FUNC_10(VAR_14, VAR_0, VAR_8);
  VAR_18 &= ~VAR_8;
  VAR_28 &= ~VAR_8;
  FUNC_4(VAR_14);
 }

 FUNC_10(VAR_14, VAR_0, VAR_18);
 FUNC_10(VAR_14, VAR_4, 0x00000001);

 if (VAR_28) {
  FUNC_6(VAR_14, "%s", "");
  FUNC_0(VAR_10, VAR_28);
  FUNC_11(" nsource:");
  FUNC_0(VAR_11, VAR_19);
  FUNC_11(" nstatus:");
  FUNC_0(VAR_12, VAR_20);
  FUNC_11("\n");
  FUNC_6(VAR_14,
    "ch %d [%s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
    VAR_22, FUNC_1(VAR_15), VAR_23, VAR_26, VAR_24,
    VAR_25);
 }

 FUNC_3(VAR_17);
}
