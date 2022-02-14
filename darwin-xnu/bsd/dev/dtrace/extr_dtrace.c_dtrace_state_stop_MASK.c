
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int processorid_t ;
struct TYPE_4__ {scalar_t__ dts_activity; scalar_t__ dts_reserve; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_icookie_t ;
struct TYPE_5__ {int cpu_id; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(dtrace_state_t *VAR_9, processorid_t *VAR_10)
{
 dtrace_icookie_t VAR_11;

 FUNC_1(&VAR_7, VAR_6);

 if (VAR_9->dts_activity != VAR_1 &&
     VAR_9->dts_activity != VAR_3)
  return (VAR_5);






 VAR_9->dts_activity = VAR_3;
 FUNC_5();
 VAR_9->dts_activity = VAR_2;
 FUNC_5();
 FUNC_0(VAR_9->dts_activity == VAR_2);
 VAR_9->dts_reserve = 0;

 VAR_11 = FUNC_2();
 *VAR_10 = VAR_0->cpu_id;
 FUNC_4(VAR_8,
     (uint64_t)(uintptr_t)VAR_9, 0, 0, 0, 0);
 FUNC_3(VAR_11);

 VAR_9->dts_activity = VAR_4;
 FUNC_5();

 return (0);
}
