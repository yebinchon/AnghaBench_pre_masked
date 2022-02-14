
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ name; } ;
struct menu {struct menu* next; struct menu* list; struct symbol* sym; } ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 (struct menu*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct symbol*) ;
 scalar_t__ FUNC_7 (struct symbol*) ;
 scalar_t__ FUNC_8 (struct symbol*) ;
 int FUNC_9 (struct symbol*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_10(struct menu *VAR_7)
{
 struct symbol *VAR_8;
 struct menu *VAR_9;

 if (!FUNC_3(VAR_7))
  return;

 VAR_8 = VAR_7->sym;
 if (VAR_8 && !FUNC_6(VAR_8)) {
  if (FUNC_7(VAR_8) ||
      (FUNC_8(VAR_8) && FUNC_5(VAR_8) == VAR_6)) {
   if (VAR_2 == VAR_3) {
    if (VAR_8->name && !FUNC_9(VAR_8)) {
     FUNC_4("%s%s\n", VAR_0, VAR_8->name);
    }
   } else if (VAR_2 != VAR_4) {
    if (!VAR_1++)
     FUNC_4(FUNC_0("*\n* Restart config...\n*\n"));
    VAR_5 = FUNC_2(VAR_7);
    FUNC_1(VAR_5);
   }
  }
 }

 for (VAR_9 = VAR_7->list; VAR_9; VAR_9 = VAR_9->next)
  FUNC_10(VAR_9);
}
