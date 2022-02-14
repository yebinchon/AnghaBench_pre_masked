
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct Screen {char** characters; char** fonts; char** charsets; } ;
struct TYPE_4__ {size_t cursor_column; size_t cursor_row; char cursor_font; char cursor_charset; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int VAR_0 ;
 char VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static void FUNC_1(CCaptionSubContext *VAR_3, struct Screen *VAR_4, char VAR_5)
{
    uint8_t VAR_6 = VAR_3->cursor_column;
    char *VAR_7 = VAR_4->characters[VAR_3->cursor_row];
    char *VAR_8 = VAR_4->fonts[VAR_3->cursor_row];
    char *VAR_9 = VAR_4->charsets[VAR_3->cursor_row];

    if (VAR_6 < VAR_2) {
        VAR_7[VAR_6] = VAR_5;
        VAR_8[VAR_6] = VAR_3->cursor_font;
        VAR_9[VAR_6] = VAR_3->cursor_charset;
        VAR_3->cursor_charset = VAR_1;
        if (VAR_5) VAR_3->cursor_column++;
        return;
    }

    else if (VAR_6 == VAR_2 && VAR_5 == 0) {
        VAR_7[VAR_6] = VAR_5;
        return;
    }
    else {
        FUNC_0(VAR_3, VAR_0, "Data Ignored since exceeding screen width\n");
        return;
    }
}
