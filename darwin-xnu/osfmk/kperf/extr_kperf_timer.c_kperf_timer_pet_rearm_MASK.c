
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kperf_timer {scalar_t__ period; int tcall; } ;


 int FUNC_0 (int ,scalar_t__,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 () ;
 size_t VAR_7 ;
 struct kperf_timer* VAR_8 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (int *,scalar_t__,int ) ;

void
FUNC_4(uint64_t VAR_11)
{
 struct kperf_timer *VAR_12 = ((void*)0);
 uint64_t VAR_13 = 0;
 uint64_t VAR_14;





 if (VAR_10 >= VAR_7) {
  return;
 }

 unsigned int VAR_15 = FUNC_1();

 if (VAR_15 == VAR_0) {
  FUNC_0(VAR_2, VAR_4);
  return;
 } else if (VAR_15 == VAR_1) {
  FUNC_0(VAR_2, VAR_5);
  return;
 }

 VAR_12 = &(VAR_8[VAR_10]);


 if (!VAR_12->period) {
  return;
 }


 if (VAR_12->period > VAR_11) {
  VAR_13 = VAR_12->period - VAR_11;
 }


 if (VAR_13 < VAR_9) {
  VAR_13 = VAR_9;
 }




 VAR_14 = FUNC_2() + VAR_13;

 FUNC_0(VAR_3, VAR_12->period, VAR_13, VAR_11, VAR_14);


 FUNC_3(&VAR_12->tcall, VAR_14, VAR_6);

 return;
}
