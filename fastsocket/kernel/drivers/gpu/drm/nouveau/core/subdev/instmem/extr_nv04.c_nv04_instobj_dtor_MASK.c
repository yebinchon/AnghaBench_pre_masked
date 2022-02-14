
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_instobj_priv {int base; int mem; } ;
struct nv04_instmem_priv {int heap; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv04_instmem_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv04_instobj_priv *VAR_2 = (void *)VAR_0;
 FUNC_1(&VAR_1->heap, &VAR_2->mem);
 FUNC_0(&VAR_2->base);
}
