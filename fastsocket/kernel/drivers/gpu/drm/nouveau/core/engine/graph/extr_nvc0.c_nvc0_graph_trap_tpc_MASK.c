
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_graph_priv {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvc0_graph_priv*,char*,int,int,int,...) ;
 int FUNC_2 (struct nvc0_graph_priv*,int ) ;
 int FUNC_3 (struct nvc0_graph_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nvc0_graph_priv *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508));

 if (VAR_3 & 0x00000001) {
  u32 VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0224));
  FUNC_1(VAR_0, "GPC%d/TPC%d/TEX: 0x%08x\n", VAR_1, VAR_2, VAR_4);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0224), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508), 0x00000001);
  VAR_3 &= ~0x00000001;
 }

 if (VAR_3 & 0x00000002) {
  u32 VAR_5 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0644));
  u32 VAR_6 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x064c));
  FUNC_1(VAR_0, "GPC%d/TPC%d/MP: 0x%08x 0x%08x\n",
          VAR_1, VAR_2, VAR_5, VAR_6);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0644), 0x001ffffe);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x064c), 0x0000000f);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508), 0x00000002);
  VAR_3 &= ~0x00000002;
 }

 if (VAR_3 & 0x00000004) {
  u32 VAR_7 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0084));
  FUNC_1(VAR_0, "GPC%d/TPC%d/POLY: 0x%08x\n", VAR_1, VAR_2, VAR_7);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0084), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508), 0x00000004);
  VAR_3 &= ~0x00000004;
 }

 if (VAR_3 & 0x00000008) {
  u32 VAR_8 = FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_2, 0x048c));
  FUNC_1(VAR_0, "GPC%d/TPC%d/L1C: 0x%08x\n", VAR_1, VAR_2, VAR_8);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x048c), 0xc0000000);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508), 0x00000008);
  VAR_3 &= ~0x00000008;
 }

 if (VAR_3) {
  FUNC_1(VAR_0, "GPC%d/TPC%d/0x%08x: unknown\n", VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2, 0x0508), VAR_3);
 }
}
