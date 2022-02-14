
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dts_naggregations; TYPE_2__** dts_aggregations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_6__ {int dtag_id; } ;
typedef TYPE_2__ dtrace_aggregation_t ;
typedef int dtrace_aggid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static dtrace_aggregation_t *
FUNC_2(dtrace_state_t *VAR_2, dtrace_aggid_t VAR_3)
{
 dtrace_aggregation_t *VAR_4;
#pragma unused(agg)

 FUNC_1(&VAR_1, VAR_0);

 if (VAR_3 == 0 || VAR_3 > (dtrace_aggid_t)VAR_2->dts_naggregations)
  return (((void*)0));

 FUNC_0(VAR_2->dts_naggregations > 0 && VAR_2->dts_aggregations != ((void*)0));
 FUNC_0((VAR_4 = VAR_2->dts_aggregations[VAR_3 - 1]) == ((void*)0) ||
     VAR_4->dtag_id == VAR_3);

 return (VAR_2->dts_aggregations[VAR_3 - 1]);
}
