
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_graph_priv {int dummy; } ;


 int FUNC_0 (struct nvc0_graph_priv*,int) ;
 int FUNC_1 (struct nvc0_graph_priv*,int) ;

void
FUNC_2(struct nvc0_graph_priv *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0, 0x409604) & 0xffff;
 u32 VAR_2;

 FUNC_1(VAR_0, 0x409000);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1(VAR_0, 0x502000 + (VAR_2 * 0x8000));
}
