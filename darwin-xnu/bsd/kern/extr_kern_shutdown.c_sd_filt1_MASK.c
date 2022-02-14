
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sd_filterargs {int delayterm; int shutdownstate; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_flag; scalar_t__ p_ppid; scalar_t__ p_stat; int p_shutdownstate; int p_lflag; int p_sigcatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(proc_t VAR_4, void * VAR_5)
{
 proc_t VAR_6 = FUNC_0();
 struct sd_filterargs * VAR_7 = (struct sd_filterargs *)VAR_5;
 int VAR_8 = VAR_7-> delayterm;
 int VAR_9 = VAR_7->shutdownstate;

 if (((VAR_4->p_flag&VAR_1) != 0) || (VAR_4->p_ppid == 0)
  ||(VAR_4 == VAR_6) || (VAR_4->p_stat == VAR_3)
  || (VAR_4->p_shutdownstate != VAR_9)
  ||((VAR_8 == 0) && ((VAR_4->p_lflag& VAR_0) == VAR_0))
  || ((VAR_4->p_sigcatch & FUNC_1(VAR_2))== 0)) {
   return(0);
  }
        else
                return(1);
}
