
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct rtentry {scalar_t__ rt_expire; int rt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct rtentry *VAR_2)
{
 uint64_t VAR_3 = FUNC_0();





 if ((VAR_2->rt_expire == 0) ||
     (VAR_2->rt_flags & VAR_1) ||
     !(VAR_2->rt_flags & VAR_0)) {
  return;
 }

 if (VAR_2->rt_expire > VAR_3)
  VAR_2->rt_expire = VAR_3;
 return;
}
