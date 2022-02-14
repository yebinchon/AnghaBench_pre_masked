
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_graph_priv {int gpc_nr; int* tpc_nr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct nvc0_graph_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nvc0_graph_priv *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->gpc_nr; VAR_1++) {
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0420), 0xc0000000);
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0900), 0xc0000000);
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x1028), 0xc0000000);
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x0824), 0xc0000000);
  for (VAR_2 = 0; VAR_2 < VAR_0->tpc_nr[VAR_1]; VAR_2++) {
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x508), 0xffffffff);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x50c), 0xffffffff);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x224), 0xc0000000);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x48c), 0xc0000000);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x084), 0xc0000000);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x644), 0x001ffffe);
   FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_2, 0x64c), 0x0000000f);
  }
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x2c90), 0xffffffff);
  FUNC_2(VAR_0, FUNC_0(VAR_1, 0x2c94), 0xffffffff);
 }
}
