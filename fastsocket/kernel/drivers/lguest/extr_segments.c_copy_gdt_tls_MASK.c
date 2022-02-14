
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct desc_struct* gdt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct desc_struct {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_0(const struct lg_cpu *VAR_2, struct desc_struct *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
  VAR_3[VAR_4] = VAR_2->arch.gdt[VAR_4];
}
