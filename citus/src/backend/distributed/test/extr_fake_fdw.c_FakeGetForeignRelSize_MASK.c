
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* fdw_private; scalar_t__ rows; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_0, RelOptInfo *VAR_1, Oid VAR_2)
{
 VAR_1->rows = 0;
 VAR_1->fdw_private = (void *) FUNC_0(1);
}
