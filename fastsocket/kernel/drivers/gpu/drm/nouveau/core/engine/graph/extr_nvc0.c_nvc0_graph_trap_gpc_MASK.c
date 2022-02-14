
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_graph_priv {int* tpc_nr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvc0_graph_priv*,char*,int,int) ;
 int FUNC_2 (struct nvc0_graph_priv*,int ) ;
 int FUNC_3 (struct nvc0_graph_priv*,int ,int) ;
 int FUNC_4 (struct nvc0_graph_priv*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvc0_graph_priv *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_1, 0x2c90));
 int VAR_3;

 if (VAR_2 & 0x00000001) {
  u32 VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0420));
  FUNC_1(VAR_0, "GPC%d/PROP: 0x%08x\n", VAR_1, VAR_4);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x0420), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), 0x00000001);
  VAR_2 &= ~0x00000001;
 }

 if (VAR_2 & 0x00000002) {
  u32 VAR_5 = FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0900));
  FUNC_1(VAR_0, "GPC%d/ZCULL: 0x%08x\n", VAR_1, VAR_5);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x0900), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), 0x00000002);
  VAR_2 &= ~0x00000002;
 }

 if (VAR_2 & 0x00000004) {
  u32 VAR_6 = FUNC_2(VAR_0, FUNC_0(VAR_1, 0x1028));
  FUNC_1(VAR_0, "GPC%d/CCACHE: 0x%08x\n", VAR_1, VAR_6);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x1028), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), 0x00000004);
  VAR_2 &= ~0x00000004;
 }

 if (VAR_2 & 0x00000008) {
  u32 VAR_7 = FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0824));
  FUNC_1(VAR_0, "GPC%d/ESETUP: 0x%08x\n", VAR_1, VAR_7);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x0824), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), 0x00000008);
  VAR_2 &= ~0x00000009;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->tpc_nr[VAR_1]; VAR_3++) {
  u32 VAR_8 = 0x00010000 << VAR_3;
  if (VAR_2 & VAR_8) {
   FUNC_4(VAR_0, VAR_1, VAR_3);
   FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), VAR_8);
   VAR_2 &= ~VAR_8;
  }
 }

 if (VAR_2) {
  FUNC_1(VAR_0, "GPC%d/0x%08x: unknown\n", VAR_1, VAR_2);
  FUNC_3(VAR_0, FUNC_0(VAR_1, 0x2c90), VAR_2);
 }
}
