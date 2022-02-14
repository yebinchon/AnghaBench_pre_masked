
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectType; int newowner; scalar_t__ object; } ;
typedef int StringInfo ;
typedef int List ;
typedef TYPE_1__ AlterOwnerStmt ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, AlterOwnerStmt *VAR_3)
{
 List *VAR_4 = VAR_0;

 FUNC_0(VAR_3->objectType == VAR_1);

 VAR_4 = (List *) VAR_3->object;
 FUNC_3(VAR_2, "ALTER TYPE %s OWNER TO %s;", FUNC_1(VAR_4),
      FUNC_2(VAR_3->newowner, 1));
}
