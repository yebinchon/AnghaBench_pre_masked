
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {scalar_t__ cursorOffset; scalar_t__ commandSize; scalar_t__ endOffset; scalar_t__ screenOffset; scalar_t__ command; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(Command *VAR_1, char *VAR_2, int VAR_3) {
  FUNC_0(VAR_1->cursorOffset <= VAR_1->commandSize && VAR_1->endOffset >= VAR_1->screenOffset);

  wchar_t VAR_4;
  if (FUNC_2(&VAR_4, VAR_2, VAR_3) < 0) return;

  FUNC_1(VAR_1->endOffset + VAR_0, VAR_1->screenOffset + VAR_0);

  FUNC_4(VAR_1->command + VAR_1->cursorOffset + VAR_3, VAR_1->command + VAR_1->cursorOffset,
          VAR_1->commandSize - VAR_1->cursorOffset);
  FUNC_3(VAR_1->command + VAR_1->cursorOffset, VAR_2, VAR_3);

  VAR_1->commandSize += VAR_3;
  VAR_1->cursorOffset += VAR_3;
  VAR_1->screenOffset += FUNC_6(VAR_4);
  VAR_1->endOffset += FUNC_6(VAR_4);
  FUNC_5(VAR_1);
}
