
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_4__ {int sym; struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;
 struct expr* FUNC_0 (int,int ,struct symbol*) ;
 struct expr* FUNC_1 (int const,struct expr*) ;
 struct expr* FUNC_2 (struct symbol*) ;
 struct expr* FUNC_3 (int const,struct expr*,struct expr*) ;
 struct expr* FUNC_4 (struct expr*) ;
 struct symbol VAR_0 ;
 struct symbol VAR_1 ;
 struct symbol VAR_2 ;

struct expr *FUNC_5(struct expr *VAR_3, enum expr_type VAR_4, struct symbol *VAR_5)
{
 struct expr *VAR_6, *VAR_7;

 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_5);
  if (VAR_4 == 128)
   VAR_3 = FUNC_1(132, VAR_3);
  return VAR_3;
 }
 switch (VAR_3->type) {
 case 140:
  VAR_6 = FUNC_5(VAR_3->left.expr, 139, VAR_5);
  VAR_7 = FUNC_5(VAR_3->right.expr, 139, VAR_5);
  if (VAR_5 == &VAR_2)
   VAR_3 = FUNC_3(140, VAR_6, VAR_7);
  if (VAR_5 == &VAR_1)
   VAR_3 = FUNC_3(131, VAR_6, VAR_7);
  if (VAR_4 == 128)
   VAR_3 = FUNC_1(132, VAR_3);
  return VAR_3;
 case 131:
  VAR_6 = FUNC_5(VAR_3->left.expr, 139, VAR_5);
  VAR_7 = FUNC_5(VAR_3->right.expr, 139, VAR_5);
  if (VAR_5 == &VAR_2)
   VAR_3 = FUNC_3(131, VAR_6, VAR_7);
  if (VAR_5 == &VAR_1)
   VAR_3 = FUNC_3(140, VAR_6, VAR_7);
  if (VAR_4 == 128)
   VAR_3 = FUNC_1(132, VAR_3);
  return VAR_3;
 case 132:
  return FUNC_5(VAR_3->left.expr, VAR_4 == 139 ? 128 : 139, VAR_5);
 case 128:
 case 134:
 case 136:
 case 137:
 case 138:
 case 139:
  if (VAR_4 == 139) {
   if (VAR_5 == &VAR_2)
    return FUNC_4(VAR_3);
   if (VAR_5 == &VAR_0)
    return FUNC_2(&VAR_1);
   if (VAR_5 == &VAR_1)
    return FUNC_1(132, FUNC_4(VAR_3));
  } else {
   if (VAR_5 == &VAR_2)
    return FUNC_1(132, FUNC_4(VAR_3));
   if (VAR_5 == &VAR_0)
    return FUNC_2(&VAR_2);
   if (VAR_5 == &VAR_1)
    return FUNC_4(VAR_3);
  }
  break;
 case 129:
  return FUNC_0(VAR_4, VAR_3->left.sym, VAR_5);
 case 135:
 case 130:
 case 133:
             ;
 }
 return ((void*)0);
}
