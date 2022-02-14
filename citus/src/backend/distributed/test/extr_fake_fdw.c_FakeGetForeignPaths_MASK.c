
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rows; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int Oid ;
typedef scalar_t__ Cost ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *,scalar_t__,scalar_t__,scalar_t__,int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(PlannerInfo *VAR_1, RelOptInfo *VAR_2, Oid VAR_3)
{
 Cost VAR_4 = 0;
 Cost VAR_5 = VAR_4 + VAR_2->rows;

 FUNC_0(VAR_2, (Path *) FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_2->rows,
                VAR_4, VAR_5, VAR_0,
                ((void*)0), ((void*)0), VAR_0));
}
