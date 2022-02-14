
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_guest_ip ) () ;scalar_t__ (* is_in_guest ) () ;} ;


 unsigned long FUNC_0 (struct pt_regs*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 () ;

unsigned long FUNC_3(struct pt_regs *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_0 && VAR_0->is_in_guest())
  VAR_2 = VAR_0->get_guest_ip();
 else
  VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
