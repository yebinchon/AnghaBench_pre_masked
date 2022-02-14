
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_display_oimm_class {scalar_t__ head; } ;
struct TYPE_2__ {scalar_t__ nr; } ;
struct nv50_disp_priv {TYPE_1__ head; } ;
struct nv50_disp_pioc {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 struct nouveau_object* FUNC_0 (struct nv50_disp_pioc*) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,scalar_t__,int,void**) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_1,
      struct nouveau_object *VAR_2,
      struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nouveau_object **VAR_6)
{
 struct nv50_display_oimm_class *VAR_7 = VAR_4;
 struct nv50_disp_priv *VAR_8 = (void *)VAR_2;
 struct nv50_disp_pioc *VAR_9;
 int VAR_10;

 if (VAR_5 < sizeof(*VAR_7) || VAR_7->head >= VAR_8->head.nr)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, 9 + VAR_7->head,
         sizeof(*VAR_9), (void **)&VAR_9);
 *VAR_6 = FUNC_0(VAR_9);
 if (VAR_10)
  return VAR_10;

 return 0;
}
