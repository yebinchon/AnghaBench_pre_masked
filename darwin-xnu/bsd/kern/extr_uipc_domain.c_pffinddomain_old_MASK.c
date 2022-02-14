
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_old {int dummy; } ;
struct domain {int dom_flags; struct domain_old* dom_old; } ;
typedef int domain_guard_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct domain* FUNC_2 (int) ;

struct domain_old *
FUNC_3(int VAR_1)
{
 struct domain_old *VAR_2 = ((void*)0);
 struct domain *VAR_3;
 domain_guard_t VAR_4;

 VAR_4 = FUNC_0();
 if ((VAR_3 = FUNC_2(VAR_1)) != ((void*)0) && (VAR_3->dom_flags & VAR_0))
  VAR_2 = VAR_3->dom_old;
 FUNC_1(VAR_4);
 return (VAR_2);
}
