
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bar {int base; scalar_t__ iomem; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nouveau_bar *VAR_0)
{
 if (VAR_0->iomem)
  FUNC_0(VAR_0->iomem);
 FUNC_1(&VAR_0->base);
}
