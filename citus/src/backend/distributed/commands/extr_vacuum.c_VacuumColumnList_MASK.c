
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rels; } ;
typedef TYPE_1__ VacuumStmt ;
struct TYPE_5__ {int * va_cols; } ;
typedef TYPE_2__ VacuumRelation ;
typedef int List ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static List *
FUNC_1(VacuumStmt *VAR_0, int VAR_1)
{
 VacuumRelation *VAR_2 = (VacuumRelation *) FUNC_0(VAR_0->rels,
                 VAR_1);

 return VAR_2->va_cols;
}
