
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; int name; } ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,int,char) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_2, struct symbol *VAR_3, const char *VAR_4, void *VAR_5)
{

 if (VAR_3->type == VAR_1 && *VAR_4 != 'n')
  FUNC_0(VAR_2, "%s%s=%c\n", VAR_0, VAR_3->name, (char)FUNC_1(*VAR_4));
}
