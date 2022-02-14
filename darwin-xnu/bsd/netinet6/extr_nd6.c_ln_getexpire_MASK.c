
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {int dummy; } ;
struct rtentry {scalar_t__ base_calendartime; scalar_t__ base_uptime; } ;
struct llinfo_nd6 {scalar_t__ ln_expire; struct rtentry* ln_rt; } ;


 scalar_t__ FUNC_0 (struct timeval,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 () ;

__attribute__((used)) static uint64_t
FUNC_4(struct llinfo_nd6 *VAR_0)
{
 struct timeval VAR_1;
 uint64_t VAR_2;

 if (VAR_0->ln_expire != 0) {
  struct rtentry *VAR_3 = VAR_0->ln_rt;

  FUNC_1(VAR_3 != ((void*)0));

  FUNC_2(&VAR_1);

  VAR_3->base_calendartime +=
      FUNC_0(VAR_1,
      VAR_3->base_calendartime, FUNC_3(), VAR_3->base_uptime);

  VAR_2 = VAR_3->base_calendartime +
      VAR_0->ln_expire - VAR_3->base_uptime;
 } else {
  VAR_2 = 0;
 }
 return (VAR_2);
}
