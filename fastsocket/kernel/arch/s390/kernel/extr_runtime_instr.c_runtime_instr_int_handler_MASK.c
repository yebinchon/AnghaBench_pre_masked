
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct siginfo {scalar_t__ si_signo; int si_int; int si_code; } ;
typedef int info ;
typedef int __u16 ;
struct TYPE_7__ {int ext_params; } ;
struct TYPE_5__ {scalar_t__ ri_signum; int ri_cb; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (struct siginfo*,int ,int) ;
 int FUNC_2 (scalar_t__,struct siginfo*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(__u16 VAR_10)
{
 struct siginfo VAR_11;

 if (!(VAR_5.ext_params & VAR_2))
  return;

 if (!VAR_9->thread.ri_cb)
  return;
 if (VAR_9->thread.ri_signum < VAR_7 ||
     VAR_9->thread.ri_signum > VAR_6) {
  FUNC_0(1);
  return;
 }

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.si_signo = VAR_9->thread.ri_signum;
 VAR_11.si_code = VAR_8;
 if (VAR_5.ext_params & VAR_0)
  VAR_11.si_int = VAR_4;
 else if (VAR_5.ext_params & VAR_1)
  VAR_11.si_int = VAR_3;
 else

  return;

 FUNC_2(VAR_9->thread.ri_signum, &VAR_11, VAR_9);
}
