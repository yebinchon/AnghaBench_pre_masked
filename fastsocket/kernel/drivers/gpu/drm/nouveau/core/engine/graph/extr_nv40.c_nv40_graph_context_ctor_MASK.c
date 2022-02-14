
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv40_graph_priv {int size; } ;
struct nv40_graph_chan {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int ,int,int ,struct nv40_graph_chan**) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct nv40_graph_priv*) ;
 TYPE_1__* FUNC_3 (struct nv40_graph_chan*) ;
 struct nouveau_object* FUNC_4 (struct nv40_graph_chan*) ;
 int FUNC_5 (struct nv40_graph_chan*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_1,
   struct nouveau_object *VAR_2,
   struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
   struct nouveau_object **VAR_6)
{
 struct nv40_graph_priv *VAR_7 = (void *)VAR_2;
 struct nv40_graph_chan *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0),
        VAR_7->size, 16,
        VAR_0, &VAR_8);
 *VAR_6 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(FUNC_2(VAR_7), FUNC_3(VAR_8));
 FUNC_5(VAR_8, 0x00000, FUNC_3(VAR_8)->addr >> 4);
 return 0;
}
