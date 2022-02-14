
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_graph_priv {int gpc_nr; int rop_nr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvc0_graph_priv*,char*,int,...) ;
 int FUNC_2 (struct nvc0_graph_priv*,int) ;
 int FUNC_3 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_4 (struct nvc0_graph_priv*,int) ;

__attribute__((used)) static void
FUNC_5(struct nvc0_graph_priv *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0, 0x400108);
 int VAR_2, VAR_3;

 if (VAR_1 & 0x00000001) {
  u32 VAR_4 = FUNC_2(VAR_0, 0x404000);
  FUNC_1(VAR_0, "DISPATCH 0x%08x\n", VAR_4);
  FUNC_3(VAR_0, 0x404000, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000001);
  VAR_1 &= ~0x00000001;
 }

 if (VAR_1 & 0x00000002) {
  u32 VAR_5 = FUNC_2(VAR_0, 0x404600);
  FUNC_1(VAR_0, "M2MF 0x%08x\n", VAR_5);
  FUNC_3(VAR_0, 0x404600, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000002);
  VAR_1 &= ~0x00000002;
 }

 if (VAR_1 & 0x00000008) {
  u32 VAR_6 = FUNC_2(VAR_0, 0x408030);
  FUNC_1(VAR_0, "CCACHE 0x%08x\n", VAR_6);
  FUNC_3(VAR_0, 0x408030, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000008);
  VAR_1 &= ~0x00000008;
 }

 if (VAR_1 & 0x00000010) {
  u32 VAR_7 = FUNC_2(VAR_0, 0x405840);
  FUNC_1(VAR_0, "SHADER 0x%08x\n", VAR_7);
  FUNC_3(VAR_0, 0x405840, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000010);
  VAR_1 &= ~0x00000010;
 }

 if (VAR_1 & 0x00000040) {
  u32 VAR_8 = FUNC_2(VAR_0, 0x40601c);
  FUNC_1(VAR_0, "UNK6 0x%08x\n", VAR_8);
  FUNC_3(VAR_0, 0x40601c, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000040);
  VAR_1 &= ~0x00000040;
 }

 if (VAR_1 & 0x00000080) {
  u32 VAR_9 = FUNC_2(VAR_0, 0x404490);
  FUNC_1(VAR_0, "MACRO 0x%08x\n", VAR_9);
  FUNC_3(VAR_0, 0x404490, 0xc0000000);
  FUNC_3(VAR_0, 0x400108, 0x00000080);
  VAR_1 &= ~0x00000080;
 }

 if (VAR_1 & 0x01000000) {
  u32 VAR_10 = FUNC_2(VAR_0, 0x400118);
  for (VAR_3 = 0; VAR_10 && VAR_3 < VAR_0->gpc_nr; VAR_3++) {
   u32 VAR_11 = 0x00000001 << VAR_3;
   if (VAR_10 & VAR_11) {
    FUNC_4(VAR_0, VAR_3);
    FUNC_3(VAR_0, 0x400118, VAR_11);
    VAR_10 &= ~VAR_11;
   }
  }
  FUNC_3(VAR_0, 0x400108, 0x01000000);
  VAR_1 &= ~0x01000000;
 }

 if (VAR_1 & 0x02000000) {
  for (VAR_2 = 0; VAR_2 < VAR_0->rop_nr; VAR_2++) {
   u32 VAR_12 = FUNC_2(VAR_0, FUNC_0(VAR_2, 0x070));
   u32 VAR_13 = FUNC_2(VAR_0, FUNC_0(VAR_2, 0x144));
   FUNC_1(VAR_0, "ROP%d 0x%08x 0x%08x\n",
     VAR_2, VAR_12, VAR_13);
   FUNC_3(VAR_0, FUNC_0(VAR_2, 0x070), 0xc0000000);
   FUNC_3(VAR_0, FUNC_0(VAR_2, 0x144), 0xc0000000);
  }
  FUNC_3(VAR_0, 0x400108, 0x02000000);
  VAR_1 &= ~0x02000000;
 }

 if (VAR_1) {
  FUNC_1(VAR_0, "TRAP UNHANDLED 0x%08x\n", VAR_1);
  FUNC_3(VAR_0, 0x400108, VAR_1);
 }
}
