
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_graph_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 struct nouveau_engine* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nv04_graph_priv*,int ,int,int) ;
 int FUNC_3 (struct nv04_graph_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_13)
{
 struct nouveau_engine *VAR_14 = FUNC_1(VAR_13);
 struct nv04_graph_priv *VAR_15 = (void *)VAR_14;
 int VAR_16;

 VAR_16 = FUNC_0(&VAR_15->base);
 if (VAR_16)
  return VAR_16;


 FUNC_3(VAR_15, VAR_0, 0xFFFFFFFF);
 FUNC_3(VAR_15, VAR_1, 0xFFFFFFFF);

 FUNC_3(VAR_15, VAR_11, 0);
 FUNC_3(VAR_15, VAR_12, 0);


 FUNC_3(VAR_15, VAR_5, 0x1231c000);


 FUNC_3(VAR_15, VAR_6, 0x72111100);


 FUNC_3(VAR_15, VAR_7, 0x11d5f071);



 FUNC_3(VAR_15, VAR_8, 0xf0d4ff31);


 FUNC_3(VAR_15, VAR_10 , 0xFFFFFFFF);
 FUNC_3(VAR_15, VAR_3 , 0x10000100);
 FUNC_2(VAR_15, VAR_4, 0xff000000, 0x0f000000);


 FUNC_3(VAR_15, VAR_9, 0x00000000);
 FUNC_3(VAR_15, VAR_2 , 0xFFFFFFFF);
 return 0;
}
