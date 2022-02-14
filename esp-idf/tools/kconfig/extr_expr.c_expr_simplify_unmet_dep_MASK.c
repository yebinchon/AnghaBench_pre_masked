
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;




 struct expr* FUNC_0 (struct expr*,struct expr*) ;
 struct expr* FUNC_1 (struct expr*) ;
 struct expr* FUNC_2 (struct expr*) ;
 int FUNC_3 (struct expr*,struct expr*) ;
 int FUNC_4 (struct expr*) ;
 struct expr* FUNC_5 (struct expr*) ;

struct expr *FUNC_6(struct expr *VAR_0, struct expr *VAR_1)
{
 struct expr *VAR_2;

 switch (VAR_0->type) {
 case 128:
  return FUNC_0(
      FUNC_6(VAR_0->left.expr, VAR_1),
      FUNC_6(VAR_0->right.expr, VAR_1));
 case 129: {
  struct expr *VAR_3;
  VAR_3 = FUNC_0(FUNC_1(VAR_0), FUNC_1(VAR_1));
  VAR_3 = FUNC_2(VAR_3);
  VAR_2 = (!FUNC_3(VAR_3, VAR_0)) ? VAR_0 : ((void*)0);
  FUNC_4(VAR_3);
  break;
  }
 default:
  VAR_2 = VAR_0;
  break;
 }

 return FUNC_5(VAR_2);
}
