
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct Screen {int dummy; } ;
typedef int int8_t ;
struct TYPE_6__ {int cursor_row; scalar_t__ cursor_column; int cursor_charset; void* cursor_font; void* cursor_color; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 struct Screen* FUNC_1 (TYPE_1__*) ;
 void*** VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct Screen*,char) ;

__attribute__((used)) static void FUNC_3(CCaptionSubContext *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    static const int8_t VAR_6[] = {
        11, -1, 1, 2, 3, 4, 12, 13, 14, 15, 5, 6, 7, 8, 9, 10
    };
    const int VAR_7 = ( (VAR_4<<1) & 0x0e) | ( (VAR_5>>5) & 0x01 );
    struct Screen *VAR_8 = FUNC_1(VAR_3);
    int VAR_9, VAR_10;

    if (VAR_6[VAR_7] <= 0) {
        FUNC_0(VAR_3, VAR_0, "Invalid pac index encountered\n");
        return;
    }

    VAR_5 &= 0x1f;

    VAR_3->cursor_row = VAR_6[VAR_7] - 1;
    VAR_3->cursor_color = VAR_2[VAR_5][0];
    VAR_3->cursor_font = VAR_2[VAR_5][1];
    VAR_3->cursor_charset = VAR_1;
    VAR_3->cursor_column = 0;
    VAR_9 = VAR_2[VAR_5][2];
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        FUNC_2(VAR_3, VAR_8, ' ');
    }
}
