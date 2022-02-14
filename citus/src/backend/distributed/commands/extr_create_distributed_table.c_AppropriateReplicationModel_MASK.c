
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char
FUNC_4(char VAR_7, bool VAR_8)
{
 if (VAR_8)
 {
  if (VAR_6 != VAR_4)
  {
   FUNC_0(VAR_2, (FUNC_3("using statement-based replication"),
        FUNC_1("The current replication_model setting is "
            "'streaming', which is not supported by "
            "master_create_distributed_table."),
        FUNC_2("Use create_distributed_table to use the streaming "
          "replication model.")));
  }

  return VAR_4;
 }
 else if (VAR_7 == VAR_1)
 {
  return VAR_3;
 }
 else if (VAR_7 == VAR_0)
 {
  return VAR_6;
 }
 else
 {
  if (VAR_6 != VAR_4)
  {
   FUNC_0(VAR_2, (FUNC_3("using statement-based replication"),
        FUNC_1("Streaming replication is supported only for "
            "hash-distributed tables.")));
  }

  return VAR_4;
 }


 return VAR_5;
}
