
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; } ;
struct conf_printer {int (* print_symbol ) (int *,struct symbol*,char const*,void*) ;} ;
typedef int FILE ;





 int FUNC_0 (void*) ;
 int FUNC_1 (int *,struct symbol*,char const*,void*) ;
 int FUNC_2 (int *,struct symbol*,char const*,void*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (struct symbol*) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_0, struct symbol *VAR_1,
         struct conf_printer *VAR_2, void *VAR_3)
{
 const char *VAR_4;

 switch (VAR_1->type) {
 case 130:
 case 128:
  break;
 case 129:
  VAR_4 = FUNC_4(VAR_1);
  VAR_4 = FUNC_3(VAR_4);
  VAR_2->print_symbol(VAR_0, VAR_1, VAR_4, VAR_3);
  FUNC_0((void *)VAR_4);
  break;
 default:
  VAR_4 = FUNC_4(VAR_1);
  VAR_2->print_symbol(VAR_0, VAR_1, VAR_4, VAR_3);
 }
}
