
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mpeg_priv {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int tlb_flush; int sclass; int * cclass; } ;
struct TYPE_3__ {int unit; int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_mpeg_priv**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct nv50_mpeg_priv*) ;
 struct nouveau_object* FUNC_2 (struct nv50_mpeg_priv*) ;
 TYPE_1__* FUNC_3 (struct nv50_mpeg_priv*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_4, struct nouveau_object *VAR_5,
        struct nouveau_oclass *VAR_6, void *VAR_7, u32 VAR_8,
        struct nouveau_object **VAR_9)
{
 struct nv50_mpeg_priv *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_10);
 *VAR_9 = FUNC_2(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_10)->unit = 0x00400002;
 FUNC_3(VAR_10)->intr = VAR_3;
 FUNC_1(VAR_10)->cclass = &VAR_0;
 FUNC_1(VAR_10)->sclass = VAR_1;
 FUNC_1(VAR_10)->tlb_flush = VAR_2;
 return 0;
}
