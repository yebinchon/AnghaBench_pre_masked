
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct nd_prefix {int dummy; } ;
struct in6_addrlifetime {scalar_t__ ia6t_vltime; scalar_t__ ia6t_pltime; void* ia6t_preferred; void* ia6t_expire; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct nd_prefix *VAR_1, struct in6_addrlifetime *VAR_2)
{
#pragma unused(new)
 uint64_t VAR_3 = FUNC_0();



 if (VAR_2->ia6t_vltime == VAR_0) {
  VAR_2->ia6t_expire = 0;
 } else {
  VAR_2->ia6t_expire = VAR_3;
  VAR_2->ia6t_expire += VAR_2->ia6t_vltime;
 }


 if (VAR_2->ia6t_pltime == VAR_0) {
  VAR_2->ia6t_preferred = 0;
 } else {
  VAR_2->ia6t_preferred = VAR_3;
  VAR_2->ia6t_preferred += VAR_2->ia6t_pltime;
 }
}
