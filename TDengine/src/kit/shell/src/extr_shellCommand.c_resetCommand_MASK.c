
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursorOffset; int commandSize; int endOffset; int screenOffset; scalar_t__ bufferSize; int command; int buffer; } ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char const*,int*,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char const*) ;

void FUNC_6(Command *VAR_2, const char VAR_3[]) {
  FUNC_0(VAR_2->cursorOffset <= VAR_2->commandSize && VAR_2->endOffset >= VAR_2->screenOffset);

  FUNC_1(VAR_2->endOffset + VAR_1, VAR_2->screenOffset + VAR_1);
  FUNC_3(VAR_2->buffer, 0, VAR_0);
  FUNC_3(VAR_2->command, 0, VAR_0);
  FUNC_5(VAR_2->command, VAR_3);
  int VAR_4 = 0;
  int VAR_5 = 0;
  FUNC_2(VAR_3, &VAR_4, &VAR_5);
  VAR_2->bufferSize = 0;
  VAR_2->commandSize = VAR_4;
  VAR_2->cursorOffset = VAR_4;
  VAR_2->screenOffset = VAR_5;
  VAR_2->endOffset = VAR_5;
  FUNC_4(VAR_2);
}
