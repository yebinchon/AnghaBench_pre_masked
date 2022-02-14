
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_dma {int * virt; scalar_t__ phys; int len; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct device *VAR_0, struct i2o_dma *VAR_1)
{
 if (VAR_1->virt) {
  if (VAR_1->phys)
   FUNC_0(VAR_0, VAR_1->len, VAR_1->virt,
       VAR_1->phys);
  else
   FUNC_1(VAR_1->virt);
  VAR_1->virt = ((void*)0);
 }
}
