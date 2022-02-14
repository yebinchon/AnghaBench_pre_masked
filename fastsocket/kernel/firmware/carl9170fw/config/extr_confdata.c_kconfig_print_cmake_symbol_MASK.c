
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; char* name; } ;
typedef int FILE ;


 char* VAR_0 ;





 int FUNC_0 () ;
 int FUNC_1 (int *,char*,char*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, struct symbol *VAR_2, const char *VAR_3, void *VAR_4)
{

 switch (VAR_2->type) {
 case 132:
 case 128:
  if (*VAR_3 == 'n') {
   bool VAR_5 = (VAR_4 != ((void*)0));

   if (!VAR_5)
    FUNC_1(VAR_1, "set(%s%s false)\n",
     VAR_0, VAR_2->name, VAR_3);
   return;
  } else if (*VAR_3 == 'm') {
   FUNC_0();
  } else {
   FUNC_1(VAR_1, "set(%s%s true)\n", VAR_0, VAR_2->name, VAR_3);
  }
  break;
 case 131: {
  const char *VAR_6 = "";

  if (VAR_3[0] != '0' || (VAR_3[1] != 'x' && VAR_3[1] != 'X'))
   VAR_6 = "0x";
  FUNC_1(VAR_1, "set(%s%s %s%s)\n",
      VAR_0, VAR_2->name, VAR_6, VAR_3);
  break;
 }
 case 129:
 case 130:
  FUNC_1(VAR_1, "set(%s%s %s)\n",
      VAR_0, VAR_2->name, VAR_3);
  break;
 default:
  break;
 }

}
