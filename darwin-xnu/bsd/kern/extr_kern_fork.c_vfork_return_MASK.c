
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int thread_t ;
typedef int task_t ;
typedef TYPE_2__* proc_t ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ p_vforkact; int p_lflag; } ;
struct TYPE_9__ {int uu_flag; int uu_vforkmask; int uu_sigmask; scalar_t__ uu_proc; scalar_t__ uu_userstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(proc_t VAR_4, int32_t *VAR_5, int VAR_6)
{
 task_t VAR_7 = FUNC_4(VAR_4->p_vforkact);
 proc_t VAR_8 = FUNC_2(VAR_7);
 thread_t VAR_9 = FUNC_1();
 uthread_t VAR_10 = FUNC_3(VAR_9);

 FUNC_0(VAR_10->uu_userstate);


 FUNC_7(VAR_8);


 VAR_10->uu_userstate = 0;
 VAR_10->uu_flag &= ~VAR_2;

 if (VAR_10->uu_flag & VAR_3) {
  VAR_10->uu_flag |= VAR_1;
  VAR_10->uu_flag &= VAR_3;
 }
 VAR_10->uu_proc = 0;
 VAR_10->uu_sigmask = VAR_10->uu_vforkmask;

 FUNC_5(VAR_4);
 VAR_4->p_lflag &= ~VAR_0;
 VAR_4->p_vforkact = 0;
 FUNC_6(VAR_4);

 FUNC_8(VAR_9, VAR_6);

 if (VAR_5) {
  VAR_5[0] = VAR_6;
  VAR_5[1] = 0;
 }
}
