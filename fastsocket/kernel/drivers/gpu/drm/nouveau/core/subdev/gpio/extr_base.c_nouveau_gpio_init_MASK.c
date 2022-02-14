
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_gpio {int (* reset ) (struct nouveau_gpio*,int ) ;int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nouveau_gpio*,int ) ;

int
FUNC_3(struct nouveau_gpio *VAR_2)
{
 int VAR_3 = FUNC_1(&VAR_2->base);
 if (VAR_3 == 0 && VAR_2->reset) {
  if (FUNC_0(VAR_1))
   VAR_2->reset(VAR_2, VAR_0);
 }
 return VAR_3;
}
