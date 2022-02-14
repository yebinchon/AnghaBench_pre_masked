
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int p_dtrace_probes; } ;
typedef TYPE_1__ proc_t ;
typedef int pid_t ;
struct TYPE_11__ {scalar_t__ ftp_rcount; scalar_t__ ftp_ccount; scalar_t__ ftp_mcount; int ftp_cmtx; int ftp_mtx; TYPE_9__* ftp_proc; int ftp_retired; int ftp_pid; } ;
typedef TYPE_2__ fasttrap_provider_t ;
struct TYPE_12__ {scalar_t__ ftpc_acount; scalar_t__ ftpc_rcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(fasttrap_provider_t *VAR_1)
{
 pid_t VAR_2 = VAR_1->ftp_pid;
 proc_t *VAR_3;





 FUNC_0(VAR_1->ftp_rcount == 0);
 FUNC_0(VAR_1->ftp_ccount == 0);
 FUNC_0(VAR_1->ftp_mcount == 0);





 if (!VAR_1->ftp_retired) {
  FUNC_1(&VAR_1->ftp_proc->ftpc_acount, -1);
  FUNC_0(VAR_1->ftp_proc->ftpc_acount <
  VAR_1->ftp_proc->ftpc_rcount);
 }

 FUNC_2(VAR_1->ftp_proc);





 FUNC_4(&VAR_1->ftp_mtx, VAR_0);
 FUNC_4(&VAR_1->ftp_cmtx, VAR_0);

 FUNC_3(VAR_1, sizeof (fasttrap_provider_t));
 if ((VAR_3 = FUNC_5(VAR_2)) == ((void*)0)) {
  return;
 }

 FUNC_6(VAR_3);
 VAR_3->p_dtrace_probes--;
 FUNC_8(VAR_3);

 FUNC_7(VAR_3);
}
