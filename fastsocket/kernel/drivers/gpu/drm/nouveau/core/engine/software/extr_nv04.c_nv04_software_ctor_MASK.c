
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv04_software_priv {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int sclass; int * cclass; } ;
struct TYPE_3__ {int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_software_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct nv04_software_priv*) ;
 struct nouveau_object* FUNC_2 (struct nv04_software_priv*) ;
 TYPE_1__* FUNC_3 (struct nv04_software_priv*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
       struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
       struct nouveau_object **VAR_8)
{
 struct nv04_software_priv *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_9);
 *VAR_8 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_9)->cclass = &VAR_0;
 FUNC_1(VAR_9)->sclass = VAR_2;
 FUNC_3(VAR_9)->intr = VAR_1;
 return 0;
}
