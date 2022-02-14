
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; char* name; } ;
typedef int FILE ;


 char* VAR_0 ;


 int FUNC_0 (int *,char*,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, struct symbol *VAR_2, const char *VAR_3, void *VAR_4)
{

 switch (VAR_2->type) {
 case 129:
 case 128:
  break;
 default:
  break;
 }

 FUNC_0(VAR_1, "%s%s=%s\n", VAR_0, VAR_2->name, VAR_3);
}
