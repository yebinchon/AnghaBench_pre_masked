
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_display_oimm_class {int head; } ;
struct nv50_disp_pioc {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,void**) ;
 struct nouveau_object* FUNC_1 (struct nv50_disp_pioc*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_1,
      struct nouveau_object *VAR_2,
      struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nouveau_object **VAR_6)
{
 struct nv50_display_oimm_class *VAR_7 = VAR_4;
 struct nv50_disp_pioc *VAR_8;
 int VAR_9;

 if (VAR_5 < sizeof(*VAR_7) || VAR_7->head > 1)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, 5 + VAR_7->head,
         sizeof(*VAR_8), (void **)&VAR_8);
 *VAR_6 = FUNC_1(VAR_8);
 if (VAR_9)
  return VAR_9;

 return 0;
}
