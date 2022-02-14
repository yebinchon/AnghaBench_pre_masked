
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {char* name; struct property* prop; } ;
struct property {int lineno; TYPE_2__* file; int type; struct menu* menu; struct property* next; } ;
struct menu {int lineno; TYPE_1__* file; } ;
struct dep_stack {struct property* prop; scalar_t__ expr; struct symbol* sym; struct dep_stack* next; struct dep_stack* prev; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 struct dep_stack* VAR_0 ;
 int FUNC_0 (struct dep_stack*,struct symbol*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 struct symbol* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (struct symbol*) ;
 scalar_t__ FUNC_7 (struct symbol*) ;

__attribute__((used)) static void FUNC_8(struct symbol *VAR_2)
{
 struct dep_stack *VAR_3;
 struct symbol *VAR_4, *VAR_5;
 struct menu *VAR_6 = ((void*)0);
 struct property *VAR_7;
 struct dep_stack VAR_8;

 if (FUNC_7(VAR_2)) {
  FUNC_0(&VAR_8, VAR_2);
  VAR_2 = FUNC_3(FUNC_5(VAR_2));
 }

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->prev)
  if (VAR_3->sym == VAR_2)
   break;
 if (!VAR_3) {
  FUNC_2(VAR_1, "unexpected recursive dependency error\n");
  return;
 }

 for (; VAR_3; VAR_3 = VAR_3->next) {
  VAR_4 = VAR_3->sym;
  VAR_5 = VAR_3->next ? VAR_3->next->sym : VAR_2;
  VAR_7 = VAR_3->prop;
  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_3->sym->prop;


  if (FUNC_6(VAR_4) || FUNC_7(VAR_4)) {
   for (VAR_7 = VAR_4->prop; VAR_7; VAR_7 = VAR_7->next) {
    VAR_6 = VAR_7->menu;
    if (VAR_7->menu)
     break;
   }
  }
  if (VAR_3->sym == VAR_2)
   FUNC_2(VAR_1, "%s:%d:error: recursive dependency detected!\n",
    VAR_7->file->name, VAR_7->lineno);
  if (VAR_3->expr) {
   FUNC_2(VAR_1, "%s:%d:\tsymbol %s %s value contains %s\n",
    VAR_7->file->name, VAR_7->lineno,
    VAR_4->name ? VAR_4->name : "<choice>",
    FUNC_4(VAR_7->type),
    VAR_5->name ? VAR_5->name : "<choice>");
  } else if (VAR_3->prop) {
   FUNC_2(VAR_1, "%s:%d:\tsymbol %s depends on %s\n",
    VAR_7->file->name, VAR_7->lineno,
    VAR_4->name ? VAR_4->name : "<choice>",
    VAR_5->name ? VAR_5->name : "<choice>");
  } else if (FUNC_6(VAR_4)) {
   FUNC_2(VAR_1, "%s:%d:\tchoice %s contains symbol %s\n",
    VAR_6->file->name, VAR_6->lineno,
    VAR_4->name ? VAR_4->name : "<choice>",
    VAR_5->name ? VAR_5->name : "<choice>");
  } else if (FUNC_7(VAR_4)) {
   FUNC_2(VAR_1, "%s:%d:\tsymbol %s is part of choice %s\n",
    VAR_6->file->name, VAR_6->lineno,
    VAR_4->name ? VAR_4->name : "<choice>",
    VAR_5->name ? VAR_5->name : "<choice>");
  } else {
   FUNC_2(VAR_1, "%s:%d:\tsymbol %s is selected by %s\n",
    VAR_7->file->name, VAR_7->lineno,
    VAR_4->name ? VAR_4->name : "<choice>",
    VAR_5->name ? VAR_5->name : "<choice>");
  }
 }

 if (VAR_0 == &VAR_8)
  FUNC_1();
}
