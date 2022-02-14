
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; unsigned int* revmap; } ;
struct TYPE_4__ {TYPE_1__ linear; } ;
struct irq_host {scalar_t__ revmap_type; TYPE_2__ revmap_data; } ;
typedef size_t irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct irq_host*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

unsigned int FUNC_3(struct irq_host *VAR_2,
          irq_hw_number_t VAR_3)
{
 unsigned int *VAR_4;

 FUNC_0(VAR_2->revmap_type != VAR_0);


 if (FUNC_2(VAR_3 >= VAR_2->revmap_data.linear.size))
  return FUNC_1(VAR_2, VAR_3);


 VAR_4 = VAR_2->revmap_data.linear.revmap;
 if (FUNC_2(VAR_4 == ((void*)0)))
  return FUNC_1(VAR_2, VAR_3);


 if (FUNC_2(VAR_4[VAR_3] == VAR_1))
  VAR_4[VAR_3] = FUNC_1(VAR_2, VAR_3);

 return VAR_4[VAR_3];
}
