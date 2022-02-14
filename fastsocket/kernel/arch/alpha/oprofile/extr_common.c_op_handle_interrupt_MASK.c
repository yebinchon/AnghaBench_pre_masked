
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_5__ {int (* reset_ctr ) (TYPE_1__*,unsigned long) ;int (* handle_interrupt ) (unsigned long,struct pt_regs*,int ) ;} ;
struct TYPE_4__ {unsigned long need_reset; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned long,struct pt_regs*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_3, struct pt_regs *VAR_4)
{
 VAR_1->handle_interrupt(VAR_3, VAR_4, VAR_0);





 if ((VAR_2.need_reset >> VAR_3) & 1)
  VAR_1->reset_ctr(&VAR_2, VAR_3);
}
