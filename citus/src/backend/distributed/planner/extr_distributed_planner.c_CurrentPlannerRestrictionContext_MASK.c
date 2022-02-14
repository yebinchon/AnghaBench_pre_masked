
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlannerRestrictionContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static PlannerRestrictionContext *
FUNC_6(void)
{
 PlannerRestrictionContext *VAR_4 = ((void*)0);

 FUNC_0(VAR_3 != VAR_2);

 VAR_4 =
  (PlannerRestrictionContext *) FUNC_5(VAR_3);

 if (VAR_4 == ((void*)0))
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_4("planner restriction context stack was empty"),
      FUNC_3("Please report this to the Citus core team.")));
 }

 return VAR_4;
}
