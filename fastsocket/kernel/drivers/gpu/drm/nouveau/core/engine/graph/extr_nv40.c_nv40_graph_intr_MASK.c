
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv40_graph_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int object; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_2 (struct nouveau_engine*,int) ;
 int FUNC_3 (struct nouveau_object*) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_subdev*) ;
 struct nouveau_handle* FUNC_5 (struct nouveau_object*,int) ;
 int FUNC_6 (struct nouveau_handle*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int,int) ;
 struct nouveau_engine* FUNC_8 (struct nouveau_subdev*) ;
 int FUNC_9 (struct nv40_graph_priv*,char*,...) ;
 int FUNC_10 (struct nv40_graph_priv*,int,int ,int ) ;
 int FUNC_11 (struct nv40_graph_priv*,int) ;
 int FUNC_12 (struct nv40_graph_priv*,int,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct nouveau_fifo*,struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_15(struct nouveau_subdev *VAR_12)
{
 struct nouveau_fifo *VAR_13 = FUNC_4(VAR_12);
 struct nouveau_engine *VAR_14 = FUNC_8(VAR_12);
 struct nouveau_object *VAR_15;
 struct nouveau_handle *VAR_16 = ((void*)0);
 struct nv40_graph_priv *VAR_17 = (void *)VAR_12;
 u32 VAR_18 = FUNC_11(VAR_17, VAR_0);
 u32 VAR_19 = FUNC_11(VAR_17, VAR_1);
 u32 VAR_20 = FUNC_11(VAR_17, VAR_4);
 u32 VAR_21 = FUNC_11(VAR_17, 0x40032c) & 0x000fffff;
 u32 VAR_22 = FUNC_11(VAR_17, VAR_6);
 u32 VAR_23 = (VAR_22 & 0x00070000) >> 16;
 u32 VAR_24 = (VAR_22 & 0x00001ffc);
 u32 VAR_25 = FUNC_11(VAR_17, VAR_7);
 u32 VAR_26 = FUNC_11(VAR_17, 0x400160 + VAR_23 * 4) & 0xffff;
 u32 VAR_27 = VAR_18;
 int VAR_28;

 VAR_15 = FUNC_2(VAR_14, VAR_21);
 VAR_28 = VAR_13->chid(VAR_13, VAR_15);

 if (VAR_18 & VAR_8) {
  if (VAR_19 & VAR_3) {
   VAR_16 = FUNC_5(VAR_15, VAR_26);
   if (VAR_16 && !FUNC_7(VAR_16->object, VAR_24, VAR_25))
    VAR_27 &= ~VAR_8;
   FUNC_6(VAR_16);
  }

  if (VAR_19 & VAR_2) {
   FUNC_10(VAR_17, 0x402000, 0, 0);
  }
 }

 FUNC_12(VAR_17, VAR_0, VAR_18);
 FUNC_12(VAR_17, VAR_5, 0x00000001);

 if (VAR_27) {
  FUNC_9(VAR_17, "%s", "");
  FUNC_0(VAR_10, VAR_27);
  FUNC_13(" nsource:");
  FUNC_0(VAR_9, VAR_19);
  FUNC_13(" nstatus:");
  FUNC_0(VAR_11, VAR_20);
  FUNC_13("\n");
  FUNC_9(VAR_17,
    "ch %d [0x%08x %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
    VAR_28, VAR_21 << 4, FUNC_1(VAR_15), VAR_23,
    VAR_26, VAR_24, VAR_25);
 }

 FUNC_3(VAR_15);
}
