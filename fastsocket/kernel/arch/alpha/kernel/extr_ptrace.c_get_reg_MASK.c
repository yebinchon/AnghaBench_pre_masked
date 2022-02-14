
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long ieee_state; } ;


 unsigned long VAR_0 ;
 unsigned long* FUNC_0 (struct task_struct*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static unsigned long
FUNC_3(struct task_struct * VAR_1, unsigned long VAR_2)
{

 if (VAR_2 == 63) {
  unsigned long VAR_3 = *FUNC_0(VAR_1, VAR_2);
  unsigned long VAR_4
    = FUNC_2(VAR_1)->ieee_state & VAR_0;
  VAR_4 = FUNC_1(VAR_4, VAR_3);
  return VAR_3 | VAR_4;
 }
 return *FUNC_0(VAR_1, VAR_2);
}
