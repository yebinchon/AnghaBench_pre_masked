
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursorOffset; scalar_t__ commandSize; scalar_t__ endOffset; scalar_t__ screenOffset; char* buffer; char* command; int bufferSize; } ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*) ;

void FUNC_5(Command *VAR_2) {
  FUNC_0(VAR_2->cursorOffset <= VAR_2->commandSize && VAR_2->endOffset >= VAR_2->screenOffset);

  if (FUNC_2(VAR_2->buffer, "(\\s+$)|(^$)", VAR_1)) FUNC_4(VAR_2->command, " ");
  FUNC_4(VAR_2->buffer, VAR_2->command);
  VAR_2->bufferSize += VAR_2->commandSize;

  FUNC_1(VAR_2->command, 0, VAR_0);
  VAR_2->cursorOffset = 0;
  VAR_2->screenOffset = 0;
  VAR_2->commandSize = 0;
  VAR_2->endOffset = 0;
  FUNC_3(VAR_2);
}
