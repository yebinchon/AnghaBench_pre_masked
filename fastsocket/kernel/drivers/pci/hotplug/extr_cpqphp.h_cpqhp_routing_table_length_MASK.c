
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_routing_table {int dummy; } ;
struct irq_info {int dummy; } ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(void)
{
 FUNC_0(VAR_0 == ((void*)0));
 return ((VAR_0->size - sizeof(struct irq_routing_table)) /
  sizeof(struct irq_info));
}
