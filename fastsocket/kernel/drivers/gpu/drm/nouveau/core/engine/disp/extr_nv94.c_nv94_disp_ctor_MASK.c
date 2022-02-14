
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
struct TYPE_9__ {int nr; int * dp; int hdmi; int power; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__* FUNC_2 (struct nv50_disp_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv50_disp_priv*) ;
 TYPE_5__* FUNC_4 (struct nv50_disp_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_12, struct nouveau_object *VAR_13,
        struct nouveau_oclass *VAR_14, void *VAR_15, u32 VAR_16,
        struct nouveau_object **VAR_17)
{
 struct nv50_disp_priv *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14, 2, "PDISP",
      "display", &VAR_18);
 *VAR_17 = FUNC_3(VAR_18);
 if (VAR_19)
  return VAR_19;

 FUNC_2(VAR_18)->sclass = VAR_9;
 FUNC_2(VAR_18)->cclass = &VAR_2;
 FUNC_4(VAR_18)->intr = VAR_3;
 FUNC_0(&VAR_18->supervisor, VAR_4);
 VAR_18->sclass = VAR_10;
 VAR_18->head.nr = 2;
 VAR_18->dac.nr = 3;
 VAR_18->sor.nr = 4;
 VAR_18->pior.nr = 3;
 VAR_18->dac.power = VAR_0;
 VAR_18->dac.sense = VAR_1;
 VAR_18->sor.power = VAR_7;
 VAR_18->sor.hdmi = VAR_8;
 VAR_18->sor.dp = &VAR_11;
 VAR_18->pior.power = VAR_6;
 VAR_18->pior.dp = &VAR_5;
 return 0;
}
