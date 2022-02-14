
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct in6_addrlifetime_i {int ia6ti_pltime; int ia6ti_vltime; int ia6ti_preferred; int ia6ti_expire; int ia6ti_base_uptime; int ia6ti_base_calendartime; } ;
struct in6_ifaddr {struct in6_addrlifetime_i ia6_lifetime; } ;
struct in6_addrlifetime {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;


 scalar_t__ FUNC_0 (struct timeval,int ,int ,int ) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;

void
FUNC_3(struct in6_ifaddr *VAR_0, struct in6_addrlifetime *VAR_1)
{
 struct in6_addrlifetime_i *VAR_2 = &VAR_0->ia6_lifetime;
 struct timeval VAR_3;


 FUNC_1(&VAR_3);
 VAR_2->ia6ti_base_calendartime +=
     FUNC_0(VAR_3,
     VAR_2->ia6ti_base_calendartime, FUNC_2(),
     VAR_2->ia6ti_base_uptime);


 VAR_2->ia6ti_expire = VAR_1->ia6t_expire;
 VAR_2->ia6ti_preferred = VAR_1->ia6t_preferred;
 VAR_2->ia6ti_vltime = VAR_1->ia6t_vltime;
 VAR_2->ia6ti_pltime = VAR_1->ia6t_pltime;
}
