
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct irq_host {int dummy; } ;
struct device_node {int dummy; } ;
typedef size_t irq_hw_number_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;

__attribute__((used)) static int FUNC_0(struct irq_host *VAR_4, struct device_node *VAR_5,
    u32 *VAR_6, unsigned int VAR_7,
    irq_hw_number_t *VAR_8,
    unsigned int *VAR_9)
{
 if ((VAR_7 < 2) || (VAR_6[0] >= VAR_1))
  return -VAR_0;



 VAR_3[VAR_6[0]] = VAR_2[VAR_6[1]];




 *VAR_8 = VAR_6[0];
 *VAR_9 = VAR_2[VAR_6[1]];

 return 0;
}
