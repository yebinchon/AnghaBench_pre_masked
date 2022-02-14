
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv20_graph_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int object; } ;
struct nouveau_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_2 (struct nouveau_engine*,int) ;
 int FUNC_3 (struct nouveau_object*) ;
 struct nouveau_handle* FUNC_4 (struct nouveau_object*,int) ;
 int FUNC_5 (struct nouveau_handle*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int,int) ;
 struct nouveau_engine* FUNC_7 (struct nouveau_subdev*) ;
 int FUNC_8 (struct nv20_graph_priv*,char*,...) ;
 int FUNC_9 (struct nv20_graph_priv*,int) ;
 int FUNC_10 (struct nv20_graph_priv*,int,int) ;
 int FUNC_11 (char*) ;

void
FUNC_12(struct nouveau_subdev *VAR_11)
{
 struct nouveau_engine *VAR_12 = FUNC_7(VAR_11);
 struct nouveau_object *VAR_13;
 struct nouveau_handle *VAR_14;
 struct nv20_graph_priv *VAR_15 = (void *)VAR_11;
 u32 VAR_16 = FUNC_9(VAR_15, VAR_0);
 u32 VAR_17 = FUNC_9(VAR_15, VAR_1);
 u32 VAR_18 = FUNC_9(VAR_15, VAR_3);
 u32 VAR_19 = FUNC_9(VAR_15, VAR_5);
 u32 VAR_20 = (VAR_19 & 0x01f00000) >> 20;
 u32 VAR_21 = (VAR_19 & 0x00070000) >> 16;
 u32 VAR_22 = (VAR_19 & 0x00001ffc);
 u32 VAR_23 = FUNC_9(VAR_15, VAR_6);
 u32 VAR_24 = FUNC_9(VAR_15, 0x400160 + VAR_21 * 4) & 0xfff;
 u32 VAR_25 = VAR_16;

 VAR_13 = FUNC_2(VAR_12, VAR_20);
 if (VAR_16 & VAR_7) {
  if (VAR_17 & VAR_2) {
   VAR_14 = FUNC_4(VAR_13, VAR_24);
   if (VAR_14 && !FUNC_6(VAR_14->object, VAR_22, VAR_23))
    VAR_25 &= ~VAR_7;
   FUNC_5(VAR_14);
  }
 }

 FUNC_10(VAR_15, VAR_0, VAR_16);
 FUNC_10(VAR_15, VAR_4, 0x00000001);

 if (VAR_25) {
  FUNC_8(VAR_15, "%s", "");
  FUNC_0(VAR_9, VAR_25);
  FUNC_11(" nsource:");
  FUNC_0(VAR_8, VAR_17);
  FUNC_11(" nstatus:");
  FUNC_0(VAR_10, VAR_18);
  FUNC_11("\n");
  FUNC_8(VAR_15,
    "ch %d [%s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
    VAR_20, FUNC_1(VAR_13), VAR_21, VAR_24, VAR_22,
    VAR_23);
 }

 FUNC_3(VAR_13);
}
