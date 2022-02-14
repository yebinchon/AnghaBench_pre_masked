
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int64_t ;
typedef int u_int ;
struct timeval {int tv_sec; } ;
struct nd_prefix {scalar_t__ ndpr_pltime; scalar_t__ ndpr_vltime; void* ndpr_expire; void* ndpr_preferred; void* ndpr_base_uptime; int ndpr_base_calendartime; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nd_prefix*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 () ;

int
FUNC_4(struct nd_prefix *VAR_3)
{
 struct timeval VAR_4;
 u_int64_t VAR_5 = FUNC_3();

 FUNC_0(VAR_3);

 FUNC_1(&VAR_4);
 VAR_3->ndpr_base_calendartime = VAR_4.tv_sec;
 VAR_3->ndpr_base_uptime = VAR_5;


 if (VAR_3->ndpr_pltime > VAR_3->ndpr_vltime) {
  FUNC_2((VAR_1, "in6_init_prefix_ltimes: preferred lifetime"
      "(%d) is greater than valid lifetime(%d)\n",
      (u_int)VAR_3->ndpr_pltime, (u_int)VAR_3->ndpr_vltime));
  return (VAR_0);
 }
 if (VAR_3->ndpr_pltime == VAR_2)
  VAR_3->ndpr_preferred = 0;
 else
  VAR_3->ndpr_preferred = VAR_5 + VAR_3->ndpr_pltime;
 if (VAR_3->ndpr_vltime == VAR_2)
  VAR_3->ndpr_expire = 0;
 else
  VAR_3->ndpr_expire = VAR_5 + VAR_3->ndpr_vltime;

 return (0);
}
