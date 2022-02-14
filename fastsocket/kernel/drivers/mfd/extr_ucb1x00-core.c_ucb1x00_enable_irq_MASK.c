
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int irq_ris_enbl; int irq_fal_enbl; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ucb1x00*) ;
 int FUNC_3 (struct ucb1x00*) ;
 int FUNC_4 (struct ucb1x00*,int ,int) ;

void FUNC_5(struct ucb1x00 *VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 if (VAR_5 < 16) {
  FUNC_0(&VAR_4->lock, VAR_7);

  FUNC_3(VAR_4);
  if (VAR_6 & VAR_3) {
   VAR_4->irq_ris_enbl |= 1 << VAR_5;
   FUNC_4(VAR_4, VAR_2, VAR_4->irq_ris_enbl);
  }
  if (VAR_6 & VAR_0) {
   VAR_4->irq_fal_enbl |= 1 << VAR_5;
   FUNC_4(VAR_4, VAR_1, VAR_4->irq_fal_enbl);
  }
  FUNC_2(VAR_4);
  FUNC_1(&VAR_4->lock, VAR_7);
 }
}
