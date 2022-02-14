
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* gdt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct TYPE_5__ {int b; } ;


 TYPE_2__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct lg_cpu *VAR_5)
{




 VAR_5->arch.gdt[VAR_2] = VAR_0;
 VAR_5->arch.gdt[VAR_3] = VAR_1;
 VAR_5->arch.gdt[VAR_2].b |= (VAR_4 << 13);
 VAR_5->arch.gdt[VAR_3].b |= (VAR_4 << 13);
}
