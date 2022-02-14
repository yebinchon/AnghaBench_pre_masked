
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 if (FUNC_0())
 {
  FUNC_2(VAR_1, (FUNC_5("cannot create function because there was a "
          "parallel operation on a distributed table in the "
          "transaction"),
      FUNC_3("When creating a distributed function, Citus needs to "
          "perform all operations over a single connection per "
          "node to ensure consistency."),
      FUNC_4("Try re-running the transaction with "
        "\"SET LOCAL citus.multi_shard_modify_mode TO "
        "\'sequential\';\"")));
 }

 FUNC_2(VAR_0, (FUNC_5("switching to sequential query execution mode"),
      FUNC_3(
       "A distributed function is created. To make sure subsequent "
       "commands see the type correctly we need to make sure to "
       "use only one connection for all future commands")));
 FUNC_1();
}
