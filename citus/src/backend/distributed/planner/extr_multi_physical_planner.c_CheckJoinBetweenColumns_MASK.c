
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * args; } ;
typedef TYPE_1__ OpExpr ;
typedef scalar_t__ NodeTag ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(OpExpr *VAR_3)
{
 List *VAR_4 = VAR_3->args;
 Node *VAR_5 = (Node *) FUNC_4(VAR_4);
 Node *VAR_6 = (Node *) FUNC_5(VAR_4);
 Node *VAR_7 = FUNC_7(VAR_5);
 Node *VAR_8 = FUNC_7(VAR_6);

 NodeTag VAR_9 = FUNC_6(VAR_7);
 NodeTag VAR_10 = FUNC_6(VAR_8);

 if (VAR_9 != VAR_2 || VAR_10 != VAR_2)
 {
  FUNC_0(VAR_1, (FUNC_1(VAR_0),
      FUNC_3("cannot perform local joins that involve expressions"),
      FUNC_2("local joins can be performed between columns only")));
 }
}
