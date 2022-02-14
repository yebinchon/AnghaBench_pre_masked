
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pid; TYPE_2__* signal; } ;
struct TYPE_7__ {TYPE_1__* rlim; } ;
struct TYPE_6__ {int rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ,long,long) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,long) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (TYPE_3__*,long) ;

__attribute__((used)) static void FUNC_4(long VAR_3)
{
 long VAR_4;
 if (FUNC_2(VAR_2, VAR_3)) {
  FUNC_3(VAR_2, VAR_3);
  return;
 }
 VAR_4 = 20 - VAR_2->signal->rlim[VAR_1].rlim_cur;
 FUNC_0(VAR_0,
       "binder: %d: nice value %ld not allowed use "
       "%ld instead\n", VAR_2->pid, VAR_3, VAR_4);
 FUNC_3(VAR_2, VAR_4);
 if (VAR_4 < 20)
  return;
 FUNC_1("binder: %d RLIMIT_NICE not set\n", VAR_2->pid);
}
