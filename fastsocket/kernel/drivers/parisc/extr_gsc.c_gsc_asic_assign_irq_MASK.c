
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_asic {int* global_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct gsc_asic*) ;

void FUNC_1(struct gsc_asic *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_2->global_irq[VAR_3];

 if (VAR_5 <= 0) {
  VAR_5 = FUNC_0(&VAR_1, VAR_2);
  if (VAR_5 == VAR_0)
   return;

  VAR_2->global_irq[VAR_3] = VAR_5;
 }
 *VAR_4 = VAR_5;
}
