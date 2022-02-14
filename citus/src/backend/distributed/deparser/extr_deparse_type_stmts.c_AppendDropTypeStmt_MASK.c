
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ removeType; scalar_t__ behavior; int objects; scalar_t__ missing_ok; } ;
typedef int StringInfo ;
typedef TYPE_1__ DropStmt ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, DropStmt *VAR_3)
{




 FUNC_1(VAR_3->removeType == VAR_1);

 FUNC_2(VAR_2, "DROP TYPE ");
 if (VAR_3->missing_ok)
 {
  FUNC_3(VAR_2, "IF EXISTS ");
 }
 FUNC_0(VAR_2, VAR_3->objects);
 if (VAR_3->behavior == VAR_0)
 {
  FUNC_3(VAR_2, " CASCADE");
 }
 FUNC_3(VAR_2, ";");
}
