
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sd_filterargs {int delayterm; int shutdownstate; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_flag; scalar_t__ p_ppid; scalar_t__ p_stat; int p_shutdownstate; int p_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(proc_t VAR_3, void * VAR_4)
{
 proc_t VAR_5 = FUNC_0();
 struct sd_filterargs * VAR_6 = (struct sd_filterargs *)VAR_4;
 int VAR_7 = VAR_6-> delayterm;
 int VAR_8 = VAR_6->shutdownstate;

 if (((VAR_3->p_flag&VAR_1) != 0) || (VAR_3->p_ppid == 0)
  ||(VAR_3 == VAR_5) || (VAR_3->p_stat == VAR_2)
  || (VAR_3->p_shutdownstate == VAR_8)
  ||((VAR_7 == 0) && ((VAR_3->p_lflag& VAR_0) == VAR_0))) {
   return(0);
  }
        else
                return(1);
}
