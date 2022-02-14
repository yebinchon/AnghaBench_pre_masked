
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_1__ it_interval; } ;
typedef int proc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int
FUNC_3(proc_t VAR_0,
 struct itimerval *VAR_1, int VAR_2)
{

 FUNC_0(VAR_0);

 if (VAR_1->it_value.tv_usec < VAR_2) {
  if (VAR_1->it_value.tv_sec == 0) {

   VAR_2 -= VAR_1->it_value.tv_usec;
   goto expire;
  }
  VAR_1->it_value.tv_usec += 1000000;
  VAR_1->it_value.tv_sec--;
 }
 VAR_1->it_value.tv_usec -= VAR_2;
 VAR_2 = 0;
 if (FUNC_2(&VAR_1->it_value)) {
  FUNC_1(VAR_0);
  return (1);
 }

expire:
 if (FUNC_2(&VAR_1->it_interval)) {
  VAR_1->it_value = VAR_1->it_interval;
  if (VAR_1->it_value.tv_sec > 0) {
  VAR_1->it_value.tv_usec -= VAR_2;
  if (VAR_1->it_value.tv_usec < 0) {
   VAR_1->it_value.tv_usec += 1000000;
   VAR_1->it_value.tv_sec--;
   }
  }
 } else
  VAR_1->it_value.tv_usec = 0;
 FUNC_1(VAR_0);
 return (0);
}
