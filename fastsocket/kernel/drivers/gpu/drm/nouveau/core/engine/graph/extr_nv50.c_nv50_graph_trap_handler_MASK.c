
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nv50_graph_priv {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nv50_graph_priv*,int,int,int,int,char*) ;
 int FUNC_3 (struct nv50_graph_priv*,char*,...) ;
 int FUNC_4 (struct nv50_graph_priv*,int) ;
 int FUNC_5 (struct nv50_graph_priv*,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct nv50_graph_priv *VAR_4, u32 VAR_5,
   int VAR_6, u64 VAR_7, struct nouveau_object *VAR_8)
{
 u32 VAR_9 = FUNC_4(VAR_4, 0x400108);
 u32 VAR_10;

 if (!VAR_9 && VAR_5) {
  FUNC_3(VAR_4, "TRAP: no units reporting traps?\n");
  return 1;
 }




 if (VAR_9 & 0x001) {
  VAR_10 = FUNC_4(VAR_4, 0x400804) & 0x7fffffff;
  if (!VAR_10 && VAR_5) {
   FUNC_3(VAR_4, "TRAP_DISPATCH - no ustatus?\n");
  }

  FUNC_5(VAR_4, 0x400500, 0x00000000);


  if (VAR_10 & 0x00000001) {
   u32 VAR_11 = FUNC_4(VAR_4, 0x400808);
   u32 VAR_12 = (VAR_11 & 0x00070000) >> 16;
   u32 VAR_13 = (VAR_11 & 0x00001ffc);
   u32 VAR_14 = FUNC_4(VAR_4, 0x40080c);
   u32 VAR_15 = FUNC_4(VAR_4, 0x400810);
   u32 VAR_16 = FUNC_4(VAR_4, 0x400814);
   u32 VAR_17 = FUNC_4(VAR_4, 0x400848);

   FUNC_3(VAR_4, "TRAP DISPATCH_FAULT\n");
   if (VAR_5 && (VAR_11 & 0x80000000)) {
    FUNC_3(VAR_4,
      "ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x%08x 400808 0x%08x 400848 0x%08x\n",
      VAR_6, VAR_7,
      FUNC_1(VAR_8), VAR_12,
      VAR_16, VAR_13, VAR_15, VAR_14, VAR_11, VAR_17);
   } else
   if (VAR_5) {
    FUNC_3(VAR_4, "no stuck command?\n");
   }

   FUNC_5(VAR_4, 0x400808, 0);
   FUNC_5(VAR_4, 0x4008e8, FUNC_4(VAR_4, 0x4008e8) & 3);
   FUNC_5(VAR_4, 0x400848, 0);
   VAR_10 &= ~0x00000001;
  }

  if (VAR_10 & 0x00000002) {
   u32 VAR_18 = FUNC_4(VAR_4, 0x40084c);
   u32 VAR_19 = (VAR_18 & 0x00070000) >> 16;
   u32 VAR_20 = (VAR_18 & 0x00001ffc);
   u32 VAR_21 = FUNC_4(VAR_4, 0x40085c);
   u32 VAR_22 = FUNC_4(VAR_4, 0x400814);

   FUNC_3(VAR_4, "TRAP DISPATCH_QUERY\n");
   if (VAR_5 && (VAR_18 & 0x80000000)) {
    FUNC_3(VAR_4,
      "ch %d [0x%010llx %s] subc %d class 0x%04x mthd 0x%04x data 0x%08x 40084c 0x%08x\n",
      VAR_6, VAR_7,
      FUNC_1(VAR_8), VAR_19,
      VAR_22, VAR_20, VAR_21, VAR_18);
   } else
   if (VAR_5) {
    FUNC_3(VAR_4, "no stuck command?\n");
   }

   FUNC_5(VAR_4, 0x40084c, 0);
   VAR_10 &= ~0x00000002;
  }

  if (VAR_10 && VAR_5) {
   FUNC_3(VAR_4, "TRAP_DISPATCH (unknown "
          "0x%08x)\n", VAR_10);
  }

  FUNC_5(VAR_4, 0x400804, 0xc0000000);
  FUNC_5(VAR_4, 0x400108, 0x001);
  VAR_9 &= ~0x001;
  if (!VAR_9)
   return 0;
 }


 if (VAR_9 & 0x002) {
  u32 VAR_23 = FUNC_4(VAR_4, 0x406800) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_4, "TRAP_M2MF");
   FUNC_0(VAR_1, VAR_23);
   FUNC_6("\n");
   FUNC_3(VAR_4, "TRAP_M2MF %08x %08x %08x %08x\n",
    FUNC_4(VAR_4, 0x406804), FUNC_4(VAR_4, 0x406808),
    FUNC_4(VAR_4, 0x40680c), FUNC_4(VAR_4, 0x406810));

  }


  FUNC_5(VAR_4, 0x400040, 2);
  FUNC_5(VAR_4, 0x400040, 0);
  FUNC_5(VAR_4, 0x406800, 0xc0000000);
  FUNC_5(VAR_4, 0x400108, 0x002);
  VAR_9 &= ~0x002;
 }


 if (VAR_9 & 0x004) {
  u32 VAR_24 = FUNC_4(VAR_4, 0x400c04) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_4, "TRAP_VFETCH");
   FUNC_0(VAR_3, VAR_24);
   FUNC_6("\n");
   FUNC_3(VAR_4, "TRAP_VFETCH %08x %08x %08x %08x\n",
    FUNC_4(VAR_4, 0x400c00), FUNC_4(VAR_4, 0x400c08),
    FUNC_4(VAR_4, 0x400c0c), FUNC_4(VAR_4, 0x400c10));
  }

  FUNC_5(VAR_4, 0x400c04, 0xc0000000);
  FUNC_5(VAR_4, 0x400108, 0x004);
  VAR_9 &= ~0x004;
 }


 if (VAR_9 & 0x008) {
  VAR_10 = FUNC_4(VAR_4, 0x401800) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_4, "TRAP_STRMOUT");
   FUNC_0(VAR_2, VAR_10);
   FUNC_6("\n");
   FUNC_3(VAR_4, "TRAP_STRMOUT %08x %08x %08x %08x\n",
    FUNC_4(VAR_4, 0x401804), FUNC_4(VAR_4, 0x401808),
    FUNC_4(VAR_4, 0x40180c), FUNC_4(VAR_4, 0x401810));

  }


  FUNC_5(VAR_4, 0x400040, 0x80);
  FUNC_5(VAR_4, 0x400040, 0);
  FUNC_5(VAR_4, 0x401800, 0xc0000000);
  FUNC_5(VAR_4, 0x400108, 0x008);
  VAR_9 &= ~0x008;
 }


 if (VAR_9 & 0x010) {
  VAR_10 = FUNC_4(VAR_4, 0x405018) & 0x7fffffff;
  if (VAR_5) {
   FUNC_3(VAR_4, "TRAP_CCACHE");
   FUNC_0(VAR_0, VAR_10);
   FUNC_6("\n");
   FUNC_3(VAR_4, "TRAP_CCACHE %08x %08x %08x %08x"
         " %08x %08x %08x\n",
    FUNC_4(VAR_4, 0x405000), FUNC_4(VAR_4, 0x405004),
    FUNC_4(VAR_4, 0x405008), FUNC_4(VAR_4, 0x40500c),
    FUNC_4(VAR_4, 0x405010), FUNC_4(VAR_4, 0x405014),
    FUNC_4(VAR_4, 0x40501c));

  }

  FUNC_5(VAR_4, 0x405018, 0xc0000000);
  FUNC_5(VAR_4, 0x400108, 0x010);
  VAR_9 &= ~0x010;
 }




 if (VAR_9 & 0x20) {
  VAR_10 = FUNC_4(VAR_4, 0x402000) & 0x7fffffff;
  if (VAR_5)
   FUNC_3(VAR_4, "TRAP_UNKC04 0x%08x\n", VAR_10);
  FUNC_5(VAR_4, 0x402000, 0xc0000000);

 }


 if (VAR_9 & 0x040) {
  FUNC_2(VAR_4, 6, 0x408900, 0x408600, VAR_5,
        "TRAP_TEXTURE");
  FUNC_5(VAR_4, 0x400108, 0x040);
  VAR_9 &= ~0x040;
 }


 if (VAR_9 & 0x080) {
  FUNC_2(VAR_4, 7, 0x408314, 0x40831c, VAR_5,
        "TRAP_MP");
  FUNC_5(VAR_4, 0x400108, 0x080);
  VAR_9 &= ~0x080;
 }



 if (VAR_9 & 0x100) {
  FUNC_2(VAR_4, 8, 0x408e08, 0x408708, VAR_5,
        "TRAP_TPDMA");
  FUNC_5(VAR_4, 0x400108, 0x100);
  VAR_9 &= ~0x100;
 }

 if (VAR_9) {
  if (VAR_5)
   FUNC_3(VAR_4, "TRAP: unknown 0x%08x\n", VAR_9);
  FUNC_5(VAR_4, 0x400108, VAR_9);
 }

 return 1;
}
