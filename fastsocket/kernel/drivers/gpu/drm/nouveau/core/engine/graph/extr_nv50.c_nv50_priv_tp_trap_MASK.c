
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_graph_priv {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 int FUNC_0 (struct nv50_graph_priv*,int,int) ;
 TYPE_1__* FUNC_1 (struct nv50_graph_priv*) ;
 int FUNC_2 (struct nv50_graph_priv*,char*,...) ;
 int FUNC_3 (struct nv50_graph_priv*,int) ;
 int FUNC_4 (struct nv50_graph_priv*,char*,char const*) ;
 int FUNC_5 (struct nv50_graph_priv*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv50_graph_priv *VAR_0, int VAR_1, u32 VAR_2,
  u32 VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = FUNC_3(VAR_0, 0x1540);
 int VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if (!(VAR_7 & (1 << VAR_8)))
   continue;
  if (FUNC_1(VAR_0)->chipset < 0xa0)
   VAR_10 = VAR_2 + (VAR_8 << 12);
  else
   VAR_10 = VAR_3 + (VAR_8 << 11);
  VAR_11 = FUNC_3(VAR_0, VAR_10) & 0x7fffffff;
  if (!VAR_11)
   continue;
  VAR_6++;
  switch (VAR_1) {
  case 6:
   if (VAR_4) {
    FUNC_2(VAR_0, "magic set %d:\n", VAR_8);
    for (VAR_9 = VAR_10 + 4; VAR_9 <= VAR_10 + 0x10; VAR_9 += 4)
     FUNC_2(VAR_0, "\t0x%08x: 0x%08x\n", VAR_9,
      FUNC_3(VAR_0, VAR_9));
   }
   break;
  case 7:
   if (VAR_11 & 0x04030000) {
    FUNC_0(VAR_0, VAR_8, VAR_4);
    VAR_11 &= ~0x04030000;
   }
   break;
  case 8:
   {
   u32 VAR_12 = FUNC_3(VAR_0, VAR_10 + 4);
   u32 VAR_13 = FUNC_3(VAR_0, VAR_10 + 8);
   u32 VAR_14 = FUNC_3(VAR_0, VAR_10 + 0xc);
   u32 VAR_15 = FUNC_3(VAR_0, VAR_10 + 0x10);
   u32 VAR_16 = FUNC_3(VAR_0, VAR_10 + 0x14);
   u32 VAR_17 = FUNC_3(VAR_0, VAR_10 + 0x18);
   u32 VAR_18 = FUNC_3(VAR_0, VAR_10 + 0x1c);

   if (VAR_11 & 0x00000010) {
    if (VAR_4) {
     FUNC_2(VAR_0, "TRAP_TPDMA_2D - TP %d - Unknown fault at address %02x%08x\n",
       VAR_8, VAR_14, VAR_13);
     FUNC_2(VAR_0, "TRAP_TPDMA_2D - TP %d - e0c: %08x, e18: %08x, e1c: %08x, e20: %08x, e24: %08x\n",
       VAR_8, VAR_12, VAR_15, VAR_16, VAR_17, VAR_18);
    }
    VAR_11 &= ~0x00000010;
   }

   if (VAR_11 & 0x00000040) {
    if (VAR_4) {
     FUNC_2(VAR_0, "TRAP_TPDMA_RT - TP %d - Unknown fault at address %02x%08x\n",
       VAR_8, VAR_14, VAR_13);
     FUNC_2(VAR_0, "TRAP_TPDMA_RT - TP %d - e0c: %08x, e18: %08x, e1c: %08x, e20: %08x, e24: %08x\n",
       VAR_8, VAR_12, VAR_15, VAR_16, VAR_17, VAR_18);
    }
    VAR_11 &= ~0x00000040;
   }

   if (VAR_11 & 0x00000080) {
    if (VAR_4) {
     if (VAR_15 & 0x80000000) {

      FUNC_2(VAR_0, "TRAP_TPDMA - TP %d - Global read fault at address %02x%08x\n",
        VAR_8, VAR_14, VAR_13 | ((VAR_15 >> 24) & 0x1f));
      VAR_15 &= ~0x1f000000;
     } else if (VAR_15 & 0xc) {

      FUNC_2(VAR_0, "TRAP_TPDMA - TP %d - Global write fault at address %02x%08x\n",
        VAR_8, VAR_14, VAR_13 | ((VAR_15 >> 7) & 0x1f));
      VAR_15 &= ~0x00000f80;
     } else {
      FUNC_2(VAR_0, "TRAP_TPDMA - TP %d - Unknown CUDA fault at address %02x%08x\n",
        VAR_8, VAR_14, VAR_13);
     }
     FUNC_2(VAR_0, "TRAP_TPDMA - TP %d - e0c: %08x, e18: %08x, e1c: %08x, e20: %08x, e24: %08x\n",
       VAR_8, VAR_12, VAR_15, VAR_16, VAR_17, VAR_18);
    }
    VAR_11 &= ~0x00000080;
   }
   }
   break;
  }
  if (VAR_11) {
   if (VAR_4)
    FUNC_2(VAR_0, "%s - TP%d: Unhandled ustatus 0x%08x\n", VAR_5, VAR_8, VAR_11);
  }
  FUNC_5(VAR_0, VAR_10, 0xc0000000);
 }

 if (!VAR_6 && VAR_4)
  FUNC_4(VAR_0, "%s - No TPs claiming errors?\n", VAR_5);
}
