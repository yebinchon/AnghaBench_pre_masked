
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; char* command; scalar_t__ cursorOffset; } ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(Command *VAR_2) {
  if (FUNC_1(VAR_2->buffer, "(\\s+$)|(^$)", VAR_1)) FUNC_2(VAR_2->command, " ");
  FUNC_2(VAR_2->buffer, VAR_2->command);

  FUNC_0(VAR_2->command, 0, VAR_0);
  VAR_2->cursorOffset = 0;
}
