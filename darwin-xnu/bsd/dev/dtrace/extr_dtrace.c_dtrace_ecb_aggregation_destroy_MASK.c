
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__** dts_aggregations; int dts_aggid_arena; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_9__ {TYPE_1__* dte_state; } ;
typedef TYPE_2__ dtrace_ecb_t ;
struct TYPE_10__ {int dtag_id; } ;
typedef TYPE_3__ dtrace_aggregation_t ;
typedef int dtrace_aggid_t ;
struct TYPE_11__ {int dta_kind; } ;
typedef TYPE_4__ dtrace_action_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,void*,int) ;

__attribute__((used)) static void
FUNC_4(dtrace_ecb_t *VAR_0, dtrace_action_t *VAR_1)
{
 dtrace_aggregation_t *VAR_2 = (dtrace_aggregation_t *)VAR_1;
 dtrace_state_t *VAR_3 = VAR_0->dte_state;
 dtrace_aggid_t VAR_4 = VAR_2->dtag_id;

 FUNC_0(FUNC_1(VAR_1->dta_kind));
 FUNC_3(VAR_3->dts_aggid_arena, (void *)(uintptr_t)VAR_4, 1);

 FUNC_0(VAR_3->dts_aggregations[VAR_4 - 1] == VAR_2);
 VAR_3->dts_aggregations[VAR_4 - 1] = ((void*)0);

 FUNC_2(VAR_2, sizeof (dtrace_aggregation_t));
}
