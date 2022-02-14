
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {unsigned long usp; unsigned long unique; } ;
struct TYPE_4__ {TYPE_1__ pcb; } ;


 int* VAR_0 ;
 unsigned long* FUNC_0 (struct task_struct*) ;
 TYPE_2__* FUNC_1 (struct task_struct*) ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long *
FUNC_2(struct task_struct * VAR_2, unsigned long VAR_3)
{
 unsigned long *VAR_4;

 if (VAR_3 == 30) {
  VAR_4 = &FUNC_1(VAR_2)->pcb.usp;
 } else if (VAR_3 == 65) {
  VAR_4 = &FUNC_1(VAR_2)->pcb.unique;
 } else if (VAR_3 == 31 || VAR_3 > 65) {
  VAR_1 = 0;
  VAR_4 = &VAR_1;
 } else {
  VAR_4 = FUNC_0(VAR_2) + VAR_0[VAR_3];
 }
 return VAR_4;
}
