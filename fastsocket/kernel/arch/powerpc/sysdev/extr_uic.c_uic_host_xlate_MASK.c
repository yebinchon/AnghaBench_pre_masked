
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct irq_host {int dummy; } ;
struct device_node {int dummy; } ;
typedef void* irq_hw_number_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct irq_host *VAR_0, struct device_node *VAR_1,
     u32 *VAR_2, unsigned int VAR_3,
     irq_hw_number_t *VAR_4, unsigned int *VAR_5)

{

 FUNC_0(VAR_3 != 2);
 *VAR_4 = VAR_2[0];
 *VAR_5 = VAR_2[1];
 return 0;
}
