
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long ieee_state; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long* FUNC_0 (struct task_struct*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_3(struct task_struct *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 if (VAR_3 == 63) {
  FUNC_2(VAR_2)->ieee_state
    = ((FUNC_2(VAR_2)->ieee_state & ~VAR_1)
       | (VAR_4 & VAR_1));
  VAR_4 = (VAR_4 & VAR_0) | FUNC_1(VAR_4);
 }
 *FUNC_0(VAR_2, VAR_3) = VAR_4;
 return 0;
}
