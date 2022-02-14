
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct fown_struct {int signum; } ;
struct TYPE_4__ {int si_signo; int si_code; long si_band; int si_fd; int si_errno; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long* VAR_6 ;
 int FUNC_2 (int,TYPE_1__*,struct task_struct*,int) ;
 int FUNC_3 (struct task_struct*,struct fown_struct*,int) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_7,
          struct fown_struct *VAR_8,
          int VAR_9, int VAR_10, int VAR_11)
{




 int VAR_12 = FUNC_0(VAR_8->signum);

 if (!FUNC_3(VAR_7, VAR_8, VAR_12))
  return;

 switch (VAR_12) {
  siginfo_t VAR_13;
  default:






   VAR_13.si_signo = VAR_12;
   VAR_13.si_errno = 0;
          VAR_13.si_code = VAR_10;



   FUNC_1((VAR_10 & VAR_4) != VAR_5);
   if (VAR_10 - VAR_1 >= VAR_0)
    VAR_13.si_band = ~0L;
   else
    VAR_13.si_band = VAR_6[VAR_10 - VAR_1];
   VAR_13.si_fd = VAR_9;
   if (!FUNC_2(VAR_12, &VAR_13, VAR_7, VAR_11))
    break;

  case 0:
   FUNC_2(VAR_3, VAR_2, VAR_7, VAR_11);
 }
}
