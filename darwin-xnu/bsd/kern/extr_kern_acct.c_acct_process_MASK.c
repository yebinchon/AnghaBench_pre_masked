
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct tty {int t_dev; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct session {int dummy; } ;
struct rusage {int ru_ixrss; int ru_idrss; int ru_isrss; int ru_inblock; int ru_oublock; } ;
struct acct {int ac_mem; int ac_flag; int ac_tty; int ac_gid; int ac_uid; void* ac_io; void* ac_etime; int ac_btime; void* ac_stime; void* ac_utime; int ac_comm; } ;
typedef TYPE_2__* proc_t ;
typedef int off_t ;
typedef int kauth_cred_t ;
typedef int caddr_t ;
typedef int an_acct ;
struct TYPE_13__ {int tv_sec; } ;
struct TYPE_12__ {int p_flag; int p_acflag; TYPE_1__* p_stats; TYPE_4__ p_start; int p_comm; } ;
struct TYPE_11__ {struct rusage p_ru; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int VAR_4 ;
 struct session* VAR_5 ;
 struct tty* FUNC_2 (struct session*) ;
 struct tty* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct vnode* VAR_9 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,struct timeval*,struct timeval*,int *) ;
 void* FUNC_5 (int,int) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct timeval*) ;
 int FUNC_11 (TYPE_2__*) ;
 struct session* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct session*) ;
 int VAR_11 ;
 int FUNC_15 (struct timeval*,struct timeval*) ;
 int FUNC_16 (struct timeval*,TYPE_4__*) ;
 int FUNC_17 (struct tty*) ;
 int FUNC_18 (struct tty*) ;
 int FUNC_19 (int ,struct vnode*,int ,int,int ,int ,int,int ,int*,TYPE_2__*) ;
 int FUNC_20 (struct vnode*) ;
 int FUNC_21 (struct vnode*) ;

int
FUNC_22(proc_t VAR_12)
{
 struct acct VAR_13;
 struct rusage VAR_14, *VAR_15;
 struct timeval VAR_16, VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;
 struct vnode *VAR_21;
 kauth_cred_t VAR_22;
 struct session * VAR_23;
 struct tty *VAR_24;


 FUNC_0();
 VAR_21 = VAR_9;
 if (VAR_21 == VAR_3) {
  FUNC_1();
  return (0);
 }






 FUNC_3(VAR_12->p_comm, VAR_13.ac_comm, sizeof VAR_13.ac_comm);


 FUNC_4(VAR_12, &VAR_16, &VAR_17, ((void*)0));
 VAR_13.ac_utime = FUNC_5(VAR_16.tv_sec, VAR_16.tv_usec);
 VAR_13.ac_stime = FUNC_5(VAR_17.tv_sec, VAR_17.tv_usec);


 VAR_13.ac_btime = VAR_12->p_start.tv_sec;
 FUNC_10(&VAR_18);
 FUNC_16(&VAR_18, &VAR_12->p_start);
 VAR_13.ac_etime = FUNC_5(VAR_18.tv_sec, VAR_18.tv_usec);


 FUNC_11(VAR_12);
 VAR_14 = VAR_12->p_stats->p_ru;
 FUNC_13(VAR_12);
 VAR_15 = &VAR_14;
 VAR_18 = VAR_16;
 FUNC_15(&VAR_18, &VAR_17);
 VAR_19 = VAR_18.tv_sec * VAR_10 + VAR_18.tv_usec / VAR_11;
 if (VAR_19)
  VAR_13.ac_mem = (VAR_15->ru_ixrss + VAR_15->ru_idrss + VAR_15->ru_isrss) / VAR_19;
 else
  VAR_13.ac_mem = 0;


 VAR_13.ac_io = FUNC_5(VAR_15->ru_inblock + VAR_15->ru_oublock, 0);


 VAR_22 = FUNC_8(VAR_12);

 VAR_13.ac_uid = FUNC_7(VAR_22);
 VAR_13.ac_gid = FUNC_6(VAR_22);



 VAR_23 = FUNC_12(VAR_12);
 if ((VAR_12->p_flag & VAR_4) && (VAR_23 != VAR_5) && ((VAR_24 = FUNC_2(VAR_23)) != VAR_6)) {
  FUNC_17(VAR_24);
  VAR_13.ac_tty = VAR_24->t_dev;
  FUNC_18(VAR_24);
  }else
  VAR_13.ac_tty = VAR_2;

 if (VAR_23 != VAR_5)
  FUNC_14(VAR_23);


 VAR_13.ac_flag = VAR_12->p_acflag;




 if ((VAR_20 = FUNC_20(VAR_21)) == 0) {
         VAR_20 = FUNC_19(VAR_8, VAR_21, (caddr_t)&VAR_13, sizeof (VAR_13),
    (off_t)0, VAR_7, VAR_0|VAR_1, VAR_22,
    (int *)0, VAR_12);
  FUNC_21(VAR_21);
 }

 FUNC_9(&VAR_22);
 FUNC_1();

 return (VAR_20);
}
