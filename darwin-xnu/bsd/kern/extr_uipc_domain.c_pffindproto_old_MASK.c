
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw_old {int dummy; } ;
struct protosw {int pr_flags; struct protosw_old* pr_old; } ;
typedef int domain_guard_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct protosw* FUNC_2 (int,int,int) ;

struct protosw_old *
FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 struct protosw_old *VAR_4 = ((void*)0);
 struct protosw *VAR_5;
 domain_guard_t VAR_6;

 VAR_6 = FUNC_0();
 if ((VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3)) != ((void*)0) &&
     (VAR_5->pr_flags & VAR_0))
  VAR_4 = VAR_5->pr_old;
 FUNC_1(VAR_6);
 return (VAR_4);
}
