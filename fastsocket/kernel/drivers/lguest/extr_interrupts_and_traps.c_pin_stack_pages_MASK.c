
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {int esp1; TYPE_1__* lg; } ;
struct TYPE_2__ {unsigned int stack_pages; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct lg_cpu*,int) ;

void FUNC_1(struct lg_cpu *VAR_1)
{
 unsigned int VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_1->lg->stack_pages; VAR_2++)






  FUNC_0(VAR_1, VAR_1->esp1 - 1 - VAR_2 * VAR_0);
}
