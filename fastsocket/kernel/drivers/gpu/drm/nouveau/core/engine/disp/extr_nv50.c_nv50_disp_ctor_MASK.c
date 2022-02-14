
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int nr; int * dp; int power; } ;
struct TYPE_9__ {int nr; int power; } ;
struct TYPE_8__ {int nr; int sense; int power; } ;
struct TYPE_7__ {int nr; } ;
struct nv50_disp_priv {TYPE_4__ pior; TYPE_3__ sor; TYPE_2__ dac; TYPE_1__ head; int sclass; int supervisor; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_12__ {int * cclass; int sclass; } ;
struct TYPE_11__ {int intr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,char*,char*,struct nv50_disp_priv**) ;
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
 TYPE_6__* FUNC_2 (struct nv50_disp_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv50_disp_priv*) ;
 TYPE_5__* FUNC_4 (struct nv50_disp_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_10, struct nouveau_object *VAR_11,
        struct nouveau_oclass *VAR_12, void *VAR_13, u32 VAR_14,
        struct nouveau_object **VAR_15)
{
 struct nv50_disp_priv *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_10, VAR_11, VAR_12, 2, "PDISP",
      "display", &VAR_16);
 *VAR_15 = FUNC_3(VAR_16);
 if (VAR_17)
  return VAR_17;

 FUNC_2(VAR_16)->sclass = VAR_2;
 FUNC_2(VAR_16)->cclass = &VAR_3;
 FUNC_4(VAR_16)->intr = VAR_4;
 FUNC_0(&VAR_16->supervisor, VAR_5);
 VAR_16->sclass = VAR_6;
 VAR_16->head.nr = 2;
 VAR_16->dac.nr = 3;
 VAR_16->sor.nr = 2;
 VAR_16->pior.nr = 3;
 VAR_16->dac.power = VAR_0;
 VAR_16->dac.sense = VAR_1;
 VAR_16->sor.power = VAR_9;
 VAR_16->pior.power = VAR_8;
 VAR_16->pior.dp = &VAR_7;
 return 0;
}
