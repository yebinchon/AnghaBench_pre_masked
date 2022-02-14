
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned long flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct task_struct *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2)->flags;




 if (FUNC_1(VAR_2, VAR_0))
  VAR_3 &= ~VAR_1;

 return VAR_3;
}
