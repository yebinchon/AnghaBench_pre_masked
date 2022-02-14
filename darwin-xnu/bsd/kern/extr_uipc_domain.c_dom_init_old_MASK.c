
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct domain {int dom_flags; TYPE_1__* dom_old; } ;
struct TYPE_2__ {int (* dom_init ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct domain *VAR_1)
{
 FUNC_0(VAR_1->dom_flags & VAR_0);
 FUNC_0(VAR_1->dom_old != ((void*)0));

 if (VAR_1->dom_old->dom_init != ((void*)0))
  VAR_1->dom_old->dom_init();
}
