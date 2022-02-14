
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv10_graph_priv {int lock; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {int chipset; } ;
struct TYPE_5__ {int tile_prog; int sclass; int * cclass; } ;
struct TYPE_4__ {int unit; int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nv10_graph_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (struct nv10_graph_priv*) ;
 TYPE_2__* FUNC_2 (struct nv10_graph_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv10_graph_priv*) ;
 TYPE_1__* FUNC_4 (struct nv10_graph_priv*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
  struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
  struct nouveau_object **VAR_11)
{
 struct nv10_graph_priv *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, 1, &VAR_12);
 *VAR_11 = FUNC_3(VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_12)->unit = 0x00001000;
 FUNC_4(VAR_12)->intr = VAR_1;
 FUNC_2(VAR_12)->cclass = &VAR_0;

 if (FUNC_1(VAR_12)->chipset <= 0x10)
  FUNC_2(VAR_12)->sclass = VAR_2;
 else
 if (FUNC_1(VAR_12)->chipset < 0x17 ||
     FUNC_1(VAR_12)->chipset == 0x1a)
  FUNC_2(VAR_12)->sclass = VAR_4;
 else
  FUNC_2(VAR_12)->sclass = VAR_5;

 FUNC_2(VAR_12)->tile_prog = VAR_3;
 FUNC_5(&VAR_12->lock);
 return 0;
}
