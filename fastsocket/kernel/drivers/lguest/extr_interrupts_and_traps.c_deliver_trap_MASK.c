
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* idt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int b; int a; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct lg_cpu*,int ,int ,int ) ;

bool FUNC_4(struct lg_cpu *VAR_0, unsigned int VAR_1)
{




 if (VAR_1 >= FUNC_0(VAR_0->arch.idt))
  return 0;





 if (!FUNC_2(VAR_0->arch.idt[VAR_1].a, VAR_0->arch.idt[VAR_1].b))
  return 0;
 FUNC_3(VAR_0, VAR_0->arch.idt[VAR_1].a,
       VAR_0->arch.idt[VAR_1].b, FUNC_1(VAR_1));
 return 1;
}
