
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct x86_emulate_ctxt {int interruptibility; int vcpu; } ;
struct TYPE_2__ {int (* get_interrupt_shadow ) (int ,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct x86_emulate_ctxt *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_0->get_interrupt_shadow(VAR_1->vcpu, VAR_2);







 if (!(VAR_3 & VAR_2))
  VAR_1->interruptibility = VAR_2;
}
