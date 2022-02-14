
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct Screen {int row_used; } ;
struct TYPE_5__ {int cursor_row; void* cursor_font; void* cursor_color; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int FUNC_0 (int ,int ) ;
 struct Screen* FUNC_1 (TYPE_1__*) ;
 void*** VAR_0 ;
 int FUNC_2 (TYPE_1__*,struct Screen*,char) ;

__attribute__((used)) static void FUNC_3(CCaptionSubContext *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
    int VAR_4 = VAR_3 - 0x20;
    struct Screen *VAR_5 = FUNC_1(VAR_1);

    if (VAR_4 >= 32)
        return;

    VAR_1->cursor_color = VAR_0[VAR_4][0];
    VAR_1->cursor_font = VAR_0[VAR_4][1];

    FUNC_0(VAR_5->row_used, VAR_1->cursor_row);
    FUNC_2(VAR_1, VAR_5, ' ');
}
