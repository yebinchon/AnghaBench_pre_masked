
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ behavior; int removeType; int objects; scalar_t__ missing_ok; } ;
typedef int StringInfo ;
typedef TYPE_1__ DropStmt ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_1, DropStmt *VAR_2)
{
 FUNC_2(VAR_1, "DROP %s ", FUNC_1(VAR_2->removeType));

 if (VAR_2->missing_ok)
 {
  FUNC_3(VAR_1, "IF EXISTS ");
 }

 FUNC_0(VAR_1, VAR_2->objects, VAR_2->removeType);

 if (VAR_2->behavior == VAR_0)
 {
  FUNC_3(VAR_1, " CASCADE");
 }

 FUNC_3(VAR_1, ";");
}
