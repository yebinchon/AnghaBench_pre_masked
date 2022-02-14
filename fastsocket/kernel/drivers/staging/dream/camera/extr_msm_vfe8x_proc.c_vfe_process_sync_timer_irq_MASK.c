
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_interrupt_status {scalar_t__ syncTimer2Irq; scalar_t__ syncTimer1Irq; scalar_t__ syncTimer0Irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
 struct vfe_interrupt_status *VAR_3)
{
 if (VAR_3->syncTimer0Irq)
  FUNC_0(VAR_0);

 if (VAR_3->syncTimer1Irq)
  FUNC_0(VAR_1);

 if (VAR_3->syncTimer2Irq)
  FUNC_0(VAR_2);
}
