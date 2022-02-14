
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int p_pid; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_12__ {int ftt_retired; int ftt_pc; } ;
typedef TYPE_2__ fasttrap_tracepoint_t ;
struct TYPE_13__ {int fttps_pc; int fttps_pid; } ;
typedef TYPE_3__ fasttrap_tracepoint_spec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;

void
FUNC_6(proc_t *VAR_6, fasttrap_tracepoint_t *VAR_7)
{
 if (VAR_7->ftt_retired)
  return;
 FUNC_3(&VAR_3);
 fasttrap_tracepoint_spec_t *VAR_8 = &VAR_5[VAR_2++];
 VAR_8->fttps_pid = VAR_6->p_pid;
 VAR_8->fttps_pc = VAR_7->ftt_pc;

 if (VAR_2 == VAR_4) {
  fasttrap_tracepoint_spec_t *VAR_9 = FUNC_2(
     VAR_4 * 2 *
     sizeof(*VAR_5),
     VAR_1);
  FUNC_5(VAR_9, VAR_5, sizeof(*VAR_5) * VAR_4);
  FUNC_1(VAR_5, sizeof(*VAR_5) * VAR_4);
  VAR_4 *= 2;
  VAR_5 = VAR_9;
 }

 FUNC_4(&VAR_3);

 VAR_7->ftt_retired = 1;

 FUNC_0(VAR_0);
}
