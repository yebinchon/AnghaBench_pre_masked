
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sym; struct expr* expr; } ;
struct TYPE_3__ {int sym; } ;
struct expr {int type; TYPE_2__ left; TYPE_1__ right; } ;


 scalar_t__ VAR_0 ;
 struct expr* FUNC_0 (struct expr*) ;
 int FUNC_1 (struct expr**,struct expr**) ;
 int FUNC_2 (struct expr*,int ) ;
 int FUNC_3 (struct expr*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct expr *VAR_3, struct expr *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3->type != VAR_4->type)
  return 0;
 switch (VAR_3->type) {
 case 139:
 case 138:
 case 137:
 case 136:
 case 134:
 case 128:
  return VAR_3->left.sym == VAR_4->left.sym && VAR_3->right.sym == VAR_4->right.sym;
 case 129:
  return VAR_3->left.sym == VAR_4->left.sym;
 case 132:
  return FUNC_5(VAR_3->left.expr, VAR_4->left.expr);
 case 140:
 case 131:
  VAR_3 = FUNC_0(VAR_3);
  VAR_4 = FUNC_0(VAR_4);
  VAR_6 = VAR_2;
  FUNC_1(&VAR_3, &VAR_4);
  VAR_5 = (VAR_3->type == 129 && VAR_4->type == 129 &&
         VAR_3->left.sym == VAR_4->left.sym);
  FUNC_3(VAR_3);
  FUNC_3(VAR_4);
  VAR_2 = VAR_6;
  return VAR_5;
 case 135:
 case 130:
 case 133:
             ;
 }

 if (VAR_0) {
  FUNC_2(VAR_3, VAR_1);
  FUNC_4(" = ");
  FUNC_2(VAR_4, VAR_1);
  FUNC_4(" ?\n");
 }

 return 0;
}
