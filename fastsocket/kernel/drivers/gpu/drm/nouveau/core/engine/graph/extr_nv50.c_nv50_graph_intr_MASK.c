
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nv50_graph_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int object; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_2 (struct nouveau_engine*,int) ;
 int FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (int ,int) ;
 struct nouveau_fifo* FUNC_5 (struct nouveau_subdev*) ;
 struct nouveau_handle* FUNC_6 (struct nouveau_object*,int) ;
 int FUNC_7 (struct nouveau_handle*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct nv50_graph_priv*,int,int,int,struct nouveau_object*) ;
 int FUNC_9 (int ,int,int) ;
 struct nouveau_engine* FUNC_10 (struct nouveau_subdev*) ;
 int FUNC_11 (struct nv50_graph_priv*,char*,...) ;
 int FUNC_12 (struct nv50_graph_priv*,int) ;
 int FUNC_13 (struct nv50_graph_priv*,int,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct nouveau_fifo*,struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_16(struct nouveau_subdev *VAR_2)
{
 struct nouveau_fifo *VAR_3 = FUNC_5(VAR_2);
 struct nouveau_engine *VAR_4 = FUNC_10(VAR_2);
 struct nouveau_object *VAR_5;
 struct nouveau_handle *VAR_6 = ((void*)0);
 struct nv50_graph_priv *VAR_7 = (void *)VAR_2;
 u32 VAR_8 = FUNC_12(VAR_7, 0x400100);
 u32 VAR_9 = FUNC_12(VAR_7, 0x40032c) & 0x0fffffff;
 u32 VAR_10 = FUNC_12(VAR_7, 0x400704);
 u32 VAR_11 = (VAR_10 & 0x00070000) >> 16;
 u32 VAR_12 = (VAR_10 & 0x00001ffc);
 u32 VAR_13 = FUNC_12(VAR_7, 0x400708);
 u32 VAR_14 = FUNC_12(VAR_7, 0x400814);
 u32 VAR_15 = VAR_8;
 int VAR_16;

 VAR_5 = FUNC_2(VAR_4, VAR_9);
 VAR_16 = VAR_3->chid(VAR_3, VAR_5);

 if (VAR_8 & 0x00000010) {
  VAR_6 = FUNC_6(VAR_5, VAR_14);
  if (VAR_6 && !FUNC_9(VAR_6->object, VAR_12, VAR_13))
   VAR_15 &= ~0x00000010;
  FUNC_7(VAR_6);
 }

 if (VAR_15 & 0x00100000) {
  u32 VAR_17 = FUNC_12(VAR_7, 0x400110);
  FUNC_11(VAR_7, "DATA_ERROR ");
  FUNC_4(VAR_0, VAR_17);
  FUNC_14("\n");
 }

 if (VAR_8 & 0x00200000) {
  if (!FUNC_8(VAR_7, VAR_15, VAR_16, (u64)VAR_9 << 12,
    VAR_5))
   VAR_15 &= ~0x00200000;
 }

 FUNC_13(VAR_7, 0x400100, VAR_8);
 FUNC_13(VAR_7, 0x400500, 0x00010001);

 if (VAR_15) {
  FUNC_11(VAR_7, "%s", "");
  FUNC_0(VAR_1, VAR_15);
  FUNC_14("\n");
  FUNC_11(VAR_7,
    "ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
    VAR_16, (u64)VAR_9 << 12, FUNC_1(VAR_5),
    VAR_11, VAR_14, VAR_12, VAR_13);
 }

 if (FUNC_12(VAR_7, 0x400824) & (1 << 31))
  FUNC_13(VAR_7, 0x400824, FUNC_12(VAR_7, 0x400824) & ~(1 << 31));

 FUNC_3(VAR_5);
}
