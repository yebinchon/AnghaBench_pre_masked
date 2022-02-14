
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rbs_bot; } ;
struct TYPE_10__ {TYPE_4__* mm; TYPE_3__ thread; TYPE_2__* signal; } ;
struct TYPE_9__ {scalar_t__ start_stack; } ;
struct TYPE_7__ {TYPE_1__* rlim; } ;
struct TYPE_6__ {int rlim_max; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;

inline void
FUNC_1 (void)
{
 unsigned long VAR_3 = VAR_2->signal->rlim[VAR_1].rlim_max & -16;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_2->thread.rbs_bot = FUNC_0(VAR_2->mm->start_stack - VAR_3);
}
