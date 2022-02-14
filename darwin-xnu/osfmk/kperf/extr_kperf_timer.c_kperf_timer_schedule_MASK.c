
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kperf_timer {scalar_t__ period; int tcall; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct kperf_timer *VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_0, VAR_2->period);


 if (VAR_2->period == 0) {
  return;
 }


 uint64_t VAR_4 = VAR_3 + VAR_2->period;


 FUNC_1(&VAR_2->tcall, VAR_4, VAR_1);
}
