
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ type; } ;
struct TYPE_4__ {struct expr* expr; struct symbol* sym; } ;
struct TYPE_3__ {int * sym; } ;
struct expr {scalar_t__ type; TYPE_2__ left; TYPE_1__ right; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct expr* FUNC_0 (scalar_t__,struct symbol*,int *) ;
 struct expr* FUNC_1 (int *) ;
 struct expr* FUNC_2 (struct expr*) ;
 scalar_t__ FUNC_3 (struct expr*,struct expr*) ;
 int FUNC_4 (struct expr*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct expr *FUNC_6(struct expr *VAR_11, struct expr *VAR_12)
{
 struct expr *VAR_13;
 struct symbol *VAR_14, *VAR_15;

 if (FUNC_3(VAR_11, VAR_12))
  return FUNC_2(VAR_11);
 if (VAR_11->type != VAR_1 && VAR_11->type != VAR_4 && VAR_11->type != VAR_3 && VAR_11->type != VAR_2)
  return ((void*)0);
 if (VAR_12->type != VAR_1 && VAR_12->type != VAR_4 && VAR_12->type != VAR_3 && VAR_12->type != VAR_2)
  return ((void*)0);
 if (VAR_11->type == VAR_2) {
  VAR_13 = VAR_11->left.expr;
  if (VAR_13->type != VAR_1 && VAR_13->type != VAR_4 && VAR_13->type != VAR_3)
   return ((void*)0);
  VAR_14 = VAR_13->left.sym;
 } else
  VAR_14 = VAR_11->left.sym;
 if (VAR_12->type == VAR_2) {
  if (VAR_12->left.expr->type != VAR_3)
   return ((void*)0);
  VAR_15 = VAR_12->left.expr->left.sym;
 } else
  VAR_15 = VAR_12->left.sym;
 if (VAR_14 != VAR_15)
  return ((void*)0);
 if (VAR_14->type != VAR_5 && VAR_14->type != VAR_6)
  return ((void*)0);
 if (VAR_14->type == VAR_6) {
  if (VAR_11->type == VAR_1 && VAR_12->type == VAR_1 &&
      ((VAR_11->right.sym == &VAR_10 && VAR_12->right.sym == &VAR_8) ||
       (VAR_11->right.sym == &VAR_8 && VAR_12->right.sym == &VAR_10))) {

   return FUNC_0(VAR_4, VAR_14, &VAR_9);
  }
  if (VAR_11->type == VAR_1 && VAR_12->type == VAR_1 &&
      ((VAR_11->right.sym == &VAR_10 && VAR_12->right.sym == &VAR_9) ||
       (VAR_11->right.sym == &VAR_9 && VAR_12->right.sym == &VAR_10))) {

   return FUNC_0(VAR_4, VAR_14, &VAR_8);
  }
  if (VAR_11->type == VAR_1 && VAR_12->type == VAR_1 &&
      ((VAR_11->right.sym == &VAR_8 && VAR_12->right.sym == &VAR_9) ||
       (VAR_11->right.sym == &VAR_9 && VAR_12->right.sym == &VAR_8))) {

   return FUNC_0(VAR_4, VAR_14, &VAR_10);
  }
 }
 if (VAR_14->type == VAR_5 && VAR_14 == VAR_15) {
  if ((VAR_11->type == VAR_2 && VAR_11->left.expr->type == VAR_3 && VAR_12->type == VAR_3) ||
      (VAR_12->type == VAR_2 && VAR_12->left.expr->type == VAR_3 && VAR_11->type == VAR_3))
   return FUNC_1(&VAR_10);
 }

 if (VAR_0) {
  FUNC_5("optimize (");
  FUNC_4(VAR_11, VAR_7);
  FUNC_5(") || (");
  FUNC_4(VAR_12, VAR_7);
  FUNC_5(")?\n");
 }
 return ((void*)0);
}
