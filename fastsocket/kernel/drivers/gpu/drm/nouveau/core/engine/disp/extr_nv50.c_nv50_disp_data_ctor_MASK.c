
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_disp_priv {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int refcount; } ;
struct nouveau_engctx {int dummy; } ;
struct TYPE_4__ {int contexts; } ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int ,struct nouveau_engctx**) ;
 TYPE_2__* FUNC_5 (struct nv50_disp_priv*) ;
 scalar_t__ FUNC_6 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_7 (struct nouveau_engctx*) ;
 TYPE_1__* FUNC_8 (struct nv50_disp_priv*) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_3,
      struct nouveau_object *VAR_4,
      struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
      struct nouveau_object **VAR_8)
{
 struct nv50_disp_priv *VAR_9 = (void *)VAR_4;
 struct nouveau_engctx *VAR_10;
 int VAR_11 = -VAR_0;


 if (FUNC_6(VAR_3) != VAR_2) {
  FUNC_0(&VAR_3->refcount);
  *VAR_8 = VAR_3;
  return 0;
 }


 FUNC_2(&FUNC_8(VAR_9)->mutex);
 if (FUNC_1(&FUNC_5(VAR_9)->contexts)) {
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5, ((void*)0),
         0x10000, 0x10000,
         VAR_1, &VAR_10);
  *VAR_8 = FUNC_7(VAR_10);
 }
 FUNC_3(&FUNC_8(VAR_9)->mutex);
 return VAR_11;
}
