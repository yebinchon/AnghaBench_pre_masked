
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {TYPE_2__* gdt; } ;
struct lg_cpu {int changed; TYPE_1__ arch; } ;
struct TYPE_4__ {size_t a; size_t b; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct lg_cpu*,size_t,size_t) ;
 int FUNC_2 (struct lg_cpu*,char*,size_t) ;

void FUNC_3(struct lg_cpu *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{




 if (VAR_2 >= FUNC_0(VAR_1->arch.gdt)) {
  FUNC_2(VAR_1, "too many gdt entries %i", VAR_2);
  return;
 }


 VAR_1->arch.gdt[VAR_2].a = VAR_3;
 VAR_1->arch.gdt[VAR_2].b = VAR_4;
 FUNC_1(VAR_1, VAR_2, VAR_2+1);




 VAR_1->changed |= VAR_0;
}
