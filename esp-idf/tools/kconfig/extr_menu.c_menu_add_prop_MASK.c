
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expr; } ;
struct property {char* text; TYPE_1__ visible; struct expr* expr; struct menu* menu; } ;
struct menu {struct property* prompt; int visibility; struct menu* parent; int sym; } ;
struct expr {int dummy; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;


 int VAR_0 ;
 struct menu* VAR_1 ;
 int FUNC_0 (int ,struct expr*) ;
 struct expr* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (struct expr*) ;
 struct property* FUNC_4 (int,int ) ;
 int FUNC_5 (struct property*,char*) ;
 struct menu VAR_2 ;

__attribute__((used)) static struct property *FUNC_6(enum prop_type VAR_3, char *VAR_4, struct expr *VAR_5, struct expr *VAR_6)
{
 struct property *VAR_7 = FUNC_4(VAR_3, VAR_1->sym);

 VAR_7->menu = VAR_1;
 VAR_7->expr = VAR_5;
 VAR_7->visible.expr = FUNC_3(VAR_6);

 if (VAR_4) {
  if (FUNC_2(*VAR_4)) {
   FUNC_5(VAR_7, "leading whitespace ignored");
   while (FUNC_2(*VAR_4))
    VAR_4++;
  }
  if (VAR_1->prompt && VAR_1 != &VAR_2)
   FUNC_5(VAR_7, "prompt redefined");


  if(VAR_3 == VAR_0) {
   struct menu *VAR_8 = VAR_1;

   while ((VAR_8 = VAR_8->parent) != ((void*)0)) {
    struct expr *VAR_9;

    if (!VAR_8->visibility)
     continue;
    VAR_9 = FUNC_1(VAR_8->visibility);

    VAR_7->visible.expr
     = FUNC_0(VAR_7->visible.expr,
        VAR_9);
   }
  }

  VAR_1->prompt = VAR_7;
 }
 VAR_7->text = VAR_4;

 return VAR_7;
}
