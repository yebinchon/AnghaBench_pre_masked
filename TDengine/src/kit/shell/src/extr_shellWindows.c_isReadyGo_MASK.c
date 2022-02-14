
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; int command; } ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,char*,int ) ;

int FUNC_3(Command *VAR_3) {
  char VAR_4[VAR_0];
  FUNC_0(VAR_4, 0, VAR_0);
  FUNC_2(VAR_4, "%s%s", VAR_3->buffer, VAR_3->command);

  char *VAR_5 =
      "(^.*;\\s*$)|(^\\s*$)|(^\\s*exit\\s*$)|(^\\s*q\\s*$)|(^\\s*quit\\s*$)|(^"
      "\\s*clear\\s*$)";
  if (FUNC_1(VAR_4, VAR_5, VAR_1 | VAR_2)) return 1;

  return 0;
}
