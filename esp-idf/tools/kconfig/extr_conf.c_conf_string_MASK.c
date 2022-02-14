
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {char const* name; } ;
struct menu {TYPE_1__* prompt; struct symbol* sym; } ;
struct TYPE_2__ {int text; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct symbol*,char const*) ;
 char* VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int*) ;
 char* FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (struct symbol*,char const*) ;

__attribute__((used)) static int FUNC_7(struct menu *VAR_2)
{
 struct symbol *VAR_3 = VAR_2->sym;
 const char *VAR_4;

 while (1) {
  FUNC_3("%*s%s ", VAR_0 - 1, "", FUNC_0(VAR_2->prompt->text));
  FUNC_3("(%s) ", VAR_3->name);
  VAR_4 = FUNC_5(VAR_3);
  if (FUNC_5(VAR_3))
   FUNC_3("[%s] ", VAR_4);
  if (!FUNC_1(VAR_3, VAR_4))
   return 0;
  switch (VAR_1[0]) {
  case '\n':
   break;
  case '?':

   if (VAR_1[1] == '\n') {
    FUNC_2(VAR_2);
    VAR_4 = ((void*)0);
    break;
   }

  default:
   VAR_1[FUNC_4(VAR_1)-1] = 0;
   VAR_4 = VAR_1;
  }
  if (VAR_4 && FUNC_6(VAR_3, VAR_4))
   return 0;
 }
}
