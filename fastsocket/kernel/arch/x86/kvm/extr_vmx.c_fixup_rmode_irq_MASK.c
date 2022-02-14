
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rip; int vector; scalar_t__ pending; } ;
struct TYPE_4__ {TYPE_1__ irq; } ;
struct vcpu_vmx {int idt_vectoring_info; TYPE_2__ rmode; int vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vcpu_vmx *VAR_3)
{
 VAR_3->rmode.irq.pending = 0;
 if (FUNC_0(&VAR_3->vcpu) + 1 != VAR_3->rmode.irq.rip)
  return;
 FUNC_1(&VAR_3->vcpu, VAR_3->rmode.irq.rip);
 if (VAR_3->idt_vectoring_info & VAR_2) {
  VAR_3->idt_vectoring_info &= ~VAR_1;
  VAR_3->idt_vectoring_info |= VAR_0;
  return;
 }
 VAR_3->idt_vectoring_info =
  VAR_2
  | VAR_0
  | VAR_3->rmode.irq.vector;
}
