
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* lhs; int packed; int ern; } ;
struct TYPE_4__ {scalar_t__ chain; } ;
typedef TYPE_2__* Rule ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, Rule VAR_2, char *VAR_3, int VAR_4) {
 if (VAR_0)
  FUNC_0("%s%Ptrace(a, %d, %s + %d, p->cost[%P%S_NT]);\n",
   VAR_1, VAR_2->ern, VAR_3, VAR_4, VAR_2->lhs);
 FUNC_0("%sif (", VAR_1);
 FUNC_0("%s + %d < p->cost[%P%S_NT]) {\n"
"%s%1p->cost[%P%S_NT] = %s + %d;\n%s%1p->rule.%P%S = %d;\n",
  VAR_3, VAR_4, VAR_2->lhs, VAR_1, VAR_2->lhs, VAR_3, VAR_4, VAR_1, VAR_2->lhs,
  VAR_2->packed);
 if (VAR_2->lhs->chain)
  FUNC_0("%s%1%Pclosure_%S(a, %s + %d);\n", VAR_1, VAR_2->lhs, VAR_3, VAR_4);
 FUNC_0("%s}\n", VAR_1);
}
