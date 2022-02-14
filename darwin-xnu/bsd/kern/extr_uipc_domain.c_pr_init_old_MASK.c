
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protosw {int pr_flags; TYPE_1__* pr_old; } ;
struct domain {int dummy; } ;
struct TYPE_2__ {int (* pr_init ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct protosw *VAR_1, struct domain *VAR_2)
{
#pragma unused(dp)
 FUNC_0(VAR_1->pr_flags & VAR_0);
 FUNC_0(VAR_1->pr_old != ((void*)0));

 if (VAR_1->pr_old->pr_init != ((void*)0))
  VAR_1->pr_old->pr_init();
}
