
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_4__ {struct expr* expr; struct symbol* sym; } ;
struct TYPE_3__ {struct symbol* sym; struct expr* expr; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;
int FUNC_0(struct expr *VAR_0, struct symbol *VAR_1)
{
 if (!VAR_0)
  return 0;

 switch (VAR_0->type) {
 case 137:
 case 130:
  return FUNC_0(VAR_0->left.expr, VAR_1) ||
         FUNC_0(VAR_0->right.expr, VAR_1);
 case 129:
  return VAR_0->left.sym == VAR_1;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 128:
  return VAR_0->left.sym == VAR_1 ||
         VAR_0->right.sym == VAR_1;
 case 131:
  return FUNC_0(VAR_0->left.expr, VAR_1);
 default:
  ;
 }
 return 0;
}
