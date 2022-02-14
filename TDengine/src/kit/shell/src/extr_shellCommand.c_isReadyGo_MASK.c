
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursorOffset; scalar_t__ commandSize; scalar_t__ endOffset; scalar_t__ screenOffset; scalar_t__ command; char* buffer; } ;
typedef TYPE_1__ Command ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,char*,scalar_t__) ;

int FUNC_6(Command *VAR_3) {
  FUNC_0(VAR_3->cursorOffset <= VAR_3->commandSize && VAR_3->endOffset >= VAR_3->screenOffset);

  char *VAR_4 = (char *)FUNC_1(1, VAR_0);
  FUNC_3(VAR_3->command + VAR_3->commandSize, 0, VAR_0 - VAR_3->commandSize);
  FUNC_5(VAR_4, "%s%s", VAR_3->buffer, VAR_3->command);

  char *VAR_5 =
    "(^.*;\\s*$)|(^\\s*$)|(^\\s*exit\\s*$)|(^\\s*q\\s*$)|(^\\s*quit\\s*$)|(^"
    "\\s*clear\\s*$)";
  if (FUNC_4(VAR_4, VAR_5, VAR_1 | VAR_2)) {
    FUNC_2(VAR_4);
    return 1;
  }

  FUNC_2(VAR_4);
  return 0;
}
