
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_graph_priv {int dummy; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (struct nv10_graph_priv*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct nv10_graph_priv *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   return VAR_3;
 }
 FUNC_1(VAR_1, "unknow offset nv10_ctx_regs %d\n", VAR_2);
 return -1;
}
