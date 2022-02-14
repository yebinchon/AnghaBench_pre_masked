
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_irq {int size; int specifier; int controller; } ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,int,struct of_irq*) ;

unsigned int FUNC_2(struct device_node *VAR_1, int VAR_2)
{
 struct of_irq VAR_3;

 if (FUNC_1(VAR_1, VAR_2, &VAR_3))
  return VAR_0;

 return FUNC_0(VAR_3.controller, VAR_3.specifier,
         VAR_3.size);
}
