
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv20_graph_priv {int ctxtab; } ;
struct nv20_graph_chan {int chid; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (struct nv20_graph_chan*) ;
 int FUNC_2 (struct nv20_graph_priv*,int,int,int) ;
 int FUNC_3 (struct nv20_graph_priv*,int) ;
 int FUNC_4 (struct nv20_graph_priv*,int,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct nv20_graph_priv*,int,int) ;

int
FUNC_7(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv20_graph_priv *VAR_2 = (void *)VAR_0->engine;
 struct nv20_graph_chan *VAR_3 = (void *)VAR_0;
 int VAR_4 = -1;

 FUNC_2(VAR_2, 0x400720, 0x00000001, 0x00000000);
 if (FUNC_3(VAR_2, 0x400144) & 0x00010000)
  VAR_4 = (FUNC_3(VAR_2, 0x400148) & 0x1f000000) >> 24;
 if (VAR_3->chid == VAR_4) {
  FUNC_6(VAR_2, 0x400784, FUNC_1(VAR_3)->addr >> 4);
  FUNC_6(VAR_2, 0x400788, 0x00000002);
  FUNC_4(VAR_2, 0x400700, 0xffffffff, 0x00000000);
  FUNC_6(VAR_2, 0x400144, 0x10000000);
  FUNC_2(VAR_2, 0x400148, 0xff000000, 0x1f000000);
 }
 FUNC_2(VAR_2, 0x400720, 0x00000001, 0x00000001);

 FUNC_5(VAR_2->ctxtab, VAR_3->chid * 4, 0x00000000);
 return FUNC_0(&VAR_3->base, VAR_1);
}
