
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int action; } ;
struct nv50_mxm_priv {TYPE_1__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_mxm_priv**) ;
 struct nouveau_object* FUNC_2 (struct nv50_mxm_priv*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1, struct nouveau_object *VAR_2,
       struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
       struct nouveau_object **VAR_6)
{
 struct nv50_mxm_priv *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->base.action & VAR_0)
  FUNC_0(&VAR_7->base);
 return 0;
}
