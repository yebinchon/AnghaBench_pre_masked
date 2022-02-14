
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * idt; } ;
struct lg_cpu {TYPE_1__ arch; int changed; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct lg_cpu*,char*,unsigned int) ;
 int FUNC_2 (struct lg_cpu*,int *,unsigned int,int ,int ) ;

void FUNC_3(struct lg_cpu *VAR_2, unsigned int VAR_3, u32 VAR_4, u32 VAR_5)
{




 if (VAR_3 == 2 || VAR_3 == 8 || VAR_3 == 15 || VAR_3 == VAR_1)
  return;





 VAR_2->changed |= VAR_0;


 if (VAR_3 >= FUNC_0(VAR_2->arch.idt))
  FUNC_1(VAR_2, "Setting idt entry %u", VAR_3);
 else
  FUNC_2(VAR_2, &VAR_2->arch.idt[VAR_3], VAR_3, VAR_4, VAR_5);
}
