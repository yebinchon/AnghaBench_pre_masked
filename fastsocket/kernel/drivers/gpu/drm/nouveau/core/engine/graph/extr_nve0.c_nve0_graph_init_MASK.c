
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_graph_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_2 (struct nvc0_graph_priv*) ;
 int FUNC_3 (struct nvc0_graph_priv*) ;
 int FUNC_4 (struct nvc0_graph_priv*) ;
 int FUNC_5 (struct nvc0_graph_priv*) ;
 int FUNC_6 (struct nvc0_graph_priv*) ;
 int FUNC_7 (struct nvc0_graph_priv*) ;
 int FUNC_8 (struct nvc0_graph_priv*) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_0)
{
 struct nvc0_graph_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);

 FUNC_1(VAR_1, 0x400500, 0x00010001);
 FUNC_1(VAR_1, 0x400100, 0xffffffff);
 FUNC_1(VAR_1, 0x40013c, 0xffffffff);

 FUNC_8(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(VAR_1);

 FUNC_1(VAR_1, 0x400108, 0xffffffff);
 FUNC_1(VAR_1, 0x400138, 0xffffffff);
 FUNC_1(VAR_1, 0x400118, 0xffffffff);
 FUNC_1(VAR_1, 0x400130, 0xffffffff);
 FUNC_1(VAR_1, 0x40011c, 0xffffffff);
 FUNC_1(VAR_1, 0x400134, 0xffffffff);
 FUNC_1(VAR_1, 0x400054, 0x34ce3464);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
