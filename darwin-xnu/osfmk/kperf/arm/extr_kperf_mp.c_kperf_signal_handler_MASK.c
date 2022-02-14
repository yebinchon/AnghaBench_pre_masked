
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kperf_timer {int pending_cpus; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct kperf_timer*) ;
 scalar_t__ VAR_0 ;
 struct kperf_timer* VAR_1 ;
 int VAR_2 ;

void
FUNC_3(unsigned int VAR_3)
{
 uint64_t VAR_4 = FUNC_0(1) << VAR_3;


 for(int VAR_5 = 0; VAR_5 < (int)VAR_0; VAR_5++) {
  uint64_t VAR_6;
  struct kperf_timer *VAR_7 = &VAR_1[VAR_5];

  VAR_6 = FUNC_1(&VAR_7->pending_cpus,
    ~VAR_4, VAR_2);
  if (VAR_6 & VAR_4) {
   FUNC_2(VAR_7);
  }
 }
}
