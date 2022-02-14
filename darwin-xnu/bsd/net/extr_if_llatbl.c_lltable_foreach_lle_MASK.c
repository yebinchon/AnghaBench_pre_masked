
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int (* llt_foreach_entry ) (struct lltable*,int *,void*) ;} ;
typedef int llt_foreach_cb_t ;


 int FUNC_0 (struct lltable*,int *,void*) ;

int
FUNC_1(struct lltable *VAR_0, llt_foreach_cb_t *VAR_1, void *VAR_2)
{
 return (VAR_0->llt_foreach_entry(VAR_0, VAR_1, VAR_2));
}
