
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct irq_host {int dummy; } ;
struct device_node {int dummy; } ;
typedef void* irq_hw_number_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_host *VAR_1, struct device_node *VAR_2,
       u32 *VAR_3, unsigned int VAR_4,
       irq_hw_number_t *VAR_5, unsigned int *VAR_6)
{
 *VAR_5 = VAR_3[0];
 if (VAR_4 > 1)
  *VAR_6 = VAR_3[1];
 else
  *VAR_6 = VAR_0;
 return 0;
}
