
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_graph_priv {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct nv50_graph_priv*) ;
 int FUNC_2 (struct nv50_graph_priv*,char*,int,...) ;
 int FUNC_3 (struct nv50_graph_priv*,int) ;
 int FUNC_4 (struct nv50_graph_priv*,int,int) ;
 int FUNC_5 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv50_graph_priv *VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_1, 0x1540);
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if (!(VAR_4 & 1 << (VAR_11+24)))
   continue;
  if (FUNC_1(VAR_1)->chipset < 0xa0)
   VAR_5 = 0x408200 + (VAR_2 << 12) + (VAR_11 << 7);
  else
   VAR_5 = 0x408100 + (VAR_2 << 11) + (VAR_11 << 7);
  VAR_6 = FUNC_3(VAR_1, VAR_5 + 0x10);
  VAR_7 = FUNC_3(VAR_1, VAR_5 + 0x14);
  if (!VAR_7)
   continue;
  if (VAR_3) {
   FUNC_3(VAR_1, VAR_5 + 0x20);
   VAR_8 = FUNC_3(VAR_1, VAR_5 + 0x24);
   VAR_9 = FUNC_3(VAR_1, VAR_5 + 0x70);
   VAR_10 = FUNC_3(VAR_1, VAR_5 + 0x74);
   FUNC_2(VAR_1, "TRAP_MP_EXEC - "
     "TP %d MP %d: ", VAR_2, VAR_11);
   FUNC_0(VAR_0, VAR_7);
   FUNC_5(" at %06x warp %d, opcode %08x %08x\n",
     VAR_8&0xffffff, VAR_8 >> 24,
     VAR_9, VAR_10);
  }
  FUNC_4(VAR_1, VAR_5 + 0x10, VAR_6);
  FUNC_4(VAR_1, VAR_5 + 0x14, 0);
  VAR_12++;
 }
 if (!VAR_12 && VAR_3)
  FUNC_2(VAR_1, "TRAP_MP_EXEC - TP %d: "
    "No MPs claiming errors?\n", VAR_2);
}
