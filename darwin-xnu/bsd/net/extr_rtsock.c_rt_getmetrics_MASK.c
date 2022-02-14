
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct rt_metrics {scalar_t__ rmx_expire; } ;
struct rtentry {scalar_t__ rt_expire; scalar_t__ base_calendartime; scalar_t__ base_uptime; struct rt_metrics rt_rmx; } ;


 scalar_t__ FUNC_0 (struct timeval,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct rtentry *VAR_0, struct rt_metrics *VAR_1)
{
 struct timeval VAR_2;

 FUNC_1(VAR_0->rt_expire == 0 || VAR_0->rt_rmx.rmx_expire != 0);
 FUNC_1(VAR_0->rt_expire != 0 || VAR_0->rt_rmx.rmx_expire == 0);

 *VAR_1 = VAR_0->rt_rmx;

 if (VAR_0->rt_expire != 0) {

  FUNC_2(&VAR_2);

  VAR_0->base_calendartime +=
      FUNC_0(VAR_2,
      VAR_0->base_calendartime, FUNC_3(), VAR_0->base_uptime);

  VAR_1->rmx_expire = VAR_0->base_calendartime +
      VAR_0->rt_expire - VAR_0->base_uptime;
 } else {
  VAR_1->rmx_expire = 0;
 }
}
