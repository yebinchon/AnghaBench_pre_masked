
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nve0_fifo_priv {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_enum {scalar_t__ data2; } ;
struct nouveau_engine {int dummy; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 struct nouveau_engine* FUNC_3 (struct nve0_fifo_priv*,scalar_t__) ;
 struct nouveau_enum* FUNC_4 (int ,int) ;
 int FUNC_5 (struct nve0_fifo_priv*,char*,char*,int) ;
 int FUNC_6 (struct nve0_fifo_priv*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct nve0_fifo_priv *VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_6(VAR_4, 0x2800 + (VAR_5 * 0x10));
 u32 VAR_7 = FUNC_6(VAR_4, 0x2804 + (VAR_5 * 0x10));
 u32 VAR_8 = FUNC_6(VAR_4, 0x2808 + (VAR_5 * 0x10));
 u32 VAR_9 = FUNC_6(VAR_4, 0x280c + (VAR_5 * 0x10));
 u32 VAR_10 = (VAR_9 & 0x00001f00) >> 8;
 const struct nouveau_enum *VAR_11;
 struct nouveau_engine *VAR_12;
 struct nouveau_object *VAR_13 = ((void*)0);

 FUNC_5(VAR_4, "PFIFO: %s fault at 0x%010llx [", (VAR_9 & 0x00000080) ?
         "write" : "read", (u64)VAR_8 << 32 | VAR_7);
 FUNC_4(VAR_2, VAR_9 & 0x0000000f);
 FUNC_7("] from ");
 VAR_11 = FUNC_4(VAR_3, VAR_5);
 if (VAR_9 & 0x00000040) {
  FUNC_7("/");
  FUNC_4(VAR_1, VAR_10);
 } else {
  FUNC_7("/GPC%d/", (VAR_9 & 0x1f000000) >> 24);
  FUNC_4(VAR_0, VAR_10);
 }

 if (VAR_11 && VAR_11->data2) {
  VAR_12 = FUNC_3(VAR_4, VAR_11->data2);
  if (VAR_12)
   VAR_13 = FUNC_1(VAR_12, VAR_6);

 }

 FUNC_7(" on channel 0x%010llx [%s]\n", (u64)VAR_6 << 12,
   FUNC_0(VAR_13));

 FUNC_2(VAR_13);
}
