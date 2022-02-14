
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * taskPlacementList; } ;
typedef TYPE_1__ Task ;
struct TYPE_10__ {scalar_t__ format; int indent; int str; } ;
typedef int ShardPlacement ;
typedef int List ;
typedef TYPE_2__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *,int,TYPE_2__*) ;
 int FUNC_1 (char*,int *,int,TYPE_2__*) ;
 int FUNC_2 (char*,char*,TYPE_2__*) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7(Task *VAR_2, int VAR_3, List *VAR_4, ExplainState *VAR_5)
{
 FUNC_1("Task", ((void*)0), 1, VAR_5);

 if (VAR_5->format == VAR_0)
 {
  FUNC_5(VAR_5->str, VAR_5->indent * 2);
  FUNC_4(VAR_5->str, "->  Task\n");
  VAR_5->indent += 3;
 }

 if (VAR_4 != VAR_1)
 {
  List *VAR_6 = VAR_2->taskPlacementList;
  ShardPlacement *VAR_7 = FUNC_6(VAR_6, VAR_3);

  FUNC_3(VAR_7, VAR_4, VAR_5);
 }
 else
 {
  FUNC_2("Error", "Could not get remote plan.", VAR_5);
 }

 FUNC_0("Task", ((void*)0), 1, VAR_5);

 if (VAR_5->format == VAR_0)
 {
  VAR_5->indent -= 3;
 }
}
