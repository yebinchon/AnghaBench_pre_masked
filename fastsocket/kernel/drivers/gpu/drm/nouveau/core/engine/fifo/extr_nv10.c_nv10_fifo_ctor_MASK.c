
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv04_instmem_priv {int ramfc; int ramro; int ramht; } ;
struct TYPE_4__ {int start; int pause; } ;
struct nv04_fifo_priv {int ramfc_desc; TYPE_1__ base; int ramfc; int ramro; int ramht; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {int sclass; int * cclass; } ;
struct TYPE_5__ {int unit; int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,struct nv04_fifo_priv**) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv04_instmem_priv* FUNC_3 (struct nouveau_object*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (struct nv04_fifo_priv*) ;
 struct nouveau_object* FUNC_5 (struct nv04_fifo_priv*) ;
 TYPE_2__* FUNC_6 (struct nv04_fifo_priv*) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
        struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
        struct nouveau_object **VAR_11)
{
 struct nv04_instmem_priv *VAR_12 = FUNC_3(VAR_6);
 struct nv04_fifo_priv *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_8, 0, 31, &VAR_13);
 *VAR_11 = FUNC_5(VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_2(VAR_12->ramht, &VAR_13->ramht);
 FUNC_1(VAR_12->ramro, &VAR_13->ramro);
 FUNC_1(VAR_12->ramfc, &VAR_13->ramfc);

 FUNC_6(VAR_13)->unit = 0x00000100;
 FUNC_6(VAR_13)->intr = VAR_0;
 FUNC_4(VAR_13)->cclass = &VAR_3;
 FUNC_4(VAR_13)->sclass = VAR_4;
 VAR_13->base.pause = VAR_1;
 VAR_13->base.start = VAR_2;
 VAR_13->ramfc_desc = VAR_5;
 return 0;
}
