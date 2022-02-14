
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_priv {int * playlist; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int sclass; int * cclass; } ;
struct TYPE_3__ {int unit; int intr; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,struct nv50_fifo_priv**) ;
 int FUNC_1 (struct nouveau_object*,int *,int,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct nv50_fifo_priv*) ;
 struct nouveau_object* FUNC_3 (struct nv50_fifo_priv*) ;
 TYPE_1__* FUNC_4 (struct nv50_fifo_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
        struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
        struct nouveau_object **VAR_8)
{
 struct nv50_fifo_priv *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, 1, 127, &VAR_9);
 *VAR_8 = FUNC_3(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_3, ((void*)0), 128 * 4, 0x1000, 0,
    &VAR_9->playlist[0]);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_3, ((void*)0), 128 * 4, 0x1000, 0,
    &VAR_9->playlist[1]);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_9)->unit = 0x00000100;
 FUNC_4(VAR_9)->intr = VAR_0;
 FUNC_2(VAR_9)->cclass = &VAR_1;
 FUNC_2(VAR_9)->sclass = VAR_2;
 return 0;
}
