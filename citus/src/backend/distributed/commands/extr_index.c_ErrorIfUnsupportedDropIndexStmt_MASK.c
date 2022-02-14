
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ removeType; int objects; } ;
typedef TYPE_1__ DropStmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(DropStmt *VAR_3)
{
 FUNC_0(VAR_3->removeType == VAR_2);

 if (FUNC_5(VAR_3->objects) > 1)
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_4("cannot drop multiple distributed objects in a "
          "single command"),
      FUNC_3("Try dropping each object in a separate DROP "
        "command.")));
 }
}
