
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct in6_addrlifetime_i {scalar_t__ ia6ti_vltime; scalar_t__ ia6ti_pltime; scalar_t__ ia6ti_base_calendartime; scalar_t__ ia6ti_base_uptime; scalar_t__ ia6ti_expire; scalar_t__ ia6ti_preferred; } ;
struct in6_ifaddr {struct in6_addrlifetime_i ia6_lifetime; } ;
struct in6_addrlifetime {scalar_t__ ia6t_vltime; scalar_t__ ia6t_pltime; scalar_t__ ia6t_expire; scalar_t__ ia6t_preferred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;

void
FUNC_3(struct in6_ifaddr *VAR_1, struct in6_addrlifetime *VAR_2,
    int VAR_3)
{
 struct in6_addrlifetime_i *VAR_4 = &VAR_1->ia6_lifetime;
 struct timeval VAR_5;

 VAR_2->ia6t_vltime = VAR_4->ia6ti_vltime;
 VAR_2->ia6t_pltime = VAR_4->ia6ti_pltime;
 VAR_2->ia6t_expire = 0;
 VAR_2->ia6t_preferred = 0;


 FUNC_1(&VAR_5);
 VAR_4->ia6ti_base_calendartime +=
     FUNC_0(VAR_5,
     VAR_4->ia6ti_base_calendartime, FUNC_2(),
     VAR_4->ia6ti_base_uptime);

 if (VAR_3) {
  if (VAR_4->ia6ti_expire != 0 &&
      VAR_4->ia6ti_vltime != VAR_0)
   VAR_2->ia6t_expire = VAR_4->ia6ti_base_calendartime +
       VAR_4->ia6ti_expire - VAR_4->ia6ti_base_uptime;

  if (VAR_4->ia6ti_preferred != 0 &&
      VAR_4->ia6ti_pltime != VAR_0)
   VAR_2->ia6t_preferred = VAR_4->ia6ti_base_calendartime +
       VAR_4->ia6ti_preferred - VAR_4->ia6ti_base_uptime;
 } else {
  if (VAR_4->ia6ti_expire != 0 &&
      VAR_4->ia6ti_vltime != VAR_0)
   VAR_2->ia6t_expire = VAR_4->ia6ti_expire;

  if (VAR_4->ia6ti_preferred != 0 &&
      VAR_4->ia6ti_pltime != VAR_0)
   VAR_2->ia6t_preferred = VAR_4->ia6ti_preferred;
 }
}
