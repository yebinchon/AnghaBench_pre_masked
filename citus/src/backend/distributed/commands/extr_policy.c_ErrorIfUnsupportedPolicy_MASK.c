
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(Relation VAR_2)
{
 if (FUNC_4(VAR_2))
 {
  FUNC_0(VAR_1, (FUNC_1(VAR_0),
      FUNC_3("policies on distributed tables are only supported in "
          "Citus Enterprise"),
      FUNC_2("Remove any policies on a table before distributing")));
 }
}
