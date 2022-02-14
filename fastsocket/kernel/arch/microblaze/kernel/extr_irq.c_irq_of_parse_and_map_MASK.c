
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_irq {unsigned int* specifier; } ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,int,struct of_irq*) ;

unsigned int FUNC_1(struct device_node *VAR_1, int VAR_2)
{
 struct of_irq VAR_3;

 if (FUNC_0(VAR_1, VAR_2, &VAR_3))
  return VAR_0;

 return VAR_3.specifier[0];
}
