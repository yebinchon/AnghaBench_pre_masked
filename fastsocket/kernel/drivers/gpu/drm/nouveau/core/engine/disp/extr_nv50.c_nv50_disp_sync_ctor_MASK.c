
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_display_sync_class {int head; int pushbuf; } ;
struct nv50_disp_dmac {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int object_detach; int object_attach; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,int,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_object* FUNC_1 (struct nv50_disp_dmac*) ;
 TYPE_1__* FUNC_2 (struct nv50_disp_dmac*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_3,
      struct nouveau_object *VAR_4,
      struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
      struct nouveau_object **VAR_8)
{
 struct nv50_display_sync_class *VAR_9 = VAR_6;
 struct nv50_disp_dmac *VAR_10;
 int VAR_11;

 if (VAR_7 < sizeof(*VAR_9) || VAR_9->head > 1)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_9->pushbuf,
         1 + VAR_9->head, sizeof(*VAR_10),
         (void **)&VAR_10);
 *VAR_8 = FUNC_1(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_10)->object_attach = VAR_1;
 FUNC_2(VAR_10)->object_detach = VAR_2;
 return 0;
}
