
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_2__* uthread_t ;
typedef scalar_t__ uid_t ;
typedef int * thread_t ;
typedef scalar_t__ rlim_t ;
typedef TYPE_3__* proc_t ;
typedef int coalition_t ;
struct TYPE_19__ {int p_pid; char* p_comm; void* p_acflag; int p_ucred; int task; int p_lflag; int p_stat; int * p_vforkact; TYPE_1__* p_rlimit; } ;
struct TYPE_18__ {int uu_flag; int uu_sigmask; int uu_vforkmask; void* uu_userstate; TYPE_3__* uu_proc; } ;
struct TYPE_17__ {scalar_t__ rlim_cur; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int) ;
 int * FUNC_3 (int ,int *,TYPE_3__*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (char*,int,...) ;
 int VAR_16 ;
 int FUNC_14 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int) ;

int
FUNC_25(proc_t VAR_17, thread_t *VAR_18, int VAR_19, coalition_t *VAR_20)
{
 thread_t VAR_21 = (thread_t)FUNC_4();
 uthread_t VAR_22 = (uthread_t)FUNC_8(VAR_21);
 proc_t VAR_23 = ((void*)0);
 thread_t VAR_24 = ((void*)0);
 uid_t VAR_25;
 int VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;
 VAR_25 = FUNC_10();
 FUNC_16();
 if ((VAR_15 >= VAR_14 - 1 && VAR_25 != 0) || VAR_15 >= VAR_14) {
  FUNC_17();
  FUNC_21("proc");
  return (VAR_1);
 }
 FUNC_17();







 VAR_26 = FUNC_2(VAR_25, 1);
 if (VAR_25 != 0 &&
     (rlim_t)VAR_26 > VAR_17->p_rlimit[VAR_7].rlim_cur) {
      VAR_27 = VAR_1;
  goto bad;
 }
 switch(VAR_19) {
 case 128:
  if (VAR_22->uu_flag & VAR_11) {
   FUNC_15("fork1 called within vfork by %s\n", VAR_17->p_comm);
   VAR_27 = VAR_2;
   goto bad;
  }







  FUNC_18(VAR_17);


  if ((VAR_23 = FUNC_6(VAR_17)) == ((void*)0)) {

   FUNC_19(VAR_17);
   VAR_27 = VAR_3;
   goto bad;
  }
  FUNC_20(VAR_23);

  FUNC_0(VAR_16, VAR_23->p_pid);
  VAR_23->task = VAR_17->task;

  VAR_23->p_lflag |= VAR_5;
  VAR_23->p_vforkact = VAR_21;
  VAR_23->p_stat = VAR_8;
  VAR_22->uu_flag |= VAR_11 | VAR_12;
  VAR_22->uu_proc = VAR_23;
  VAR_22->uu_userstate = (void *)FUNC_1();
  VAR_22->uu_vforkmask = VAR_22->uu_sigmask;


  if (VAR_22->uu_flag & VAR_10) {
   VAR_22->uu_flag |= VAR_13;
   VAR_22->uu_flag &= ~VAR_10;
  }



  FUNC_24(VAR_21, VAR_23->p_pid);

  VAR_23->p_acflag = VAR_0;






  VAR_23->p_lflag |= VAR_6;
  FUNC_14(VAR_17, VAR_23);

  break;

 case 129:






  VAR_28 = 1;



 case 130:






  if ((VAR_24 = FUNC_3(VAR_17->task,
      VAR_28 ? VAR_20 : ((void*)0),
      VAR_17,
      VAR_28 ? VAR_4 : VAR_9,
      VAR_4)) == ((void*)0)) {

   VAR_27 = VAR_1;
   goto bad;
  }


  if (!VAR_28) {
   FUNC_23(VAR_24);
  }


  VAR_23 = (proc_t)(FUNC_7(FUNC_9(VAR_24)));
  FUNC_20(VAR_23);

  FUNC_0(VAR_16, VAR_23->p_pid);
  FUNC_24(VAR_24, VAR_23->p_pid);

  VAR_23->p_acflag = VAR_0;




  if (!VAR_28) {




   FUNC_22(FUNC_9(VAR_24));
  }

  break;

 default:
  FUNC_13("fork1 called with unknown kind %d", VAR_19);
  break;
 }



 *VAR_18 = VAR_24;

bad:





 if (VAR_27) {
  (void)FUNC_2(VAR_25, -1);
 }

 return (VAR_27);
}
