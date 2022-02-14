
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_interrupt_status {scalar_t__ violationIrq; scalar_t__ camifOverflowIrq; scalar_t__ camifErrorIrq; scalar_t__ busOverflowIrq; scalar_t__ axiErrorIrq; scalar_t__ awbOverflowIrq; scalar_t__ afOverflowIrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct vfe_interrupt_status *VAR_4)
{


 if (VAR_4->afOverflowIrq)
  FUNC_2(VAR_0);

 if (VAR_4->awbOverflowIrq)
  FUNC_2(VAR_1);

 if (VAR_4->axiErrorIrq)
  FUNC_2(VAR_2);

 if (VAR_4->busOverflowIrq)
  FUNC_0();

 if (VAR_4->camifErrorIrq)
  FUNC_1();

 if (VAR_4->camifOverflowIrq)
  FUNC_2(VAR_3);

 if (VAR_4->violationIrq)
  ;
}
