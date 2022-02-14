
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reserved; int alloc; } ;
struct nv04_instmem_priv {int created; int ramro; int ramfc; int ramht; int vbios; TYPE_1__ base; int heap; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,int *,int,int ,int ,int *) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv04_instmem_priv**) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (struct nouveau_object*,int *,int,int ,int *) ;
 int VAR_1 ;
 struct nouveau_object* FUNC_4 (struct nv04_instmem_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_2, struct nouveau_object *VAR_3,
    struct nouveau_oclass *VAR_4, void *VAR_5, u32 VAR_6,
    struct nouveau_object **VAR_7)
{
 struct nv04_instmem_priv *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_8);
 *VAR_7 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_8->base.reserved = 512 * 1024;
 VAR_8->base.alloc = VAR_1;

 VAR_9 = FUNC_2(&VAR_8->heap, 0, VAR_8->base.reserved, 1);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_0(VAR_2, ((void*)0), 0x10000, 0, 0, &VAR_8->vbios);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_3(VAR_2, ((void*)0), 0x08000, 0, &VAR_8->ramht);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_0(VAR_2, ((void*)0), 0x00800, 0,
     VAR_0, &VAR_8->ramfc);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_0(VAR_2, ((void*)0), 0x00200, 0, 0, &VAR_8->ramro);
 if (VAR_9)
  return VAR_9;

 VAR_8->created = 1;
 return 0;
}
