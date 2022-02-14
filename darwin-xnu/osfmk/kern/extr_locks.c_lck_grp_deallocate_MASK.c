
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lck_grp_refcnt; } ;
typedef TYPE_1__ lck_grp_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(
 lck_grp_t *VAR_0)
{
 if (FUNC_0(&VAR_0->lck_grp_refcnt, 1) == 0)
   FUNC_1(VAR_0, sizeof(lck_grp_t));
}
