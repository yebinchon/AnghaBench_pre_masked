
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6protosw {int pr_flags; } ;
struct domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

void
FUNC_2(struct ip6protosw *VAR_2, struct domain *VAR_3)
{
#pragma unused(dp)
 static int VAR_4 = 0;


 FUNC_0(VAR_2 == ((void*)0) ||
     (VAR_2->pr_flags & (VAR_1|VAR_0)) == VAR_0);


 if (!VAR_4) {
  VAR_4 = 1;
  FUNC_1();
 }
}
