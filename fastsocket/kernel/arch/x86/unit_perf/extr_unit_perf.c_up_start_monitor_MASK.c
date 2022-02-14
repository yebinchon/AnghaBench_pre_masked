
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unit_perf_monitor {int dummy; } ;
struct cpu_cost_stats {int start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct cpu_cost_stats* FUNC_1 (struct unit_perf_monitor*,char const*) ;
 struct unit_perf_monitor* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(const char *VAR_1)
{
 struct unit_perf_monitor *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  struct cpu_cost_stats *VAR_3 = FUNC_1(VAR_2, VAR_1);

  if (VAR_3) {
   FUNC_0(VAR_3->start);
  }
 }
 FUNC_4();
}
