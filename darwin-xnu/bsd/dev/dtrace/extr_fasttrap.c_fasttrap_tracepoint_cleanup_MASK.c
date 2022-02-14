
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_8__ {scalar_t__ ftt_pid; scalar_t__ ftt_pc; scalar_t__ ftt_retired; TYPE_1__* ftt_proc; struct TYPE_8__* ftt_next; } ;
typedef TYPE_2__ fasttrap_tracepoint_t ;
struct TYPE_9__ {int ftb_mtx; TYPE_2__* ftb_data; } ;
typedef TYPE_3__ fasttrap_bucket_t ;
struct TYPE_11__ {scalar_t__ fttps_pc; scalar_t__ fttps_pid; } ;
struct TYPE_10__ {TYPE_3__* fth_table; } ;
struct TYPE_7__ {scalar_t__ ftpc_acount; } ;


 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 int * VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
 size_t VAR_5;
 pid_t VAR_6 = 0;
 user_addr_t VAR_7;
 proc_t *VAR_8 = VAR_0;
 fasttrap_tracepoint_t *VAR_9 = ((void*)0);
 FUNC_2(&VAR_2);
 fasttrap_bucket_t *VAR_10;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_7 = VAR_3[VAR_5].fttps_pc;
  if (VAR_3[VAR_5].fttps_pid != VAR_6) {
   VAR_6 = VAR_3[VAR_5].fttps_pid;
   if (VAR_8 != VAR_0) {
    FUNC_5(VAR_8);
   }
   if ((VAR_8 = FUNC_4(VAR_6)) == VAR_0) {
    VAR_6 = 0;
    continue;
   }
  }
  VAR_10 = &VAR_4.fth_table[FUNC_0(VAR_6, VAR_7)];
  FUNC_2(&VAR_10->ftb_mtx);
  for (VAR_9 = VAR_10->ftb_data; VAR_9 != ((void*)0); VAR_9 = VAR_9->ftt_next) {
   if (VAR_6 == VAR_9->ftt_pid && VAR_7 == VAR_9->ftt_pc &&
   VAR_9->ftt_proc->ftpc_acount != 0)
    break;
  }




  if (VAR_9 == ((void*)0) || VAR_9->ftt_retired == 0) {
   FUNC_3(&VAR_10->ftb_mtx);
   continue;
  }
  FUNC_1(VAR_8, VAR_9);
  FUNC_3(&VAR_10->ftb_mtx);
 }
 if (VAR_8 != VAR_0) {
  FUNC_5(VAR_8);
 }

 VAR_1 = 0;

 FUNC_3(&VAR_2);
}
