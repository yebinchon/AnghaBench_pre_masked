
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {unsigned int irq_base; int imr_change_pending; int mask_work; int imr; } ;


 int FUNC_0 (unsigned int) ;
 struct sih_agent* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(unsigned VAR_2)
{
 struct sih_agent *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_0, VAR_4);
 VAR_3->imr |= FUNC_0(VAR_2 - VAR_3->irq_base);
 VAR_3->imr_change_pending = 1;
 FUNC_2(VAR_1, &VAR_3->mask_work);
 FUNC_4(&VAR_0, VAR_4);
}
