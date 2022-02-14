
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tty {int t_dev; } ;
struct session {int s_ttypgrpid; scalar_t__ s_ttyvp; } ;
struct proc_bsdinfo {scalar_t__ pbi_status; char* pbi_comm; char* pbi_name; int e_tpgid; int e_tdev; int pbi_pjobc; int pbi_pgid; int pbi_nfiles; int pbi_flags; int pbi_start_tvusec; int pbi_start_tvsec; int pbi_nice; int pbi_svgid; int pbi_svuid; int pbi_rgid; int pbi_ruid; int pbi_gid; int pbi_uid; int pbi_ppid; int pbi_pid; int pbi_xstatus; } ;
struct pgrp {int pg_jobc; } ;
typedef TYPE_3__* proc_t ;
typedef int kauth_cred_t ;
struct TYPE_11__ {int tv_usec; int tv_sec; } ;
struct TYPE_13__ {scalar_t__ p_stat; int p_flag; int p_lflag; scalar_t__ task; int p_pgrpid; TYPE_2__* p_fd; int p_name; int p_comm; TYPE_1__ p_start; int p_nice; int p_ppid; int p_pid; int p_xstat; } ;
struct TYPE_12__ {int fd_nfiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pgrp* VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;



 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct session* VAR_30 ;
 struct tty* FUNC_2 (struct session*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct session*) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct proc_bsdinfo*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct pgrp*) ;
 int FUNC_15 (scalar_t__,int *) ;
 struct pgrp* FUNC_16 (TYPE_3__*) ;
 struct session* FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (struct session*) ;

int
FUNC_19(proc_t VAR_33, struct proc_bsdinfo * VAR_34, int VAR_35)
{
 struct tty *VAR_36;
 struct session *VAR_37 = ((void*)0);
 struct pgrp * VAR_38;
 kauth_cred_t VAR_39;

 VAR_38 = FUNC_16(VAR_33);
 VAR_37 = FUNC_17(VAR_33);

 VAR_39 = FUNC_12(VAR_33);
 FUNC_5(VAR_34, sizeof(struct proc_bsdinfo));
 VAR_34->pbi_status = VAR_33->p_stat;
 VAR_34->pbi_xstatus = VAR_33->p_xstat;
 VAR_34->pbi_pid = VAR_33->p_pid;
 VAR_34->pbi_ppid = VAR_33->p_ppid;
 VAR_34->pbi_uid = FUNC_11(VAR_39);
 VAR_34->pbi_gid = FUNC_6(VAR_39);
 VAR_34->pbi_ruid = FUNC_8(VAR_39);
 VAR_34->pbi_rgid = FUNC_7(VAR_39);
 VAR_34->pbi_svuid = FUNC_10(VAR_39);
 VAR_34->pbi_svgid = FUNC_9(VAR_39);
 FUNC_13(&VAR_39);

 VAR_34->pbi_nice = VAR_33->p_nice;
 VAR_34->pbi_start_tvsec = VAR_33->p_start.tv_sec;
 VAR_34->pbi_start_tvusec = VAR_33->p_start.tv_usec;
 FUNC_4(&VAR_33->p_comm, &VAR_34->pbi_comm[0], VAR_0);
 VAR_34->pbi_comm[VAR_0 - 1] = '\0';
 FUNC_4(&VAR_33->p_name, &VAR_34->pbi_name[0], 2*VAR_0);
 VAR_34->pbi_name[(2*VAR_0) - 1] = '\0';

 VAR_34->pbi_flags = 0;
 if ((VAR_33->p_flag & VAR_28) == VAR_28)
  VAR_34->pbi_flags |= VAR_17;
 if ((VAR_33->p_lflag & VAR_26) == VAR_26)
  VAR_34->pbi_flags |= VAR_19;
 if ((VAR_33->p_lflag & VAR_23) == VAR_23)
  VAR_34->pbi_flags |= VAR_7;
 if ((VAR_33->p_lflag & VAR_25) == VAR_25)
  VAR_34->pbi_flags |= VAR_14;
 if ((VAR_33->p_flag & VAR_24) == VAR_24)
  VAR_34->pbi_flags |= VAR_8;
 if ((VAR_33->p_flag & VAR_20) == VAR_20)
  VAR_34->pbi_flags |= VAR_3;
 if ((VAR_33->p_flag & VAR_29) == VAR_29)
  VAR_34->pbi_flags |= VAR_18;
 if ((VAR_33->p_flag & VAR_27) == VAR_27)
  VAR_34->pbi_flags |= VAR_15;
 if ((VAR_33->p_flag & VAR_22) == VAR_22)
  VAR_34->pbi_flags |= VAR_6;

 if (VAR_37 != VAR_30) {
  if (FUNC_3(VAR_33, VAR_37))
   VAR_34->pbi_flags |= VAR_16;
  if (VAR_37->s_ttyvp)
   VAR_34->pbi_flags |= VAR_4;
 }


 if ((VAR_33->p_flag & VAR_21) == VAR_21)
  VAR_34->pbi_flags |= VAR_5;


 switch(FUNC_1(VAR_33)) {
  case 128:
   VAR_34->pbi_flags |= VAR_13;
   break;
  case 129:
   VAR_34->pbi_flags |= VAR_12;
   break;
  case 130:
   VAR_34->pbi_flags |= VAR_11;
   break;
 };

 switch(FUNC_0(VAR_33)) {
  case 128:
   VAR_34->pbi_flags |= VAR_10;
   break;
  case 129:
   VAR_34->pbi_flags |= VAR_9;
   break;
 };


 if ((VAR_35 == 0) && (VAR_33->p_stat != VAR_31) && (VAR_33->task != VAR_32))
  FUNC_15(VAR_33->task, &VAR_34->pbi_flags);

 if (VAR_35 == 0)
  VAR_34->pbi_nfiles = VAR_33->p_fd->fd_nfiles;

 VAR_34->e_tdev = VAR_1;
 if (VAR_38 != VAR_2) {
  VAR_34->pbi_pgid = VAR_33->p_pgrpid;
  VAR_34->pbi_pjobc = VAR_38->pg_jobc;
  if ((VAR_33->p_flag & VAR_20) && (VAR_37 != VAR_30) && (VAR_36 = FUNC_2(VAR_37))) {
   VAR_34->e_tdev = VAR_36->t_dev;
   VAR_34->e_tpgid = VAR_37->s_ttypgrpid;
  }
 }
 if (VAR_37 != VAR_30)
  FUNC_18(VAR_37);
 if (VAR_38 != VAR_2)
  FUNC_14(VAR_38);

 return(0);
}
