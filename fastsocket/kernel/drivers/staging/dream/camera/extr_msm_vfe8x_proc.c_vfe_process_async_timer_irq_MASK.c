
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_interrupt_status {scalar_t__ asyncTimer3Irq; scalar_t__ asyncTimer2Irq; scalar_t__ asyncTimer1Irq; scalar_t__ asyncTimer0Irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
 struct vfe_interrupt_status *VAR_4)
{

 if (VAR_4->asyncTimer0Irq)
  FUNC_0(VAR_0);

 if (VAR_4->asyncTimer1Irq)
  FUNC_0(VAR_1);

 if (VAR_4->asyncTimer2Irq)
  FUNC_0(VAR_2);

 if (VAR_4->asyncTimer3Irq)
  FUNC_0(VAR_3);
}
