
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_instobj_priv {int base; int mem; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int (* put ) (struct nouveau_fb*,int *) ;} ;
struct nouveau_fb {TYPE_1__ ram; } ;


 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nouveau_fb*,int *) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv50_instobj_priv *VAR_1 = (void *)VAR_0;
 struct nouveau_fb *VAR_2 = FUNC_0(VAR_0);
 VAR_2->ram.put(VAR_2, &VAR_1->mem);
 FUNC_1(&VAR_1->base);
}
