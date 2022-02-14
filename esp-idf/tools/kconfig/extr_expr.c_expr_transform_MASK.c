
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* sym; struct expr* expr; } ;
struct TYPE_7__ {struct expr* expr; TYPE_3__* sym; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;
struct TYPE_9__ {char* name; int type; } ;
 int VAR_0 ;
 void* FUNC_0 (int const,struct expr*) ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct expr*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_3__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_3__ VAR_3 ;

struct expr *FUNC_4(struct expr *VAR_4)
{
 struct expr *VAR_5;

 if (!VAR_4)
  return ((void*)0);
 switch (VAR_4->type) {
 case 137:
 case 136:
 case 135:
 case 134:
 case 132:
 case 128:
 case 129:
 case 133:
  break;
 default:
  VAR_4->left.expr = FUNC_4(VAR_4->left.expr);
  VAR_4->right.expr = FUNC_4(VAR_4->right.expr);
 }

 switch (VAR_4->type) {
 case 137:
  if (VAR_4->left.sym->type != VAR_0)
   break;
  if (VAR_4->right.sym == &VAR_2) {
   VAR_4->type = 131;
   VAR_4->left.expr = FUNC_1(VAR_4->left.sym);
   VAR_4->right.sym = ((void*)0);
   break;
  }
  if (VAR_4->right.sym == &VAR_1) {
   FUNC_3("boolean symbol %s tested for 'm'? test forced to 'n'\n", VAR_4->left.sym->name);
   VAR_4->type = 129;
   VAR_4->left.sym = &VAR_2;
   VAR_4->right.sym = ((void*)0);
   break;
  }
  if (VAR_4->right.sym == &VAR_3) {
   VAR_4->type = 129;
   VAR_4->right.sym = ((void*)0);
   break;
  }
  break;
 case 128:
  if (VAR_4->left.sym->type != VAR_0)
   break;
  if (VAR_4->right.sym == &VAR_2) {
   VAR_4->type = 129;
   VAR_4->right.sym = ((void*)0);
   break;
  }
  if (VAR_4->right.sym == &VAR_1) {
   FUNC_3("boolean symbol %s tested for 'm'? test forced to 'y'\n", VAR_4->left.sym->name);
   VAR_4->type = 129;
   VAR_4->left.sym = &VAR_3;
   VAR_4->right.sym = ((void*)0);
   break;
  }
  if (VAR_4->right.sym == &VAR_3) {
   VAR_4->type = 131;
   VAR_4->left.expr = FUNC_1(VAR_4->left.sym);
   VAR_4->right.sym = ((void*)0);
   break;
  }
  break;
 case 131:
  switch (VAR_4->left.expr->type) {
  case 131:

   VAR_5 = VAR_4->left.expr->left.expr;
   FUNC_2(VAR_4->left.expr);
   FUNC_2(VAR_4);
   VAR_4 = VAR_5;
   VAR_4 = FUNC_4(VAR_4);
   break;
  case 137:
  case 128:

   VAR_5 = VAR_4->left.expr;
   FUNC_2(VAR_4);
   VAR_4 = VAR_5;
   VAR_4->type = VAR_4->type == 137 ? 128 : 137;
   break;
  case 134:
  case 136:

   VAR_5 = VAR_4->left.expr;
   FUNC_2(VAR_4);
   VAR_4 = VAR_5;
   VAR_4->type = VAR_4->type == 134 ? 135 : 132;
   break;
  case 132:
  case 135:

   VAR_5 = VAR_4->left.expr;
   FUNC_2(VAR_4);
   VAR_4 = VAR_5;
   VAR_4->type = VAR_4->type == 132 ? 136 : 134;
   break;
  case 130:

   VAR_5 = VAR_4->left.expr;
   VAR_4->type = 138;
   VAR_4->right.expr = FUNC_0(131, VAR_5->right.expr);
   VAR_5->type = 131;
   VAR_5->right.expr = ((void*)0);
   VAR_4 = FUNC_4(VAR_4);
   break;
  case 138:

   VAR_5 = VAR_4->left.expr;
   VAR_4->type = 130;
   VAR_4->right.expr = FUNC_0(131, VAR_5->right.expr);
   VAR_5->type = 131;
   VAR_5->right.expr = ((void*)0);
   VAR_4 = FUNC_4(VAR_4);
   break;
  case 129:
   if (VAR_4->left.expr->left.sym == &VAR_3) {

    VAR_5 = VAR_4->left.expr;
    FUNC_2(VAR_4);
    VAR_4 = VAR_5;
    VAR_4->type = 129;
    VAR_4->left.sym = &VAR_2;
    break;
   }
   if (VAR_4->left.expr->left.sym == &VAR_1) {

    VAR_5 = VAR_4->left.expr;
    FUNC_2(VAR_4);
    VAR_4 = VAR_5;
    VAR_4->type = 129;
    VAR_4->left.sym = &VAR_1;
    break;
   }
   if (VAR_4->left.expr->left.sym == &VAR_2) {

    VAR_5 = VAR_4->left.expr;
    FUNC_2(VAR_4);
    VAR_4 = VAR_5;
    VAR_4->type = 129;
    VAR_4->left.sym = &VAR_3;
    break;
   }
   break;
  default:
   ;
  }
  break;
 default:
  ;
 }
 return VAR_4;
}
