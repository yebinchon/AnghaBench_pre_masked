
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * sym; struct expr* expr; } ;
struct TYPE_5__ {TYPE_1__* sym; struct expr* expr; } ;
struct expr {int type; TYPE_3__ right; TYPE_2__ left; } ;
struct TYPE_4__ {int type; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

struct expr *FUNC_0(struct expr *VAR_3)
{
 if (!VAR_3)
  return ((void*)0);
 switch (VAR_3->type) {
 case 131:
 case 129:
 case 130:
  VAR_3->left.expr = FUNC_0(VAR_3->left.expr);
  VAR_3->right.expr = FUNC_0(VAR_3->right.expr);
  break;
 case 128:

  if (VAR_3->left.sym->type == VAR_1) {
   if (VAR_3->right.sym == &VAR_2) {
    VAR_3->type = VAR_0;
    VAR_3->right.sym = ((void*)0);
   }
  }
  break;
 default:
  ;
 }
 return VAR_3;
}
