
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; char* name; } ;
typedef int FILE ;


 char* VAR_0 ;





 int FUNC_0 (int *,char*,char*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, struct symbol *VAR_2, const char *VAR_3, void *VAR_4)
{

 switch (VAR_2->type) {
 case 132:
 case 128: {
  const char *VAR_5 = "";

  switch (*VAR_3) {
  case 'n':
   break;
  case 'm':
   VAR_5 = "_MODULE";

  default:
   FUNC_0(VAR_1, "#define %s%s%s 1\n",
       VAR_0, VAR_2->name, VAR_5);
  }
  break;
 }
 case 131: {
  const char *VAR_6 = "";

  if (VAR_3[0] != '0' || (VAR_3[1] != 'x' && VAR_3[1] != 'X'))
   VAR_6 = "0x";
  FUNC_0(VAR_1, "#define %s%s %s%s\n",
      VAR_0, VAR_2->name, VAR_6, VAR_3);
  break;
 }
 case 129:
 case 130:
  FUNC_0(VAR_1, "#define %s%s %s\n",
      VAR_0, VAR_2->name, VAR_3);
  break;
 default:
  break;
 }

}
