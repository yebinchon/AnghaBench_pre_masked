
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvc0_graph_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int object; } ;
struct nouveau_fifo {int (* chid ) (struct nouveau_fifo*,struct nouveau_object*) ;} ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (int ,int) ;
 struct nouveau_fifo* FUNC_4 (struct nouveau_subdev*) ;
 struct nouveau_handle* FUNC_5 (struct nouveau_object*,int) ;
 int FUNC_6 (struct nouveau_handle*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 struct nouveau_engine* FUNC_8 (struct nouveau_subdev*) ;
 int FUNC_9 (struct nvc0_graph_priv*,char*,...) ;
 int FUNC_10 (struct nvc0_graph_priv*,int) ;
 int FUNC_11 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_12 (struct nvc0_graph_priv*) ;
 int FUNC_13 (struct nvc0_graph_priv*) ;
 int FUNC_14 (char*,int,int,int ,int,int,int,int) ;
 int FUNC_15 (struct nouveau_fifo*,struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_16(struct nouveau_subdev *VAR_1)
{
 struct nouveau_fifo *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_engine *VAR_3 = FUNC_8(VAR_1);
 struct nouveau_object *VAR_4;
 struct nouveau_handle *VAR_5;
 struct nvc0_graph_priv *VAR_6 = (void *)VAR_1;
 u64 VAR_7 = FUNC_10(VAR_6, 0x409b00) & 0x0fffffff;
 u32 VAR_8 = FUNC_10(VAR_6, 0x400100);
 u32 VAR_9 = FUNC_10(VAR_6, 0x400704);
 u32 VAR_10 = (VAR_9 & 0x00003ffc);
 u32 VAR_11 = (VAR_9 & 0x00070000) >> 16;
 u32 VAR_12 = FUNC_10(VAR_6, 0x400708);
 u32 VAR_13 = FUNC_10(VAR_6, 0x400110);
 u32 VAR_14 = FUNC_10(VAR_6, 0x404200 + (VAR_11 * 4));
 int VAR_15;

 VAR_4 = FUNC_1(VAR_3, VAR_7);
 VAR_15 = VAR_2->chid(VAR_2, VAR_4);

 if (VAR_8 & 0x00000010) {
  VAR_5 = FUNC_5(VAR_4, VAR_14);
  if (!VAR_5 || FUNC_7(VAR_5->object, VAR_10, VAR_12)) {
   FUNC_9(VAR_6,
     "ILLEGAL_MTHD ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
     VAR_15, VAR_7 << 12, FUNC_0(VAR_4),
     VAR_11, VAR_14, VAR_10, VAR_12);
  }
  FUNC_6(VAR_5);
  FUNC_11(VAR_6, 0x400100, 0x00000010);
  VAR_8 &= ~0x00000010;
 }

 if (VAR_8 & 0x00000020) {
  FUNC_9(VAR_6,
    "ILLEGAL_CLASS ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
    VAR_15, VAR_7 << 12, FUNC_0(VAR_4), VAR_11,
    VAR_14, VAR_10, VAR_12);
  FUNC_11(VAR_6, 0x400100, 0x00000020);
  VAR_8 &= ~0x00000020;
 }

 if (VAR_8 & 0x00100000) {
  FUNC_9(VAR_6, "DATA_ERROR [");
  FUNC_3(VAR_0, VAR_13);
  FUNC_14("] ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x\n",
   VAR_15, VAR_7 << 12, FUNC_0(VAR_4), VAR_11,
   VAR_14, VAR_10, VAR_12);
  FUNC_11(VAR_6, 0x400100, 0x00100000);
  VAR_8 &= ~0x00100000;
 }

 if (VAR_8 & 0x00200000) {
  FUNC_9(VAR_6, "TRAP ch %d [0x%010llx %s]\n", VAR_15, VAR_7 << 12,
    FUNC_0(VAR_4));
  FUNC_13(VAR_6);
  FUNC_11(VAR_6, 0x400100, 0x00200000);
  VAR_8 &= ~0x00200000;
 }

 if (VAR_8 & 0x00080000) {
  FUNC_12(VAR_6);
  FUNC_11(VAR_6, 0x400100, 0x00080000);
  VAR_8 &= ~0x00080000;
 }

 if (VAR_8) {
  FUNC_9(VAR_6, "unknown stat 0x%08x\n", VAR_8);
  FUNC_11(VAR_6, 0x400100, VAR_8);
 }

 FUNC_11(VAR_6, 0x400500, 0x00010001);
 FUNC_2(VAR_4);
}
