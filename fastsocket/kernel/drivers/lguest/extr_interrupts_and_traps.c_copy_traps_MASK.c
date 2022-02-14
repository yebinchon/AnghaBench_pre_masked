
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct desc_struct* idt; } ;
struct lg_cpu {TYPE_1__ arch; } ;
struct desc_struct {int b; int a; } ;


 unsigned int FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (struct desc_struct*,unsigned int,unsigned long const,struct desc_struct const*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(const struct lg_cpu *VAR_0, struct desc_struct *VAR_1,
  const unsigned long *VAR_2)
{
 unsigned int VAR_3;





 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->arch.idt); VAR_3++) {
  const struct desc_struct *VAR_4 = &VAR_0->arch.idt[VAR_3];


  if (!FUNC_2(VAR_3))
   continue;
  if (FUNC_3(VAR_4->a, VAR_4->b) == 0xF)
   VAR_1[VAR_3] = *VAR_4;
  else
   FUNC_1(&VAR_1[VAR_3], VAR_3, VAR_2[VAR_3], VAR_4);
 }
}
