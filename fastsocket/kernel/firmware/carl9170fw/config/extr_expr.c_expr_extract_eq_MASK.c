
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct expr* VAR_2 ;
 struct expr* VAR_3 ;
 void* FUNC_0 (int *) ;
 struct expr* FUNC_1 (int,struct expr*,struct expr*) ;
 scalar_t__ FUNC_2 (struct expr*,struct expr*) ;
 int FUNC_3 (struct expr*) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4(enum expr_type VAR_6, struct expr **VAR_7, struct expr **VAR_8, struct expr **VAR_9)
{


 if ((*VAR_8)->type == VAR_6) {
  FUNC_4(VAR_6, VAR_7, &(*VAR_8)->left.expr, &(*VAR_9));
  FUNC_4(VAR_6, VAR_7, &(*VAR_8)->right.expr, &(*VAR_9));
  return;
 }
 if ((*VAR_9)->type == VAR_6) {
  FUNC_4(VAR_6, VAR_7, VAR_8, &(*VAR_9)->left.expr);
  FUNC_4(VAR_6, VAR_7, VAR_8, &(*VAR_9)->right.expr);
  return;
 }
 if (FUNC_2((*VAR_8), (*VAR_9))) {
  *VAR_7 = *VAR_7 ? FUNC_1(VAR_6, *VAR_7, (*VAR_8)) : (*VAR_8);
  FUNC_3((*VAR_9));
  if (VAR_6 == VAR_0) {
   (*VAR_8) = FUNC_0(&VAR_5);
   (*VAR_9) = FUNC_0(&VAR_5);
  } else if (VAR_6 == VAR_1) {
   (*VAR_8) = FUNC_0(&VAR_4);
   (*VAR_9) = FUNC_0(&VAR_4);
  }
 }


}
