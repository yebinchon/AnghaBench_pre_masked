
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(Oid VAR_5, char VAR_6)
{
 char *VAR_7 = "the streaming replication model";
 char *VAR_8 = " or setting \"citus.replication_model\" to \"statement\"";

 if (VAR_5 != VAR_2)
 {
  VAR_7 = "tables which use the streaming replication model";
  VAR_8 = "";
 }

 if (VAR_6 == VAR_3 && VAR_4 != 1)
 {
  FUNC_0(VAR_1, (FUNC_1(VAR_0),
      FUNC_3("replication factors above one are incompatible with %s",
          VAR_7),
      FUNC_2("Try again after reducing \"citus.shard_replication_"
        "factor\" to one%s.", VAR_8)));
 }
}
