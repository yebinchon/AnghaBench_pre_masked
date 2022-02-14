
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct Screen {int row_used; } ;
typedef int int64_t ;
struct TYPE_6__ {int cursor_column; scalar_t__ mode; int screen_touched; int cursor_charset; int cursor_row; } ;
typedef TYPE_1__ CCaptionSubContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,char,...) ;
 struct Screen* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct Screen*,char) ;

__attribute__((used)) static void FUNC_4(CCaptionSubContext *VAR_5, char VAR_6, char VAR_7, int64_t VAR_8)
{
    struct Screen *VAR_9 = FUNC_2(VAR_5);

    FUNC_0(VAR_9->row_used, VAR_5->cursor_row);

    switch (VAR_6) {
      case 0x11:
        VAR_5->cursor_charset = VAR_4;
        break;
      case 0x12:
        if (VAR_5->cursor_column > 0)
            VAR_5->cursor_column -= 1;
        VAR_5->cursor_charset = VAR_3;
        break;
      case 0x13:
        if (VAR_5->cursor_column > 0)
            VAR_5->cursor_column -= 1;
        VAR_5->cursor_charset = VAR_2;
        break;
      default:
        VAR_5->cursor_charset = VAR_1;
        FUNC_3(VAR_5, VAR_9, VAR_6);
        break;
    }

    if (VAR_7) {
        FUNC_3(VAR_5, VAR_9, VAR_7);
    }
    FUNC_3(VAR_5, VAR_9, 0);

    if (VAR_5->mode != VAR_0)
        VAR_5->screen_touched = 1;

    if (VAR_7)
       FUNC_1(VAR_5, "(%c,%c)\n", VAR_6, VAR_7);
    else
       FUNC_1(VAR_5, "(%c)\n", VAR_6);
}
