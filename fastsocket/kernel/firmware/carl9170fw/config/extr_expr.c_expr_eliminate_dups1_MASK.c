
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




 struct expr* VAR_0 ;
 struct expr* VAR_1 ;
 struct expr* FUNC_0 (int *) ;
 int FUNC_1 (struct expr*) ;
 struct expr* FUNC_2 (struct expr*,struct expr*) ;
 struct expr* FUNC_3 (struct expr*,struct expr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(enum expr_type VAR_5, struct expr **VAR_6, struct expr **VAR_7)
{


 struct expr *VAR_8;

 if ((*VAR_6)->type == VAR_5) {
  FUNC_4(VAR_5, &(*VAR_6)->left.expr, &(*VAR_7));
  FUNC_4(VAR_5, &(*VAR_6)->right.expr, &(*VAR_7));
  return;
 }
 if ((*VAR_7)->type == VAR_5) {
  FUNC_4(VAR_5, &(*VAR_6), &(*VAR_7)->left.expr);
  FUNC_4(VAR_5, &(*VAR_6), &(*VAR_7)->right.expr);
  return;
 }
 if ((*VAR_6) == (*VAR_7))
  return;

 switch ((*VAR_6)->type) {
 case 128: case 129:
  FUNC_4((*VAR_6)->type, &(*VAR_6), &(*VAR_6));
 default:
  ;
 }

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_3((*VAR_6), (*VAR_7));
  if (VAR_8) {
   FUNC_1((*VAR_6)); FUNC_1((*VAR_7));
   (*VAR_6) = FUNC_0(&VAR_2);
   (*VAR_7) = VAR_8;
   VAR_4++;
  }
  break;
 case 129:
  VAR_8 = FUNC_2((*VAR_6), (*VAR_7));
  if (VAR_8) {
   FUNC_1((*VAR_6)); FUNC_1((*VAR_7));
   (*VAR_6) = FUNC_0(&VAR_3);
   (*VAR_7) = VAR_8;
   VAR_4++;
  }
  break;
 default:
  ;
 }


}
