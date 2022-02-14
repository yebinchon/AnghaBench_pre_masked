
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char option; int help_text; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned int VAR_2;
 char VAR_3[FUNC_0(VAR_1) + 1];

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  VAR_3[VAR_2] = VAR_1[VAR_2].option;

 VAR_3[FUNC_0(VAR_1)] = '\0';

 FUNC_1("usage: ar9170user -[%s]\n", VAR_3);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  FUNC_1("\t-%c\t%s\n", VAR_1[VAR_2].option, VAR_1[VAR_2].help_text);

 return VAR_0;
}
