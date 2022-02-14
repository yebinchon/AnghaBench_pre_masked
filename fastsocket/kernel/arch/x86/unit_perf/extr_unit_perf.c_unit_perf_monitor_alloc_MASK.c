
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct unit_perf_monitor {scalar_t__ list; scalar_t__ list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct unit_perf_monitor* FUNC_1 (int,int ) ;
 int FUNC_2 (struct unit_perf_monitor*,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct unit_perf_monitor * FUNC_4(void)
{
 struct unit_perf_monitor *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  return ((void*)0);
 }
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_0(VAR_2->list+VAR_3);
  FUNC_3(VAR_2->list_lock+VAR_3);
 }

 return VAR_2;
}
