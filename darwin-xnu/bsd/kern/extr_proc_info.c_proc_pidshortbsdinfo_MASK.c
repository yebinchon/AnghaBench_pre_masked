
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct proc_bsdshortinfo {scalar_t__ pbsi_status; char* pbsi_comm; int pbsi_svgid; int pbsi_svuid; int pbsi_rgid; int pbsi_ruid; int pbsi_gid; int pbsi_uid; int pbsi_flags; int pbsi_pgid; int pbsi_ppid; int pbsi_pid; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_stat; int p_flag; int p_lflag; scalar_t__ task; int p_svgid; int p_svuid; int p_rgid; int p_ruid; int p_gid; int p_uid; int p_comm; int p_pgrpid; int p_ppid; int p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct proc_bsdshortinfo*,int) ;
 int FUNC_4 (scalar_t__,int *) ;

int
FUNC_5(proc_t VAR_28, struct proc_bsdshortinfo * VAR_29, int VAR_30)
{
 FUNC_3(VAR_29, sizeof(struct proc_bsdshortinfo));
 VAR_29->pbsi_pid = VAR_28->p_pid;
 VAR_29->pbsi_ppid = VAR_28->p_ppid;
 VAR_29->pbsi_pgid = VAR_28->p_pgrpid;
 VAR_29->pbsi_status = VAR_28->p_stat;
 FUNC_2(&VAR_28->p_comm, &VAR_29->pbsi_comm[0], VAR_0);
 VAR_29->pbsi_comm[VAR_0 - 1] = '\0';

 VAR_29->pbsi_flags = 0;
 if ((VAR_28->p_flag & VAR_24) == VAR_24)
  VAR_29->pbsi_flags |= VAR_13;
 if ((VAR_28->p_lflag & VAR_22) == VAR_22)
  VAR_29->pbsi_flags |= VAR_15;
 if ((VAR_28->p_lflag & VAR_19) == VAR_19)
  VAR_29->pbsi_flags |= VAR_4;
 if ((VAR_28->p_lflag & VAR_21) == VAR_21)
  VAR_29->pbsi_flags |= VAR_11;
 if ((VAR_28->p_flag & VAR_20) == VAR_20)
  VAR_29->pbsi_flags |= VAR_5;
 if ((VAR_28->p_flag & VAR_16) == VAR_16)
  VAR_29->pbsi_flags |= VAR_1;
 if ((VAR_28->p_flag & VAR_25) == VAR_25)
  VAR_29->pbsi_flags |= VAR_14;
 if ((VAR_28->p_flag & VAR_23) == VAR_23)
  VAR_29->pbsi_flags |= VAR_12;
 if ((VAR_28->p_flag & VAR_18) == VAR_18)
  VAR_29->pbsi_flags |= VAR_3;

 if ((VAR_28->p_flag & VAR_17) == VAR_17)
  VAR_29->pbsi_flags |= VAR_2;


 switch(FUNC_1(VAR_28)) {
  case 128:
   VAR_29->pbsi_flags |= VAR_10;
   break;
  case 129:
   VAR_29->pbsi_flags |= VAR_9;
   break;
  case 130:
   VAR_29->pbsi_flags |= VAR_8;
   break;
 };

 switch(FUNC_0(VAR_28)) {
  case 128:
   VAR_29->pbsi_flags |= VAR_7;
   break;
  case 129:
   VAR_29->pbsi_flags |= VAR_6;
   break;
 };


 if ((VAR_30 == 0) && (VAR_28->p_stat != VAR_26) && (VAR_28->task != VAR_27))
  FUNC_4(VAR_28->task, &VAR_29->pbsi_flags);

 VAR_29->pbsi_uid = VAR_28->p_uid;
 VAR_29->pbsi_gid = VAR_28->p_gid;
 VAR_29->pbsi_ruid = VAR_28->p_ruid;
 VAR_29->pbsi_rgid = VAR_28->p_rgid;
 VAR_29->pbsi_svuid = VAR_28->p_svuid;
 VAR_29->pbsi_svgid = VAR_28->p_svgid;

 return(0);
}
