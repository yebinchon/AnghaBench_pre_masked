
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_19__ {scalar_t__ p_pid; scalar_t__ p_dtrace_count; int p_dtrace_sprlock; } ;
typedef TYPE_2__ proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_20__ {scalar_t__ ftt_pid; TYPE_1__* ftt_proc; struct TYPE_20__* ftt_next; } ;
typedef TYPE_3__ fasttrap_tracepoint_t ;
struct TYPE_21__ {int ftb_mtx; TYPE_3__* ftb_data; } ;
typedef TYPE_4__ fasttrap_bucket_t ;
struct TYPE_18__ {scalar_t__ ftpc_acount; } ;
struct TYPE_17__ {unsigned int fth_nent; TYPE_4__* fth_table; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 TYPE_11__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_12(proc_t *VAR_2, proc_t *VAR_3)
{
 pid_t VAR_4 = VAR_2->p_pid;
 unsigned int VAR_5;

 FUNC_0(FUNC_2() == VAR_2);
 FUNC_1(&VAR_2->p_dtrace_sprlock, VAR_0);
 FUNC_0(VAR_2->p_dtrace_count > 0);
 FUNC_0(VAR_3->p_dtrace_count == 0);
 if (VAR_3 != FUNC_10(VAR_3->p_pid)) {
  FUNC_7("fasttrap_fork: sprlock(%d) returned a different proc\n", VAR_3->p_pid);
  return;
 }
 FUNC_9(VAR_3);





 for (VAR_5 = 0; VAR_5 < VAR_1.fth_nent; VAR_5++) {
  fasttrap_tracepoint_t *VAR_6;
  fasttrap_bucket_t *VAR_7 = &VAR_1.fth_table[VAR_5];

  FUNC_5(&VAR_7->ftb_mtx);
  for (VAR_6 = VAR_7->ftb_data; VAR_6 != ((void*)0); VAR_6 = VAR_6->ftt_next) {
   if (VAR_6->ftt_pid == VAR_4 &&
       VAR_6->ftt_proc->ftpc_acount != 0) {
    FUNC_4(VAR_3, VAR_6);
     FUNC_0(VAR_6->ftt_proc->ftpc_acount != 0);
   }
  }
  FUNC_6(&VAR_7->ftb_mtx);
 }




 FUNC_3(VAR_2, VAR_3);

 FUNC_8(VAR_3);
 FUNC_11(VAR_3);
}
