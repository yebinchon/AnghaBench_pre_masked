
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursorOffset; scalar_t__ commandSize; scalar_t__ endOffset; scalar_t__ screenOffset; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Command *VAR_1) {
  FUNC_0(VAR_1->cursorOffset <= VAR_1->commandSize && VAR_1->endOffset >= VAR_1->screenOffset);

  if (VAR_1->cursorOffset < VAR_1->commandSize) {
    FUNC_1(VAR_1->endOffset + VAR_0, VAR_1->screenOffset + VAR_0);
    VAR_1->cursorOffset = VAR_1->commandSize;
    VAR_1->screenOffset = VAR_1->endOffset;
    FUNC_2(VAR_1);
  }
}
