
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* chain; struct TYPE_6__* link; } ;
struct TYPE_5__ {int cost; struct TYPE_5__* chain; } ;
typedef TYPE_1__* Rule ;
typedef TYPE_2__* Nonterm ;


 int FUNC_0 (char*,TYPE_1__*,char*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(Nonterm VAR_0) {
 Nonterm VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->link)
  if (VAR_1->chain)
   FUNC_1("static void %Pclosure_%S(NODEPTR_TYPE, int);\n", VAR_1);
 FUNC_1("\n");
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->link)
  if (VAR_1->chain) {
   Rule VAR_2;
   FUNC_1("static void %Pclosure_%S(NODEPTR_TYPE a, int c) {\n"
"%1struct %Pstate *p = STATE_LABEL(a);\n", VAR_1);
   for (VAR_2 = VAR_1->chain; VAR_2; VAR_2 = VAR_2->chain)
    FUNC_0("\t", VAR_2, "c", VAR_2->cost);
   FUNC_1("}\n\n");
  }
}
