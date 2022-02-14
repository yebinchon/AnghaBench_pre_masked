
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void)
{
 if (FUNC_0() && !VAR_3)
 {
  FUNC_1(VAR_0, (FUNC_3("writing to worker nodes is not currently allowed"),
      FUNC_2("the database is in recovery mode")));
 }

 if (VAR_1 == VAR_2)
 {
  FUNC_1(VAR_0, (FUNC_3("writing to worker nodes is not currently allowed"),
      FUNC_2("citus.use_secondary_nodes is set to 'always'")));
 }
}
