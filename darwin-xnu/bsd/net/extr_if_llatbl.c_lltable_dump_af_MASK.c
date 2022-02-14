
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_req {int dummy; } ;
struct lltable {int llt_af; TYPE_1__* llt_ifp; scalar_t__ llt_dump_entry; } ;
typedef int llt_foreach_cb_t ;
struct TYPE_3__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lltable*,int *,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_4(struct lltable *VAR_1, struct sysctl_req *VAR_2)
{
 int VAR_3;

 FUNC_2();

 if (VAR_1->llt_ifp->if_flags & VAR_0)
  return (0);
 VAR_3 = 0;

 FUNC_0(VAR_1->llt_ifp, VAR_1->llt_af);
 VAR_3 = FUNC_3(VAR_1,
     (llt_foreach_cb_t *)VAR_1->llt_dump_entry, VAR_2);
 FUNC_1(VAR_1->llt_ifp, VAR_1->llt_af);

 return (VAR_3);
}
