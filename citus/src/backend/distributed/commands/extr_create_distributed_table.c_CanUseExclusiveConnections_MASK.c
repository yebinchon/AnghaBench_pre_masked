
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(Oid VAR_3, bool VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_3);
 bool VAR_6 = VAR_1 == VAR_2 ||
          VAR_5;

 if (!VAR_4 && VAR_6)
 {
  char *VAR_7 = FUNC_7(VAR_3);

  FUNC_3(VAR_0, (FUNC_6("cannot distribute \"%s\" in sequential mode "
          "because it is not empty", VAR_7),
      FUNC_5("If you have manually set "
        "citus.multi_shard_modify_mode to 'sequential', "
        "try with 'parallel' option. If that is not the "
        "case, try distributing local tables when they "
        "are empty.")));
 }
 else if (VAR_6 && FUNC_2())
 {
  char *VAR_8 = FUNC_7(VAR_3);






  FUNC_3(VAR_0, (FUNC_6("cannot distribute relation \"%s\" in this "
          "transaction because it has a foreign key to "
          "a reference table", VAR_8),
      FUNC_4("If a hash distributed table has a foreign key "
          "to a reference table, it has to be created "
          "in sequential mode before any parallel commands "
          "have been executed in the same transaction"),
      FUNC_5("Try re-running the transaction with "
        "\"SET LOCAL citus.multi_shard_modify_mode TO "
        "\'sequential\';\"")));
 }
 else if (VAR_6)
 {
  return 0;
 }
 else if (!VAR_4 || FUNC_1())
 {
  return 1;
 }

 return 0;
}
