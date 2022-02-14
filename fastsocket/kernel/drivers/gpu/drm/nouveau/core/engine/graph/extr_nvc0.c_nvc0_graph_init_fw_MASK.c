
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvc0_graph_priv {int dummy; } ;
struct nvc0_graph_fuc {int size; int* data; } ;


 int FUNC_0 (struct nvc0_graph_priv*,scalar_t__,int) ;

void
FUNC_1(struct nvc0_graph_priv *VAR_0, u32 VAR_1,
     struct nvc0_graph_fuc *VAR_2, struct nvc0_graph_fuc *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, VAR_1 + 0x01c0, 0x01000000);
 for (VAR_4 = 0; VAR_4 < VAR_3->size / 4; VAR_4++)
  FUNC_0(VAR_0, VAR_1 + 0x01c4, VAR_3->data[VAR_4]);

 FUNC_0(VAR_0, VAR_1 + 0x0180, 0x01000000);
 for (VAR_4 = 0; VAR_4 < VAR_2->size / 4; VAR_4++) {
  if ((VAR_4 & 0x3f) == 0)
   FUNC_0(VAR_0, VAR_1 + 0x0188, VAR_4 >> 6);
  FUNC_0(VAR_0, VAR_1 + 0x0184, VAR_2->data[VAR_4]);
 }
}
