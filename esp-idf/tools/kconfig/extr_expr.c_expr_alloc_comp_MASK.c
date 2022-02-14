
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_4__ {struct symbol* sym; } ;
struct TYPE_3__ {struct symbol* sym; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
typedef enum expr_type { ____Placeholder_expr_type } expr_type ;


 struct expr* FUNC_0 (int,int) ;

struct expr *FUNC_1(enum expr_type VAR_0, struct symbol *VAR_1, struct symbol *VAR_2)
{
 struct expr *VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 VAR_3->type = VAR_0;
 VAR_3->left.sym = VAR_1;
 VAR_3->right.sym = VAR_2;
 return VAR_3;
}
