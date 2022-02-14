
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {scalar_t__ node; } ;
struct nouveau_barobj {int base; TYPE_1__ vma; } ;
struct nouveau_bar {int (* unmap ) (struct nouveau_bar*,TYPE_1__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_bar*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nouveau_bar *VAR_1 = (void *)VAR_0->engine;
 struct nouveau_barobj *VAR_2 = (void *)VAR_0;
 if (VAR_2->vma.node)
  VAR_1->unmap(VAR_1, &VAR_2->vma);
 FUNC_0(&VAR_2->base);
}
