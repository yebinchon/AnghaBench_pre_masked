
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_grctx {int* buffer; TYPE_1__* mmio; struct nvc0_graph_priv* priv; } ;
struct nvc0_graph_priv {int dummy; } ;
struct TYPE_2__ {int addr; int data; int shift; int buffer; } ;


 int FUNC_0 (struct nvc0_graph_priv*,int,int) ;

void
FUNC_1(struct nvc0_grctx *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct nvc0_graph_priv *VAR_5 = VAR_0->priv;

 VAR_0->mmio->addr = VAR_1;
 VAR_0->mmio->data = VAR_2;
 VAR_0->mmio->shift = VAR_3;
 VAR_0->mmio->buffer = VAR_4;
 VAR_0->mmio++;

 if (VAR_3)
  VAR_2 |= VAR_0->buffer[VAR_4] >> VAR_3;
 FUNC_0(VAR_5, VAR_1, VAR_2);
}
