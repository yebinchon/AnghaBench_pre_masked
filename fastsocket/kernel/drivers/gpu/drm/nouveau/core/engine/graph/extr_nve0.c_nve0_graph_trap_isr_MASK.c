
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvc0_graph_priv {int rop_nr; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nvc0_graph_priv*,char*,int,int,int ,int,...) ;
 int FUNC_3 (struct nvc0_graph_priv*,int) ;
 int FUNC_4 (struct nvc0_graph_priv*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvc0_graph_priv *VAR_0, int VAR_1, u64 VAR_2,
  struct nouveau_object *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_0, 0x400108);
 int VAR_5;

 if (VAR_4 & 0x00000001) {
  u32 VAR_6 = FUNC_3(VAR_0, 0x404000);
  FUNC_2(VAR_0, "DISPATCH ch %d [0x%010llx %s] 0x%08x\n",
    VAR_1, VAR_2, FUNC_1(VAR_3), VAR_6);
  FUNC_4(VAR_0, 0x404000, 0xc0000000);
  FUNC_4(VAR_0, 0x400108, 0x00000001);
  VAR_4 &= ~0x00000001;
 }

 if (VAR_4 & 0x00000010) {
  u32 VAR_7 = FUNC_3(VAR_0, 0x405840);
  FUNC_2(VAR_0, "SHADER ch %d [0x%010llx %s] 0x%08x\n",
    VAR_1, VAR_2, FUNC_1(VAR_3), VAR_7);
  FUNC_4(VAR_0, 0x405840, 0xc0000000);
  FUNC_4(VAR_0, 0x400108, 0x00000010);
  VAR_4 &= ~0x00000010;
 }

 if (VAR_4 & 0x02000000) {
  for (VAR_5 = 0; VAR_5 < VAR_0->rop_nr; VAR_5++) {
   u32 VAR_8 = FUNC_3(VAR_0, FUNC_0(VAR_5, 0x070));
   u32 VAR_9 = FUNC_3(VAR_0, FUNC_0(VAR_5, 0x144));
   FUNC_2(VAR_0,
     "ROP%d ch %d [0x%010llx %s] 0x%08x 0x%08x\n",
     VAR_5, VAR_1, VAR_2, FUNC_1(VAR_3),
     VAR_8, VAR_9);
   FUNC_4(VAR_0, FUNC_0(VAR_5, 0x070), 0xc0000000);
   FUNC_4(VAR_0, FUNC_0(VAR_5, 0x144), 0xc0000000);
  }
  FUNC_4(VAR_0, 0x400108, 0x02000000);
  VAR_4 &= ~0x02000000;
 }

 if (VAR_4) {
  FUNC_2(VAR_0, "TRAP ch %d [0x%010llx %s] 0x%08x\n",
    VAR_1, VAR_2, FUNC_1(VAR_3), VAR_4);
  FUNC_4(VAR_0, 0x400108, VAR_4);
 }
}
