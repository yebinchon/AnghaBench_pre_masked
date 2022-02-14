
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_instmem_priv {int base; scalar_t__ iomem; int heap; int vbios; int ramht; int ramro; int ramfc; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct nouveau_object *VAR_0)
{
 struct nv04_instmem_priv *VAR_1 = (void *)VAR_0;
 FUNC_1(((void*)0), &VAR_1->ramfc);
 FUNC_1(((void*)0), &VAR_1->ramro);
 FUNC_4(((void*)0), &VAR_1->ramht);
 FUNC_1(((void*)0), &VAR_1->vbios);
 FUNC_3(&VAR_1->heap);
 if (VAR_1->iomem)
  FUNC_0(VAR_1->iomem);
 FUNC_2(&VAR_1->base);
}
