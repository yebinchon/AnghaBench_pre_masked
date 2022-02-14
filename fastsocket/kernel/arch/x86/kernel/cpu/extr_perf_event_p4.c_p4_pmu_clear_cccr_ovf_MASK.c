
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int event_base; int config_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct hw_perf_event *VAR_2)
{
 u64 VAR_3;


 FUNC_0(VAR_2->config_base, VAR_3);
 if (VAR_3 & VAR_1) {
  FUNC_1(VAR_2->config_base, VAR_3 & ~VAR_1);
  return 1;
 }
 FUNC_0(VAR_2->event_base, VAR_3);
 if (!(VAR_3 & VAR_0))
  return 1;

 return 0;
}
