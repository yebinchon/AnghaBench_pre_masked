
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_display_sync_class {scalar_t__ head; int pushbuf; } ;
struct TYPE_3__ {scalar_t__ nr; } ;
struct nv50_disp_priv {TYPE_1__ head; } ;
struct nv50_disp_dmac {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int object_detach; int object_attach; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,scalar_t__,int,void**) ;
 struct nouveau_object* FUNC_1 (struct nv50_disp_dmac*) ;
 TYPE_2__* FUNC_2 (struct nv50_disp_dmac*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_3,
      struct nouveau_object *VAR_4,
      struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
      struct nouveau_object **VAR_8)
{
 struct nv50_display_sync_class *VAR_9 = VAR_6;
 struct nv50_disp_priv *VAR_10 = (void *)VAR_4;
 struct nv50_disp_dmac *VAR_11;
 int VAR_12;

 if (VAR_7 < sizeof(*VAR_9) || VAR_9->head >= VAR_10->head.nr)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_9->pushbuf,
         1 + VAR_9->head, sizeof(*VAR_11),
         (void **)&VAR_11);
 *VAR_8 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_2(VAR_11)->object_attach = VAR_1;
 FUNC_2(VAR_11)->object_detach = VAR_2;
 return 0;
}
