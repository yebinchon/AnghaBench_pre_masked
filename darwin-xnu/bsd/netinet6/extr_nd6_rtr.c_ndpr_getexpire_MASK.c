
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {int dummy; } ;
struct nd_prefix {scalar_t__ ndpr_expire; scalar_t__ ndpr_vltime; scalar_t__ ndpr_base_calendartime; scalar_t__ ndpr_base_uptime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;

uint64_t
FUNC_3(struct nd_prefix *VAR_1)
{
 struct timeval VAR_2;
 uint64_t VAR_3;

 if (VAR_1->ndpr_expire != 0 && VAR_1->ndpr_vltime != VAR_0) {

  FUNC_1(&VAR_2);

  VAR_1->ndpr_base_calendartime +=
      FUNC_0(VAR_2,
      VAR_1->ndpr_base_calendartime, FUNC_2(),
      VAR_1->ndpr_base_uptime);

  VAR_3 = VAR_1->ndpr_base_calendartime +
      VAR_1->ndpr_expire - VAR_1->ndpr_base_uptime;
 } else {
  VAR_3 = 0;
 }
 return (VAR_3);
}
