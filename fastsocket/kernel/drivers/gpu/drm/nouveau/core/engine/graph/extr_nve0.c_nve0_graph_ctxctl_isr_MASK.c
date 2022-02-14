
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_graph_priv {int dummy; } ;


 int FUNC_0 (struct nvc0_graph_priv*,char*,...) ;
 int FUNC_1 (struct nvc0_graph_priv*,int) ;
 int FUNC_2 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_3 (struct nvc0_graph_priv*) ;

__attribute__((used)) static void
FUNC_4(struct nvc0_graph_priv *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0, 0x409c18);

 if (VAR_1 & 0x00000001)
  FUNC_0(VAR_0, "CTXCTRL ucode error\n");
 if (VAR_1 & 0x00080000)
  FUNC_0(VAR_0, "CTXCTRL watchdog timeout\n");
 if (VAR_1 & ~0x00080001)
  FUNC_0(VAR_0, "CTXCTRL 0x%08x\n", VAR_1);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0, 0x409c20, VAR_1);
}
