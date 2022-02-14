
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 if (!FUNC_0())
 {

  return;
 }

 if (FUNC_1())
 {
  FUNC_3(VAR_1, (FUNC_6("cannot create or modify type because there was a "
          "parallel operation on a distributed table in the "
          "transaction"),
      FUNC_4("When creating or altering a type, Citus needs to "
          "perform all operations over a single connection per "
          "node to ensure consistency."),
      FUNC_5("Try re-running the transaction with "
        "\"SET LOCAL citus.multi_shard_modify_mode TO "
        "\'sequential\';\"")));
 }

 FUNC_3(VAR_0, (FUNC_6("switching to sequential query execution mode"),
      FUNC_4("Type is created or altered. To make sure subsequent "
          "commands see the type correctly we need to make sure to "
          "use only one connection for all future commands")));
 FUNC_2();
}
