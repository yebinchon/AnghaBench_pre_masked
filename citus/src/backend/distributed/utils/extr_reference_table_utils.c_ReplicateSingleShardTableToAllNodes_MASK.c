
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int shardId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ) ;
 int * VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(Oid VAR_3)
{
 List *VAR_4 = FUNC_3(VAR_3);
 ShardInterval *VAR_5 = (ShardInterval *) FUNC_11(VAR_4);
 uint64 VAR_6 = VAR_5->shardId;

 List *VAR_7 = FUNC_1(
  VAR_5);

 if (VAR_7 != VAR_2 || FUNC_5(VAR_3))
 {
  char *VAR_8 = FUNC_10(VAR_3);
  FUNC_6(VAR_1, (FUNC_7(VAR_0),
      FUNC_9("cannot upgrade to reference table"),
      FUNC_8("Relation \"%s\" is part of a foreign constraint. "
          "Foreign key constraints are not allowed "
          "from or to reference tables.", VAR_8)));
 }







 FUNC_4(VAR_5);






 FUNC_0(VAR_3, VAR_6);






 FUNC_2(VAR_3);
}
