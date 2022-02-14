
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct desc_struct* gdt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct desc_struct {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(const struct lg_cpu *VAR_1, struct desc_struct *VAR_2)
{
 unsigned int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_0(VAR_3))
   VAR_2[VAR_3] = VAR_1->arch.gdt[VAR_3];
}
