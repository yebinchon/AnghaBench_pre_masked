
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Term ;
struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef int Nonterm ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(Term VAR_0, Nonterm VAR_1, int VAR_2) {
 int VAR_3;
 Term VAR_4;

 FUNC_1("static void %Plabel(NODEPTR_TYPE a) {\n%1int c;\n"
"%1struct %Pstate *p;\n\n"
"%1if (!a)\n%2fatal(\"%Plabel\", \"Null tree\\n\", 0);\n");
 FUNC_1("%1STATE_LABEL(a) = p = allocate(sizeof *p, FUNC);\n"
"%1p->rule._stmt = 0;\n");
 for (VAR_3 = 1; VAR_3 <= VAR_2; VAR_3++)
  FUNC_1("%1p->cost[%d] =\n", VAR_3);
 FUNC_1("%20x7fff;\n%1switch (OP_LABEL(a)) {\n");
 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->link)
  FUNC_0(VAR_4, VAR_2);
 FUNC_1("%1default:\n"
"%2fatal(\"%Plabel\", \"Bad terminal %%d\\n\", OP_LABEL(a));\n%1}\n}\n\n");
}
