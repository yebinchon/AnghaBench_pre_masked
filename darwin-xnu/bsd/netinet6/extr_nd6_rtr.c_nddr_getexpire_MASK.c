
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {int dummy; } ;
struct nd_defrouter {scalar_t__ expire; scalar_t__ base_calendartime; scalar_t__ base_uptime; } ;


 scalar_t__ FUNC_0 (struct timeval,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;

uint64_t
FUNC_3(struct nd_defrouter *VAR_0)
{
 struct timeval VAR_1;
 uint64_t VAR_2;

 if (VAR_0->expire != 0) {

  FUNC_1(&VAR_1);

  VAR_0->base_calendartime +=
      FUNC_0(VAR_1,
      VAR_0->base_calendartime, FUNC_2(), VAR_0->base_uptime);

  VAR_2 = VAR_0->base_calendartime +
      VAR_0->expire - VAR_0->base_uptime;
 } else {
  VAR_2 = 0;
 }
 return (VAR_2);
}
