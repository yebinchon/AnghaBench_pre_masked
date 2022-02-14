
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv20_graph_priv {int ctxtab; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int tile_prog; int sclass; int * cclass; } ;
struct TYPE_3__ {int unit; int intr; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,int *,int,int,int ,int *) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nv20_graph_priv**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (struct nv20_graph_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv20_graph_priv*) ;
 TYPE_1__* FUNC_4 (struct nv20_graph_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_5, struct nouveau_object *VAR_6,
        struct nouveau_oclass *VAR_7, void *VAR_8, u32 VAR_9,
        struct nouveau_object **VAR_10)
{
 struct nv20_graph_priv *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, 1, &VAR_11);
 *VAR_10 = FUNC_3(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_5, ((void*)0), 32 * 4, 16,
     VAR_0, &VAR_11->ctxtab);
 if (VAR_12)
  return VAR_12;

 FUNC_4(VAR_11)->unit = 0x00001000;
 FUNC_4(VAR_11)->intr = VAR_1;
 FUNC_2(VAR_11)->cclass = &VAR_4;
 FUNC_2(VAR_11)->sclass = VAR_3;
 FUNC_2(VAR_11)->tile_prog = VAR_2;
 return 0;
}
