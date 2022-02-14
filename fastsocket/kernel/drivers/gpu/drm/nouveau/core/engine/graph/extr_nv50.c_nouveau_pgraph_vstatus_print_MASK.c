
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_graph_priv {int dummy; } ;


 int FUNC_0 (struct nv50_graph_priv*,char*,int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct nv50_graph_priv *VAR_0, int VAR_1,
  const char *const VAR_2[], u32 VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "PGRAPH_VSTATUS%d: 0x%08x", VAR_1, VAR_3);

 for (VAR_4 = 0; VAR_2[VAR_4] && VAR_3; VAR_4++) {
  if ((VAR_3 & 7) == 1)
   FUNC_1(" %s", VAR_2[VAR_4]);
  VAR_3 >>= 3;
 }
 if (VAR_3)
  FUNC_1(" (invalid: 0x%x)", VAR_3);
 FUNC_1("\n");
}
