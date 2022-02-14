
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct sd_iterargs {int setsdstate; int countproc; scalar_t__ activecount; scalar_t__ signo; } ;
struct sd_filterargs {int delayterm; int shutdownstate; } ;
struct TYPE_4__ {struct proc* le_next; } ;
struct proc {int p_listflag; int p_shutdownstate; char* p_comm; int p_pid; int task; TYPE_1__ p_list; } ;
struct TYPE_6__ {struct proc* lh_first; } ;
struct TYPE_5__ {struct proc* lh_first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 struct proc* VAR_6 ;
 int FUNC_1 (scalar_t__*,int ,int ,char*,struct timespec*) ;
 int FUNC_2 (char*,...) ;
 struct proc* FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,void*,int ,void*) ;
 int FUNC_7 (struct proc*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (struct proc*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,char*,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 TYPE_2__ VAR_14 ;

__attribute__((used)) static void
FUNC_13(void)
{
 vfs_context_t VAR_15 = FUNC_12();
 struct proc *VAR_16, *VAR_17;
 int VAR_18 = 0;
 struct sd_filterargs VAR_19;
 struct sd_iterargs VAR_20;
 int VAR_21 = 0;
 struct timespec VAR_22;




 VAR_17 = (struct proc *)FUNC_0();





 VAR_16 = FUNC_3(1);
 if (VAR_16 && VAR_16 != VAR_17) {
  FUNC_8(VAR_16, VAR_4);
 }
 FUNC_7(VAR_16);

 FUNC_2("Killing all processes ");

sigterm_loop:



 VAR_19.delayterm = VAR_18;
 VAR_19.shutdownstate = 0;
 VAR_20.signo = VAR_4;
 VAR_20.setsdstate = 1;
 VAR_20.countproc = 1;
 VAR_20.activecount = 0;

 VAR_21 = 0;

 FUNC_6(VAR_9, (void *)&VAR_20, VAR_12, (void *)&VAR_19);

 if (VAR_20.activecount != 0 && VAR_8!= 0) {
  FUNC_4();
  if (VAR_8 != 0) {





   VAR_22.tv_sec = 3;
   VAR_22.tv_nsec = 0;
   VAR_21 = FUNC_1(&VAR_8, VAR_7, VAR_1, "shutdownwait", &VAR_22);
   if (VAR_21 != 0) {
    for (VAR_16 = VAR_5.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
     if ((VAR_16->p_listflag & VAR_2) == VAR_2)
      VAR_16->p_listflag &= ~VAR_2;
    }
    for (VAR_16 = VAR_14.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
     if ((VAR_16->p_listflag & VAR_2) == VAR_2)
      VAR_16->p_listflag &= ~VAR_2;
    }
   }
  }
  FUNC_5();
 }
 if (VAR_21 == VAR_0) {




  FUNC_4();

  for (VAR_16 = VAR_5.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
   if (VAR_16->p_shutdownstate == 1) {
    FUNC_2("%s[%d]: didn't act on SIGTERM\n", VAR_16->p_comm, VAR_16->p_pid);
    FUNC_10(VAR_15, "%s[%d]: didn't act on SIGTERM\n", VAR_16->p_comm, VAR_16->p_pid);
   }
  }

  FUNC_5();
 }




 VAR_19.delayterm = VAR_18;
 VAR_19.shutdownstate = 2;
 VAR_20.signo = VAR_3;
 VAR_20.setsdstate = 2;
 VAR_20.countproc = 1;
 VAR_20.activecount = 0;


 FUNC_6(VAR_10, (void *)&VAR_20, VAR_13, (void *)&VAR_19);

 VAR_21 = 0;

 if (VAR_20.activecount != 0 && VAR_8!= 0) {
  FUNC_4();
  if (VAR_8 != 0) {






   VAR_22.tv_sec = 10;
   VAR_22.tv_nsec = 0;
   VAR_21 = FUNC_1(&VAR_8, VAR_7, VAR_1, "shutdownwait", &VAR_22);
   if (VAR_21 != 0) {
    for (VAR_16 = VAR_5.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
     if ((VAR_16->p_listflag & VAR_2) == VAR_2)
      VAR_16->p_listflag &= ~VAR_2;
    }
    for (VAR_16 = VAR_14.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
     if ((VAR_16->p_listflag & VAR_2) == VAR_2)
      VAR_16->p_listflag &= ~VAR_2;
    }
   }
  }
  FUNC_5();
 }

 if (VAR_21 == VAR_0) {




  FUNC_4();

  for (VAR_16 = VAR_5.lh_first; VAR_16; VAR_16 = VAR_16->p_list.le_next) {
   if (VAR_16->p_shutdownstate == 2) {
    FUNC_2("%s[%d]: didn't act on SIGKILL\n", VAR_16->p_comm, VAR_16->p_pid);
    FUNC_10(VAR_15, "%s[%d]: didn't act on SIGKILL\n", VAR_16->p_comm, VAR_16->p_pid);
   }
  }

  FUNC_5();
 }




 VAR_19.delayterm = VAR_18;
 VAR_19.shutdownstate = 3;
 VAR_20.signo = 0;
 VAR_20.setsdstate = 3;
 VAR_20.countproc = 0;
 VAR_20.activecount = 0;




 FUNC_6(VAR_11, (void *)&VAR_20, VAR_13, (void *)&VAR_19);
 FUNC_2("\n");


 if (VAR_18 == 0) {
  VAR_18 = 1;
  goto sigterm_loop;
 }

 FUNC_9(VAR_15);




 FUNC_11(VAR_6->task);


 FUNC_7(VAR_6);
 FUNC_2("continuing\n");
}
