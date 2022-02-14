
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* gdt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int b; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct lg_cpu *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++) {




  if (FUNC_0(VAR_4))
   continue;






  if ((VAR_1->arch.gdt[VAR_4].b & 0x00006000) == 0)
   VAR_1->arch.gdt[VAR_4].b |= (VAR_0 << 13);







  VAR_1->arch.gdt[VAR_4].b |= 0x00000100;
 }
}
