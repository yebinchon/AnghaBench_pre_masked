
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4()
{
 FUNC_0(VAR_0, (FUNC_3("the intermediate result size exceeds "
         "citus.max_intermediate_result_size (currently %d kB)",
         VAR_1),
     FUNC_1("Citus restricts the size of intermediate "
         "results of complex subqueries and CTEs to "
         "avoid accidentally pulling large result sets "
         "into once place."),
     FUNC_2("To run the current query, set "
       "citus.max_intermediate_result_size to a higher"
       " value or -1 to disable.")));
}
