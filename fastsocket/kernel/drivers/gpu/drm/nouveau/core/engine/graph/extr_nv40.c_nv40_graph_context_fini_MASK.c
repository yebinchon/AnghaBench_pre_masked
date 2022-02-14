
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv40_graph_priv {int dummy; } ;
struct nv40_graph_chan {int dummy; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct nv40_graph_chan*) ;
 int FUNC_1 (struct nv40_graph_priv*,int,int,int) ;
 int FUNC_2 (struct nv40_graph_priv*,int) ;
 int FUNC_3 (struct nv40_graph_priv*,int,int,int) ;
 int FUNC_4 (struct nv40_graph_priv*,char*,int) ;
 int FUNC_5 (struct nv40_graph_priv*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_1, bool VAR_2)
{
 struct nv40_graph_priv *VAR_3 = (void *)VAR_1->engine;
 struct nv40_graph_chan *VAR_4 = (void *)VAR_1;
 u32 VAR_5 = 0x01000000 | FUNC_0(VAR_4)->addr >> 4;
 int VAR_6 = 0;

 FUNC_1(VAR_3, 0x400720, 0x00000001, 0x00000000);

 if (FUNC_2(VAR_3, 0x40032c) == VAR_5) {
  if (VAR_2) {
   FUNC_5(VAR_3, 0x400720, 0x00000000);
   FUNC_5(VAR_3, 0x400784, VAR_5);
   FUNC_1(VAR_3, 0x400310, 0x00000020, 0x00000020);
   FUNC_1(VAR_3, 0x400304, 0x00000001, 0x00000001);
   if (!FUNC_3(VAR_3, 0x400300, 0x00000001, 0x00000000)) {
    u32 VAR_7 = FUNC_2(VAR_3, 0x400308);
    FUNC_4(VAR_3, "ctxprog timeout 0x%08x\n", VAR_7);
    VAR_6 = -VAR_0;
   }
  }

  FUNC_1(VAR_3, 0x40032c, 0x01000000, 0x00000000);
 }

 if (FUNC_2(VAR_3, 0x400330) == VAR_5)
  FUNC_1(VAR_3, 0x400330, 0x01000000, 0x00000000);

 FUNC_1(VAR_3, 0x400720, 0x00000001, 0x00000001);
 return VAR_6;
}
