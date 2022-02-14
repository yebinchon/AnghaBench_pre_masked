
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int flags; } ;
struct TYPE_2__ {scalar_t__ (* is_user_mode ) () ;scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

unsigned long FUNC_3(struct pt_regs *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6 && VAR_6->is_in_guest()) {
  if (VAR_6->is_user_mode())
   VAR_8 |= VAR_3;
  else
   VAR_8 |= VAR_2;
 } else {
  if (FUNC_2(VAR_7))
   VAR_8 |= VAR_5;
  else
   VAR_8 |= VAR_4;
 }

 if (VAR_7->flags & VAR_0)
  VAR_8 |= VAR_1;

 return VAR_8;
}
