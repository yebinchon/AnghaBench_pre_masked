
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv50_graph_priv {int lock; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {int chipset; } ;
struct TYPE_5__ {int tlb_flush; int sclass; int * cclass; } ;
struct TYPE_4__ {int unit; int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,struct nv50_graph_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (struct nv50_graph_priv*) ;
 TYPE_2__* FUNC_2 (struct nv50_graph_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv50_graph_priv*) ;
 TYPE_1__* FUNC_4 (struct nv50_graph_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_object *VAR_9, struct nouveau_object *VAR_10,
        struct nouveau_oclass *VAR_11, void *VAR_12, u32 VAR_13,
        struct nouveau_object **VAR_14)
{
 struct nv50_graph_priv *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_11, 1, &VAR_15);
 *VAR_14 = FUNC_3(VAR_15);
 if (VAR_16)
  return VAR_16;

 FUNC_4(VAR_15)->unit = 0x00201000;
 FUNC_4(VAR_15)->intr = VAR_1;
 FUNC_2(VAR_15)->cclass = &VAR_0;

 switch (FUNC_1(VAR_15)->chipset) {
 case 0x50:
  FUNC_2(VAR_15)->sclass = VAR_2;
  break;
 case 0x84:
 case 0x86:
 case 0x92:
 case 0x94:
 case 0x96:
 case 0x98:
  FUNC_2(VAR_15)->sclass = VAR_4;
  break;
 case 0xa0:
 case 0xaa:
 case 0xac:
  FUNC_2(VAR_15)->sclass = VAR_6;
  break;
 case 0xa3:
 case 0xa5:
 case 0xa8:
  FUNC_2(VAR_15)->sclass = VAR_7;
  break;
 case 0xaf:
  FUNC_2(VAR_15)->sclass = VAR_8;
  break;

 };

 if (FUNC_1(VAR_15)->chipset == 0x50 ||
     FUNC_1(VAR_15)->chipset == 0xac)
  FUNC_2(VAR_15)->tlb_flush = VAR_3;
 else
  FUNC_2(VAR_15)->tlb_flush = VAR_5;

 FUNC_5(&VAR_15->lock);
 return 0;
}
