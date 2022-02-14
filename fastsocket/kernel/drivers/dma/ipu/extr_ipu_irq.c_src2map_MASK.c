
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_irq_map {unsigned int source; } ;


 int VAR_0 ;
 struct ipu_irq_map* VAR_1 ;

__attribute__((used)) static struct ipu_irq_map *FUNC_0(unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].source == VAR_2)
   return VAR_1 + VAR_3;

 return ((void*)0);
}
